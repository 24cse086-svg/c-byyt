#include<iostream>
using namespace std;
int main(){
    int arr[]={12,25,22,11,1,2,3,8,9};   //kuch bhi change kro code ko change krne ki jaroorat nhi hai
    int n=sizeof(arr)/4;      //sum of nth element of a array
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    cout<<sum;
    }     
    
/*
    int arr[]={12,25,22,11,1,2,3,8,9};
    int sum=0;
    for(int i=0;i<=8;i++){         //aise bhi kr skte ho but fix array ka sum hoga
        sum=sum+arr[i];
    }
    cout<<sum;

*/