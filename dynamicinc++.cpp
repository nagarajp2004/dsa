#include<iostream>
using namespace std;
int main(){
    int *a;
    try{
        a=new int;
        cin >> *a;
    }
    catch(bad_alloc xa){
        cout <<"allocation failure";
        
    }
    cout <<"at"<<a<<"is the value"<<(*a);
    delete a;

}