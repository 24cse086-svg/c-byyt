#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n : ";
    cin>>n;
    for(int i=n/2; i>=1; i--){
        if(n%i==0){
            cout<<i<<endl;
            break; //break for highest factor and if you want all factor of a number use dont use break
        }
    }

}