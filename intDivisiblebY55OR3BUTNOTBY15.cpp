#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a positive number ";
    cin>>n;
    if(n%3==0 && n%5==0 && n%15!=0) cout<<"divisale by 3 and 5 but not by 15";

}