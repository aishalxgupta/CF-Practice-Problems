#include<bits/stdc++.h>
using namespace std;

int main(){

 int n,k;
 cin>>n>>k;

 int arr[n];
 for (int i=0;i<n;i++){
    cin>>arr[i];
 }
 int s=0;
 for (int i=0;i<n;i++){
    if (arr[i]>=arr[k-1] and arr[i]!=0){
        s++;
    }
 }
 cout<<s<<endl;


    return 0;
}
