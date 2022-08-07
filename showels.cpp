#include<bits/stdc++.h>
using namespace std;

int main(){

 int t;
 cin>>t;

 while(t--){

    long long int n,k;
    cin>>n>>k;
     long long int a;

    if (n<=k) cout<<1<<endl;
    else {
        for (long long int i=k;i>0;i--){
            if (n%i==0){
                 a=i;
                break;
            }
        }
        // cout<<n<<" "<<a<<endl;
        cout<<n/a<<endl;
    }


 }

    return 0;
}
