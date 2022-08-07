#include<bits/stdc++.h>
using namespace std;

int main(){

 
int n;
cin>>n;

long long int arr[n];
for (int i=0;i<n;i++){
    cin>>arr[i];
}

long long int arr1[n];
for (int i=0;i<n;i++){
    cin>>arr1[i];
}

sort(arr1,arr1+n);


int c=0;

for (int i=0;i<n;i++){
   if (arr[i]!=arr1[i]) c++;
}

if (c==2){
    cout<<"yes\n";
    for (int i=0;i<n;i++){
   if (arr[i]!=arr1[i]) {
    cout<<arr[i]<<" ";
   }
}

}

else cout<<"no\n";


    return 0;
}

