#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;

while(t--){
    int n;
    cin>>n;

    long int arr[n];

    int a;    
    if (n==1){
            cin>>a;
            if (a!=0) cout<<a*a<<endl;
            else cout<<-1<<endl;
    }

    else{
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }

    sort(arr,arr+n);
    cout<<arr[0]*arr[n-1]<<endl;

}
}
 

    return 0;
}


