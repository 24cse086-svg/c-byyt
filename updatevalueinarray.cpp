#include<iostream>
using namespace std;
int main(){
    int arr[5]={4,1,3,7,3};     //isme arr[5]-->arr[] ye bhi lihk skte hai agar 1 hi line m diclare aur initialize kiya h
    arr[0]=1;                  //4-->1
    for(int i=0; i<=4; i++){   //for reverse-->for(int i=4; i>=0;i--)
        cout<<arr[i]<<" ";
    }     
    
}