#include<iostream>
using namespace std;
void print(int n){
    if(n==0) return;       //if cundition is true neeche ki cheeje nhi chalengi condition false h to to neeche wali cheeje run ho jayengi
    cout<<n<<endl;
    print(n-1);
}
int main(){
    int n;
    cout<<"enter the value of n : ";
    cin>>n;
    print(n);

}