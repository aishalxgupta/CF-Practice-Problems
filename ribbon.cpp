#include<bits/stdc++.h>
using namespace std;

int main(){

 int n;
 cin>>n;

 int arr[3];
 for (int i=0;i<3;i++){
    cin>>arr[i];
 }


 int max1 = -100;
 int ans= -101;
 int f;

 for (int i=0;i<3;i++){

      ans=n/arr[i];
    // if (n%arr[i]==0){
          
    
    // }
    if (ans>max1) {max1=ans;
    f=max1;
    }
 }

for (int i=0;i<3;i++){
    for (int j=i+1;j<3;j++){
        if (arr[i]+arr[j]==n){
                f=max(max1,2);
               
        }

    }
}
cout<<f;

    return 0;
}
