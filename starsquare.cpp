#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of rows : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<"* ";        //cout<<j<<" "; for print pattern number also you can use i
        }
        cout<<endl;
    }
    
    
}