#include<iostream>
using namespace std;
void change(int arr[]){
    arr[0]=9;
}
int main(){
    int arr[5]={4,1,3,7,3};    
    for(int i=0; i<=4; i++){   
        cout<<arr[i]<<" ";
    } 
    cout<<endl;
    change(arr);
    for(int i=0;i<=4;i++){
        cout<<arr[i]<<" ";
    }    
    
}      //array pass by refrence