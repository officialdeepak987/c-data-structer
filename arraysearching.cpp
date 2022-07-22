#include<bits/stdc++.h>
using namespace  std;


int search(int a[],int size,int n)
{
    int i;
    for(i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    for(i=0;i<size;i++)
        if(a[i]==n)
        return i+1;
        return -1;
    
}
int main()
{
int a[10] ={1,23,45 ,4,56 ,8,9,0,2,3};
int size,n;
cout<<"enter array size: ";
cin>>size;
cout<<"searching number :";
cin>>n;
cout<<search(a,size,n);
    return 0;
} 
