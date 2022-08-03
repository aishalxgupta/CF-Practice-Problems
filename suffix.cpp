#include<bits/stdc++.h>
using namespace std;

void reverseStr(string& str)
{
    int n = str.length();
  
    // Swap character starting from two
    // corners
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}

int main(){

 int t;
 cin>>t;




 while(t--){
    string s;
    cin>>s;

    reverseStr(s);
    
    for (int i=0;i<s.length();i++){
         if (s.substr(0,2)== "op") {cout<<"FILIPINO\n";
         break;}
         else if (s.substr(0,5)== "adinm") {cout<<"KOREAN\n";
          break;}
         else {cout<<"JAPANESE\n";
          break;}
    }

 }

    return 0;
}
