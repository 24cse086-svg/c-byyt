#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter marks ";
    cin>>n;
    if(n>80 && n<101) cout<<"very good";
    if(n>60 && n<81) cout<<"good";
    if(n>40 && n<61) cout<<"average";
   if(n<=40) cout<<"fail";
    
}