#include<bits/stdc++.h>
using namespace std;



int sum(int n){
    int s=0;
    while(n>0 || s>9){
             if(n == 0) {
         n = s;
         s = 0;
      }
      s += n % 10;
      n /= 10;
   }
        return s;
    }

int f=0;

int main(){

 int k,d;
 cin>>k>>d;

 if (k==1 && d==0){
    f=1;
    cout<<"0";
 }

 for (int i=pow(10,k-1);i<pow(10,k);i++){
        if (sum(i)==d){
            cout<<i<<endl;
            f=1;
            break;
        }
       
 }

 if (f==0){
    cout<<"No Solution";
 }

    return 0;
}

