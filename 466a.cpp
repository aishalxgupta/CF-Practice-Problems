#include<bits/stdc++.h>
using namespace std;

int main(){

 int n,m,a,b,ans=0;
 cin>>n>>m>>a>>b;

 if ((m*a)>b){
    int q= n/m;
    int q1=n%m;
    if ((q1*a)>b){
        ans= q*b+b;
    }
    else
  { int ans=(q*b)+(n%m)*a;}
    cout<<ans<<endl;

 }

 else{
  int ans=n*a;
   cout<<ans<<endl;
 }



    return 0;
}
