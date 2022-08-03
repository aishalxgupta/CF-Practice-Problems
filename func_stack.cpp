#include<bits/stdc++.h>
using namespace std;

void print(int n){
    cout<<n<<endl;
    return;
}

int add(int n1,int n2){
    print(n1);
    print(n2);
    int s=n1+n2;
    return s;
}

int main(){
    cout<<add(5,6)<<endl;
    return 0;
}