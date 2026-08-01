#include <iostream>
using namespace std;
void usa(){
    cout<<"u are in usa"<<endl;
    return;                         //return ke bad kuch bhi likha ho vo kam nhi krta
}
void india(){
    cout<<"u are in india "<<endl;
    usa();
}
int main(){
    cout<<"u are in main "<<endl;
    india();
    return 0;

}