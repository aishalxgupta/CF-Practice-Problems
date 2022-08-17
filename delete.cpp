#include<bits/stdc++.h>
using namespace std;

int main(){

 
int arr[6]={1,2,3,4,5,6};

for (int i=2;i<5;i++){
        arr[i]=arr[i+1];
}


for (int i=0;i<5;i++){
        cout<<arr[i]<<" ";
}


    return 0;
}
