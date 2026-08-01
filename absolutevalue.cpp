#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter the value of x :";
    cin>>x;
    if(x<0){
        x=-x;
        cout<<x;
    }
    else cout<<x;
}