#include<bits/stdc++.h>
using namespace std;

int main(){

 int n;
 cin>>n;
 int arr[n];
 for (int i=0;i<n;i++){
    cin>>arr[i];
 }
 int i;
for (int i=0;i<n;i++){
    if (arr[i]<0){
        cout<<"1 "<<arr[i]<<endl;
        break;
    }
 

 }

 for (int j=0;j<n;j++){
    if (arr[j] != arr[i] || arr[j] != 0){
        cout<<n-2<<" "<<arr[j]
    }
 }


    return 0;
}
