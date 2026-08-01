#include<iostream>
using namespace std;
int main(){
    int arr[5];
    arr[0]=6;
    arr[1]=7;
    arr[2]=8;
    arr[3]=9;
    arr[4]=10;
    for(int i=0; i<=4; i++){
        cout<<arr[i]<<" ";
    }
    //cout<<arr[0]<<" ";
    //cout<<arr[1]<<" ";
    //cout<<arr[2]<<" "; for loop use kare insted of this
    //cout<<arr[3]<<" ";
    //cout<<arr[4]<<" "; 
}
/*
int arr[5];
for(int i=0; i<=4; i++){
cin>>arr[i];
}                         -->ye code bhi upper wale ki tarha kaam karenga
for(innt i=0; i<=4; i++){
cout<<arr[i]<<" ";
}
*/
