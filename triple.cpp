#include<bits/stdc++.h>
using namespace std;



int main(){

 long int t;
 cin>>t;




while(t--){

    long int n;
 cin>>n;

 long int arr[n];


  
   

   for (int i=0;i<n;i++){
    cin>>arr[i];
}
  bool flag=false;
 
 
    for (int i=0;i<n;i++){

        int count=0;
        for (int j=0;j<n;j++){
            if (arr[i]==arr[j]){
                count++;
            }
        }


        if (count>=3){
            cout<<arr[i]<<endl;
            flag=true;
            break;
        }
      
    }

     if (flag==false){
       cout<<"-1"<<endl;
       break;
       }
}
    return 0;
}

