#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void display(queue<int>q,int n);
void print_all_window(vector<int>a,int n,int k)
{
   queue<int>q;
   for(int i=0;i<k-1;i++){
     q.push(a[i]);
   }
 int x=k-1;

   while(x<n)
   {
    q.push(a[x]);
    x++;
    display(q,k);
    q.pop();
   }
}
void display(queue<int>q,int n)
{
for(int i=0;i<n;i++)
{
    cout<<q.front();
    q.pop();
}
cout<<endl;
}

int main()
{
vector<int>vt={2,34,5,6,7};
int n=5;
int k=2;
print_all_window(vt,n,k);
}