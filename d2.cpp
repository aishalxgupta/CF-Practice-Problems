#include<bits/stdc++.h>
using namespace std;

int main(){

 int t;
 cin>>t;

 while(t--){
    int n;
    cin>>n;

    string s1;
    cin>>s1;

    string s2;
    cin>>s2;

    int r1=0;
    int r2=0;
    bool f=1;

    for (int i=0;i<n;i++){
       if (s1[i]=='R' and s2[i] !='R') f=0;
       if (s1[i]=='G' and s2[i] =='R') f=0;
     if   (s1[i]=='B' and s2[i] =='R') f=0;
    }

   
    if (f==1) cout<<"yes"<<endl;
    else cout<<"no"<<endl;

 }

    return 0;
}
