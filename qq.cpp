#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
while (t--){
 long long int n,k;
 cin>>n>>k;
int f=0;
if (k%4==0){
    cout<<"NO\n";
    f=1;
}
else cout<<"YES\n";


 if (k%4==1 or k%4==3){
    long long int num=1;
    for (int i=0;i<n/2;i++){
        cout<<num<<" "<<num+1<<endl;
        num+=2;
    }


}

else {
    if (f==0 and n!=2){
   
    int b=0;
     int num=3;
    for (int i=0;i<n/2;i++){
        if (b==0){
             cout<<num<<" "<<num+1<<endl;
        }
        else{
            cout<<num+1<<" "<<num<<endl;
        }
        num+=4;
    
    
    if (num>n){
        num=1;
        b=1-b;
    }
    }}

    if (f==0 and n==2){
      
        cout<<2<<" "<<1<<endl;
    }
}
}

    return 0;
}
