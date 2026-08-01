#include<iostream>
using namespace std;
int main(){
    int a[]={12,13,2,4,5};   
    int n=sizeof(a)/4;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    int i=0;    //first index
    int j=n-1;   //last index
    while(i<j){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    }  