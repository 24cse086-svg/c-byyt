#include<iostream>
using namespace std;
int main(){
   string s="arsh";
   cout<<s<<" "<<s.length()<<endl;
   s=s+" siddiqui";   //plus ko peeche aage dono jageh lga skte hai jaise-->s=" siddiqui"+s;-->output(siddiqui arsh)
   cout<<s<<" "<<s.length();
}
