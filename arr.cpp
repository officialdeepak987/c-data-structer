#include <bits/stdc++.h>
using namespace std;

int main()
{
	int arr[10]={6,4,3,2,7,8};
	
	int i, x;
	int size=sizeof(arr)/sizeof(arr[0]);
//	cout<<"enter array element:";
	
//	for(i=0;i<=size;i++){
//	    cin>>arr[i];
//	}
//	for(i=0;i<=size-1;i++){
//	    cout<<arr[i];
//	}
	
	
	cout<<"enter finding number index:";
      cin>> x;
      
	  
   for(i=0;i<=size;i++){
   	if(arr[i]=x)
	   break;
	   }
	    if(i<size){
   	cout<<i;
   }
   else{
   	cout<<"not";
   }
   return 0;
   }
  



	

