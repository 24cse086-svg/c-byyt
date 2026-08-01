#include<iostream>
using namespace std;
int main(){
   int arr[2][3]; //initialisation k liye -->
   arr[0][0]= 6;  //int arr[4][2]={{1234,56},{1256,43},{1434,32},{1312,96}}; where [4]rows hai
   arr[0][1]= 1;  //int arr[4][2]={1234,56,1256,43,1434,32,1323,96};
   arr[0][2]= 2;  //int arr[2][3]={12,34,56,78,91,23};
   arr[1][0]= 4;  //int arr[][3]={12,34,56,78,91,23}; ->[3]row number likhna compelsury hai
   arr[1][1]= 3;
   arr[1][2]= 5;
   for(int i=0;i<2;i++){ //row
    for(int j=0;j<3;j++){ //column
        cout<<arr[i][j]<<" ";
        }
     cout<<endl;   //for next line
   }

}  //transpose k liye phle for loop j ke liye lagaye phir i ke liye