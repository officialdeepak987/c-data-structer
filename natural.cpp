//#include<iostream>
//using namespace std;
//
//int main(){
//	int n;
//	cout<<"enter any number";
//	cin>>n;
//	
//	for(int i=0;i<=n;i++){
//		cout<<i;
//	}
//	return 0;
//}
#include<iostream>
using namespace std;
void fun1(){
	cout<<"fun1 /n";
}
void fun2(){
	cout<<"before fun1";
	fun1();
	cout<<"after fun1";
}
int main(){
	cout<<"before fun2 \n";
	fun2();
	cout<<"after fun2 \n";
	return 0;
}
