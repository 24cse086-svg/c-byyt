#include <iostream>
using namespace std;
int main(){
    int temp,a,b;
    cout<<"enter the value of a : ";
    cin>>a;
    cout<<"enter the value of b : ";         //sewpping using third variav
    cin>>b;
    cout<<"value of a and b before swepping is : "<<a<<" and "<<b<<endl;
    temp=a;
    a=b;
    b=temp;
    cout<<"value of a and b after swepping is : "<<a<<" and "<<b;
}
