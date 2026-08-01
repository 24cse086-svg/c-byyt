#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the value of a : ";
    cin>>a;
    cout<<"enter the value of b : ";         //sewpping using third variav
    cin>>b;
    cout<<"value of a and b before swepping is : "<<a<<" and "<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"value of a and b after swepping is : "<<a<<" and "<<b;
}
