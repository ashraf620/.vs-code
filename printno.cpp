#include<iostream>
using namespace std;
int main()
{
    int n,i=2;
    cout<<"enter no"<<endl;
    cin>>n;
    while(i<n){
        if(n%i==0){
            cout<<"NOT PRIME"<<endl;
                
        }

 i=i+1;  
 }
 cout<<"primr no"<<endl;
 return 0;
}

