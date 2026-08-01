#include <iostream>
using namespace std;
int main(){
    int cp,sp;
    cout<<"enter the value of cp : ";
    cin>>cp;
    cout<<"enter the value of sp : ";
    cin>>sp;
    if(cp<sp) cout<<"profit";
    else if(cp==sp) cout<<"no profit no loss";
    else cout<<"loss";
}