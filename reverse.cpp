#include<iostream>
using namespace std;
int main(){
   string s="arsh";
   cout<<s<<endl;
   int n=s.length();
   reverse(s.begin(),s.end());  //-->>begin mtlb kha se start krna hai aur end kha khatum
   cout<<s<<endl;  //hsra
}
