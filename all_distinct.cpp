#include<bits/stdc++.h>
using namespace std;

int main(){

 int t;
 cin>>t;

 while(t--){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }

    vector <int> v1;
    vector <int> v2;

      for (int i=0;i<n;i++){
        if(count(v1.begin(),v1.end(),arr[i])==0){
            v1.push_back(arr[i]);
        }
        else v2.push_back(arr[i]);
    }

if (v2.size()%2==0){
    cout<<v1.size()<<endl;
}

else  cout<<v1.size()-1<<endl;

 }

    return 0;
}
