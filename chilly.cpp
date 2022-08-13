#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;

if (n==1 or n==2) cout<<-1<<endl;

else{
    for (long long int i=pow(10,n-1);i<pow(10,n);i++){
        if (i%210==0){
            cout<<i<<endl;
            break;
        }
    }
}
 

    return 0;
}
