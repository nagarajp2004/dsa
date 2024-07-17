#include<iostream>
#include<vector>
using namespace std;
vector<int> globalship(vector<vector<int>> &ad,int v,int s)
{
    vector<int>dist(v,1e8);
    dist[s]=0;
    int e=ad.size();
 
   for(int i=0;i<v-1;i++)
   {
        for(int j=0;j<e;j++)
        {
            int u=ad[j][0];
            int v=ad[j][1];
            int w=ad[j][2];
            if(dist[u]==1e8)
            {
                continue;
            }
            if(dist[u]+w<dist[v])
            {
                dist[v]=dist[u]+w;
            }
        }
   }
    for(int j=0;j<e;j++)
        {
            int u=ad[j][0];
            int v=ad[j][1];
            int w=ad[j][2];
            if(dist[u]==1e8)
            {
                continue;
            }
            if(dist[u]+w<dist[v])
            {
               vector<int>ans;
               ans.push_back(-1);
               return ans;
            }
        }
    return dist;
}
vector<vector<int>> adlist(const vector<vector<int>>& adjMatrix) {
    vector<vector<int>> edgeList;
    int n = adjMatrix.size();
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            int w = adjMatrix[i][j];
            if (w != 0) {  
                edgeList.push_back({i, j, w});
            }
        }
    }
    
    return edgeList;
}
int main()
{
   int v,s,ed,i,j;
   vector<int>ans;
   vector<vector<int>>nad;
    
   
   cin>>v;
   vector<vector<int>> ad(v, vector<int>(v, 0));
 
   for(i=0;i<v;i++)
   {
    for(j=0;j<v;j++)
    {
      cin>>ad[i][j];
    }
   }
 
    cin>>s;
    
    int d;
    cin>>d;
   
   nad=adlist(ad);
 
 ans=globalship(nad,v,s);
if(ans.size()==-1)
{
   
    exit(0);
}
cout<<ans[d];
}


 