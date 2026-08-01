#include<iostream>
using namespace std;
void print(int x, int n){
    if(x>n) return;       //if cundition is true neeche ki cheeje nhi chalengi condition false h to to neeche wali cheeje run ho jayengi
    cout<<x<<endl;
    print(x+1,n);
}
int main(){
    int n;
    cout<<"enter the value of n : ";
    cin>>n;
    print(1,n);

}