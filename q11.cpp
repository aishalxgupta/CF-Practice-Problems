#include<bits/stdc++.h>
using namespace std;

int main(){

 int t;
 cin>>t;

 string sl;

 while(t--){
     string sl;
    cin>>sl;
     transform(sl.begin(), sl.end(), sl.begin(), ::tolower);

     if (sl=="yes"){
        cout<<"YES"<<endl;
     }
     else{
        cout<<"NO"<<endl;
     }
 }

    return 0;
}
