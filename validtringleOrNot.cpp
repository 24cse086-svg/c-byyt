#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the value of side a : ";
    cin>>a;
    cout<<"enter the value of side b : ";
    cin>>b;
    cout<<"enter the value of side c : ";
    cin>>c;
    if(a+b>c && b+c>a && c+a>b) cout<<"tringle is valid";
    else cout<<"not valid";

}