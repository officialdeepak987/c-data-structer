
#include <bits/stdc++.h>

using namespace std;

void print(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

void reverse(int a[],int n){
    reverse(a,a+n);
}

int main()
{
    int a[5] ,i;
   int n=sizeof (a)/sizeof (a[0]);
    cout<<"enter array";
    for(i=0;i<n;i++){
        cin>>a[i];
    }

reverse(a,n);
print(a,n);
    return 0;
}