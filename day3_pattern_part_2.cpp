


#include <iostream>
using namespace std;
int main(){

// 1
// 22
// 333
// 4444


// int i=1;
// int j=1;
// int n;
// cin>>n;

// while(i<n+1){
//     while(j<n+1){
//         if(j<=i){
//             int k=64;
//             char s=k+i;
//             cout<< s;
//         }
        
//         j=j+1;

//     }
//     cout<<endl;
//     j=1;
//     i=i+1;
//             }



// A B C
// B C D
// C D E



int i=1;
int j=1;
int n;
 int k=64;
cin>>n;

while(i<n+1){
    while(j<n+1){
        
           
            char s=k+j;
            cout<< s;
        
        
        j=j+1;

   }
    cout<<endl;
    k=k+1;
    j=1;
    i=i+1;
           
}




 return 0;
 }