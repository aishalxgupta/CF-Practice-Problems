#include<bits/stdc++.h>
using namespace std;

int main(){

 int t;
 cin>>t;

 while(t--){
    int n;
    cin>>n;
    bool f=1;

    if (n!=5) f=0;

    string s;
    cin>>s;
    
    map <char,int> m1;

    m1.insert(pair<char, int>('T', 1));
     m1.insert(pair<char, int>('i', 1));
      m1.insert(pair<char, int>('m', 1));
       m1.insert(pair<char, int>('u', 1));
        m1.insert(pair<char, int>('r', 1));

  for (int i=0;i<s.length();i++){
        m1[s[i]]--;
    }
    for (auto i:m1){
        if (i.second !=0) {
            f=0;
            break;
        }
    }

    if (f==0) cout<<"no"<<endl;
    else cout<<"yes"<<endl;
 }

    return 0;
}

