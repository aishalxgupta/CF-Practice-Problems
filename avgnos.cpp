#include<bits/stdc++.h>
using namespace std;

int main(){

 long int n;
 cin>>n;

 int arr[n];
 long int s=0;
 for (int i=0;i<n;i++){
    cin>>arr[i];
    s+=arr[i];
 }
int c=0;
 for (int i=0;i<n;i++){
   if (s==n*arr[i]){
    c++;
   
   }
 }

 cout<<c<<endl;
 for (int i=0;i<n;i++){
   if (s==n*arr[i]){
  cout<<i+1<<" ";
   
   }
 }


    return 0;
}
