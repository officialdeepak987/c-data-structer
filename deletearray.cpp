#include<bits/stdc++.h>

using namespace std;

int main()
{ int a[10],size,pos;
cout<<"enter size of array :";
cin>>size;
cout<<"enter element of array:";
 for(int i =0;i<size;i++)
 {
     cin>>a[i];
}
for(int i=0;i<size;i++){
    cout<<a[i]<<" ";
}
cout<<"enter the positon of array where the element want to delete:";
cin>>pos;
for(int i=pos-1;i<size;i++){
    a[i]=a[i+1];
}
size--;
cout<<"after delete on element :"<<endl;
for(int i=0;i<size;i++){
    cout<<a[i]<<" ";
}
   

    return 0;
}