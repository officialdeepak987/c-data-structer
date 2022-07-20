#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10];
    int size ,i,n;
    cout<<"enter size of array :";
    cin>>size;
    cout<<"enter array element :";
    for(i=0;i<size;i++){
        cin>>a[i];

    }
    for(i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    cout<<"enter any position number want to delete :";
    cin>>n;
    for(i=n;i<size;i++){
        a[i]=a[i+1];

    }
    for(i=0;i<size;i++){
        cout<<a[i]<< " ";
    }
    
    
} 
