#include<iostream>
using namespace std;
class complex{
    float x,y;
    public:
    complex(){

    }
    complex(float a){
        x=y=a;
    }
    complex(float real,float img){
        x=real;
        y=img;


    }
    void show(){
        cout<<x <<"+i"<<y;
    }
 complex suma(complex);
};
complex complex::suma(complex b){
    complex c;
    c.x= x + b.x;
    c.y= y +b.y;
    return c;
}
int main(){
    complex a(3,5.6);
    complex b(4);
    complex c;
    c=a.suma(b);
    c.show();

}
