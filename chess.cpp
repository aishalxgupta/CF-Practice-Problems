#include<bits/stdc++.h>
using namespace std;

int main(){

int a,b,c,d;
cin>>a>>b>>c>>d;
 
// for rook
 
if(a==c or b==d){
 
      cout<<1<<" ";
}
if(a!=c and b!=d){
 
      cout<<2<<" ";
}
 
// for bishop
 
if(((a+b)%2)!=((c+d)%2)){
 
      cout<<0<<" ";
 
 
}
 
if(((a+b)%2)==((c+d)%2)){
 
      if(abs(a-c)==abs(b-d)){
            cout<<1<<" ";
      }
      else{
 
            cout<<2<<" ";
      }
 
 
}
 
// for king
 
cout<<max(abs(a-c),abs(b-d))<<endl;
 
 
 
return 0;
 
 
}
