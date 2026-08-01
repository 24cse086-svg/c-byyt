/*#include <iostream>
using namespace std;
int main(){
    //4 7 10 13 16. upto n terms 
    int n;
    cout<<"enter the value of n";
    cin>>n;
    for(int i=4; i<=3*n+1; i=i+3){
        cout<<i; cout<<" ";
     }
}*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n";
    cin>>n;
    //4 7 10 13 16.. up to n terms
    int a=4;
    for(int i=1; i<=n; i++){
        cout<<a<<" ";
        a = a + 3 ;
    }


}