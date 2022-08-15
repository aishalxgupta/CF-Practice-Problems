#include<bits/stdc++.h>
using namespace std;

int main(){

 int t;
 cin>>t;

 while(t--){
    string s1;
    cin>>s1;

    string s2;
    cin>>s2;

    set <char> set1;

     for ( auto  x : s1 )
        set1.insert( x );

        set <char> set2;

     for ( auto  x : s2 )
        set2.insert( x );

        if (set1!=set2) {cout<<"NO\n";}

        else{


    map <char,int> m;
    for (int i=0;i<s2.length();i++){
        m[s2[i]]++;
    }

    for (int i=0;i<s1.length();i++){
        m[s1[i]]--;
    }

   for (auto i:m){
    cout<<i.second<<" ";
    if (i.second<0) {
        cout<<"NO\n";
        break;
    }
    else {
        cout<<"YES\n";
        break;
    }

   }
   }


 }

    return 0;
}
