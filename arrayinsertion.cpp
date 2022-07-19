#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[10];
    int size,i,pos,n;
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
        cout<<"enter any position of array where you want to insert element :";
        cin>>pos;
        if(pos>size){
            cout<<"position is out of size :";
        }
        else{
            //  cout<<"entet array value :";
            //  cin>>n;
            for(i=size-1;i>=pos;i--){
                a[i]=a[i-1];
            }
            size++;
            a[pos-1]=n;
            for(i=0;i<=size-1;i++){
                cout<<a[i]<<" ";
            }
        }

    }
    return 0;
}