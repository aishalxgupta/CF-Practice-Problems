#include<bits/stdc++.h>
using namespace std;

int main(){

 int n;
 cin>>n;

 long int m= log2(n);
 if (pow(2,m)==n) cout<<"YES\n";
 else cout<<"NO\n";

    return 0;
}
