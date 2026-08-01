#include <iostream>
using namespace std;
int main(){
    int x=3;               //int* p;   p=&x; aise bhi kr skte hai
    int* ptr=&x;
    cout<<x<<endl;
    *ptr=25;
    cout<<x<<endl;        //x ki value change ho gi bina x ka use kiye bina
}