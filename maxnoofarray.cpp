#include<iostream>
using namespace std;
int main(){
    int arr[]={12,25,22,11,1,2,3,8,9};   
    int n=sizeof(arr)/4;     
    int mx=arr[0];     //mx=-1 bhi le skte hai mx=INT_MIN bhi lik skte hai bss mx ki value kam rakhe array se
    for(int i=0;i<n;i++){
    //if(arr[i]>mx) mx=arr[i];
    mx=max(mx,arr[i]);
    }
    cout<<mx;   // minimum nikalne k liye bhi same but ulta ho jayenga
    }  