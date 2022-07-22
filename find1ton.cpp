#include<bits/stdc++.h>
using namespace std;
void natural(int n){
    if(n==0)
    return ;
 natural(n-1);
 cout<<n<<" ";
}
int main(){
    int n;
    cout<<"enter any number to find the natural number :";
    cin>>n;
   natural(n);
    return 0;
}
