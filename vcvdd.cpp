
#include<iostream>
using namespace std;
int main()
{
    int i,j,n=5;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
        // 
         if(j==i){
         if(j==1  || j==n)
         cout<<"**"<<endl;
         else
         cout<<"***"<<endl;   
        }
        else{
            cout<<" ";
        }
        //cout<<endl;
        
    }
}}
