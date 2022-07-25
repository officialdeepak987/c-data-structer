#include<bits/stdc++.h>
using namespace std;
int largest(int a[],int n){
   int i;
   int max=a[0];
   for(i=1;i<n;i++){
       if(a[i]>max)
       max=a[i];
   }
   return max;
}
int main(){
    int a[]={5,2,6,8,10};
    cout<<largest(a,5);
    return 0;
}

// min array
// #include<bits/stdc++.h>
// using namespace std;
// int largest(int a[],int n){
//    int i;
//    int max=a[0];
//    for(i=1;i<n;i++){
//        if(a[i]<max)
//        max=a[i];
//    }
//    return max;
// }
// int main(){
//     int a[]={5,2,6,8,10};
//     cout<<largest(a,5);
//     return 0;
// }
