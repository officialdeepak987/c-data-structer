
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
        cout<<"value insert a first position :";
             cout<<"entet array value :";
             cin>>n;
            size++;
            a[0]=n;
            for(i=0;i<=size-1;i++){
                cout<<a[i]<<" ";
            
        }

    }
    return 0;
}