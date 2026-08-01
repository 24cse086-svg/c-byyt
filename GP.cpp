#include <iostream>
using namespace std; //gp 1 2 4 8 16 32...up to n terms
int main(){
    int n;
    cout<<"enter the value of n : ";
    cin>>n;
    int a=1;
    for(int i=1; i<=n; i++){
        cout<<a; cout<<" ";
        a=a*2;
    

    }

}