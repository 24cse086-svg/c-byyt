#include<iostream>
using namespace std;
int main(){
    int arr[]={12,25,22,11,1,2,3,8,9};   //kuch bhi change kro code ko change krne ki jaroorat nhi hai
    int n=sizeof(arr)/4;      //product of nth element of a array
    int product=1;
    for(int i=0;i<n;i++){
     product=product*arr[i];
    }
    cout<<product;
    }     
    
/*
    int arr[]={12,25,22,11,1,2,3,8,9};
    int product=1;
    for(int i=0;i<=8;i++){         //aise bhi kr skte ho but fix array ka product hoga
        product=product*arr[i];
    }
    cout<<product;

*/