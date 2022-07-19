// Array size decleration and array element put and print.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[10];
    int size,i;
    cout<<"enter array size :";
    cin>>size;
    if(size>10){
        cout<<"Array size is more :";
    }
    else{
        cout<<"ENTER Array element: "<<"\n";
        for(i=0;i<size;i++){
            cin>>a[i];
        }
        for(i=0;i<=size-1;i++){
            cout<<a[i]<<" ";

        }
    }
    return 0;
}