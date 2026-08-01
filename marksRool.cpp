#include<iostream>
using namespace std;
int main(){
    int arr[4][2]={{83,80},{84,44},{85,55},{86,91}};
    cout<<"roll no : marks ";
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            cout<<arr[i][j]<<"        ";
        }
            cout<<endl;
    }
}