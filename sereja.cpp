#include<bits/stdc++.h>
using namespace std;

int main(){

 int n;
 cin>>n;

 vector <int> v;

int a;
 for (int i=0;i<n;i++){
    cin>>a;
    v.push_back(a);
 }

 int s=0;
 int d=0;

while(v.size()!=0){
    s+=max(v[0],v[v.size()-1]);
    if (v[0]>v[v.size()-1] )  v.erase(v.begin());
    else v.pop_back();
    d+=max(v[0],v[v.size()-1]);
     if (v[0]>v[v.size()-1] )  v.erase(v.begin());
    else v.pop_back();
    
}

cout<<s<<" "<<d<<endl;

    return 0;
}
