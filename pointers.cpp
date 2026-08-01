#include <iostream>
using namespace std;
int main(){
    int x=3;               //int* p;   p=&x; aise bhi kr skte hai
    int* ptr=&x;
    cout<<&x<<endl;
    cout<<ptr<<endl;
    cout<<x<<endl;
    cout<<*ptr<<endl;
    cout<<&ptr<<endl;
}