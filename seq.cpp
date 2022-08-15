#include<bits/stdc++.h>
using namespace std;

int main(){

 int t;
 cin>>t;

 while(t--){
    int n;
    cin>>n;

 long long  int arr[n];

    for (int i=0;i<n;i++){
        cin>>arr[i];
    }

    if (n%2==1){
        for (int i=1;i<n;i++){
            swap(arr[i],arr[i+1]);
        }
        for (int i=1;i<n;i++){
            swap(arr[i],arr[i+2]);
        }

    }
 }

    return 0;
}
