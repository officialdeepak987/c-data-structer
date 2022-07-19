
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[10];
    int size,i,n;
    cout<<"enter any size of array: ";
    cin>>size;
    if(size>10){
        cout<<"array size is more";
    }
    else{
        cout<<"enter array element :";
        for(i=0;i<size;i++){
            cin>>a[i];
        }
        for(i=0;i<=size-1;i++){
            cout<<a[i] <<" "<<endl;
        }
             cout<<"enter array value find index number :";
             cin>>n;
             for(i=0;i<=size;i++){
                if(a[i]==n){
                    cout<<i<<" ";
                }
                
             }
     

    }
    return 0;
}