#include<bits/stdc++.h>
using namespace std;

int main(){

 
int t;
cin>>t;

while(t--)
{
    long long int n;
    cin>>n;

   if (n==1) cout<<2<<endl;

   else{
   int r= n%3;
   if (r==0) cout<<n/3<<endl;
   else if (r==1) cout<<(n/3)-1+2<<endl;
   else cout<<(n/3)+1<<endl;
   }

}
    return 0;
}
