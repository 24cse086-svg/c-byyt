#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter value of a ";
    cin>>a;
    char op;
    cout<<"enter value of b ";
    cin>>b;
    switch(op){
        case '+':
        cout<<a+b;
        case '-':
        cout<<a-b;
        case '*':
        cout<<a*b;
        case '/':
        cout<<a/b;
        default:
        cout<<"invalid opreator";

    }
}