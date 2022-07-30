#include<bits/stdc++.h>
using namespace std;

void div(int r){

    if (r<=1399){
        cout<<"Division 4"<<endl;
    }
    if (r>=1400 && r<=1599 ){
         cout<<"Division 3"<<endl;
    }
    if (r>=1600 && r<=1899 ){
        cout<<"Division 2"<<endl;
    }
    if (r>=1900){
        cout<<"Division 1"<<endl;
    }
    return ;

}

int main(){

 int t;
 cin>>t;

     int r;

 while(t--){

    cin>>r;
    div(r);
 }

    return 0;
}
