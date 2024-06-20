 #include<iostream>
 using namespace std;
 #include<vector>
 void subarray(vector<int>&a,int index,int n,vector<vector<int>>&ans,vector<int>temp){
          if(index==n){
            ans.push_back(temp);
            return;
          } 
          subarray(a,index+1,n,ans,temp);
          temp.push_back(a[index]);
          subarray(a,index+1,n,ans,temp);
 }
 
 int main(){
 vector<int>x={1,2,3};
 int n=3;
 vector<vector<int>>ans;
 vector<int>temp;
 subarray(x,0,3,ans,temp);
for(auto i:ans){
    for(auto j:i){
        cout<<j;
    }
    cout<<endl;
}

 }