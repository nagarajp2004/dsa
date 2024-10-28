#include <vector>
#include <algorithm>
#include <limits.h>
#include<iostream>


using namespace std;

int f(int i, int j, vector<vector<int>>& mat, pair<int, int>& dest, pair<int, int>& mr, vector<vector<int>>& memo) {
 
    if (i < 0 || j < 0 || i >= mat.size() || j >= mat[0].size() || mat[i][j] == 1) {
        return INT_MAX; 
    }
 
    if (i == dest.first && j == dest.second) {
        return 0; 
    }
    
  
    if (memo[i][j] != -1) {
        return memo[i][j];
    }
    
    
    int forward = f(i + mr.first, j + mr.second, mat, dest, mr, memo);
    int backward = f(i - mr.first, j - mr.second, mat, dest, mr, memo);
    int right = f(i + mr.second, j + mr.first, mat, dest, mr, memo);
    int left = f(i - mr.second, j - mr.first, mat, dest, mr, memo);
    
    
    memo[i][j] = 1 + min({forward, backward, right, left});
    
    return memo[i][j];
}

int minMoves(vector<vector<int>>& mat, pair<int, int>& src, pair<int, int>& dest, pair<int, int>& mr) {
    vector<vector<int>> memo(mat.size(), vector<int>(mat[0].size(), -1));
    int result = f(src.first, src.second, mat, dest, mr, memo);
    return result == INT_MAX ? -1 : result; // Return -1 if unreachable
}

// Example usage
int main() {
    // Define the matrix (grid)
    vector<vector<int>> mat = {
        {0, 0, 0, 0, 1, 0},
        {0, 0, 1, 0, 0, 1},
        {0, 1, 0, 1, 0, 0},
        {1, 1, 1, 0, 0, 0},
        {1, 0, 0, 0, 0, 1},
        {1, 0, 0, 1, 1, 0}
    };
    
    pair<int, int> src = {0, 0};   // Starting point
    pair<int, int> dest = {4, 4};  // Destination point
    pair<int, int> mr = {0, 2};     // Move rule

    int moves = minMoves(mat, src, dest, mr);
    cout << moves << endl; 
    return 0;
}
