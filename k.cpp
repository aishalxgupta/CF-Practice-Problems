#include<bits/stdc++.h>
using namespace std;

int main(){

 int n;            
cin>>n;
int d = INT_MIN;

int x = (d&n);
while (x==0){
      d = d>>1;
      x = (d&n);
}
cout<<x-1<<endl;
 

 
 
 

    return 0;
}
