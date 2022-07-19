#include<iostream>
using namespace std;

 
//Fibonacci series program  without using recursive

//int main(){
//	//using two veriable 
//	int n,i;
//	//using first two term with decleration
//	int t1=0,t2=1;
//	int nextterm=t1+t2;
//	cout<<"Enter any term :";
//	cin>> n;
//	cout<<"fibonacci :"<<t1<< " "<<t2;
//	for(i=3;i<=n;i++){
//		cout<<nextterm;
//		t1=t2;
//		t2=nextterm;
//		nextterm=t1+t2;
//	}
//	return 0;
//}


//  using recursive

//int fib(int);
int fib(int i){
	if(i==0)
	return 0;
	else if(i==1)
	return 1;
	
else return fib(i-1)+fib(i-2);
}
int main(){
	int n,i;
	cout<<"Enter any term :";
	cin>>n;
	for(i=0;i<=n;i++){
		cout<<fib(i);
	}
	
}
