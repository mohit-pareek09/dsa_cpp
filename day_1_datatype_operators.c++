
#include <iostream>
using namespace std;

int main(){

// // datatypes

//     cout<< "namaste duniya i am comming "<<endl;
//     int a=12;
//     cout<< a <<endl;
//     float b=12.2;
//     cout<< b <<endl;
//     char c='v';
//     cout<< c <<endl;
//     bool d=false;
//     cout<< d <<endl;
//     double e=1.23;
//     cout<< e<<endl;

//     int size=sizeof(e);
//     cout<<"size of e is : " << size <<endl;

//     // arthematic operators

//     int z= 12/5;
//     float x=12.0/5;
//     cout<< z <<endl;
//     cout<< x <<endl;

//     // relatonal operators

//     bool s=(x>z);
//     cout<<s<<endl;

//     // loical operators
//     cout<<(a<b && x>z)<<endl;


// if-else and while loop **question:find number is prime.
// int n;
// cin>>n;  //a=cin.get();
// int i=2;
// int count=0;
// if(n<3){
// cout<<"number is not prime"<<endl;
// }
// while(i<n){
//     if(n%i==0){
//         count=+1;
//     }
//     i=i+1;
// }
// if(count>0){
//     cout<<"your number is not  prime"<<endl;
// }
// else{
//     cout<<"your number is prime number"<<endl;
// }
// return 0;


// now partten question 
// 1111
// 2222
// 3333
// 4444

int n;
cin>>n;
int i=1;
int j=1;

while(i<(n+1)){
    while(j<(n+1)){
        cout<<i;
        j=j+1;
    }
    cout<<endl;
    i=i+1;
    j=1;
}
return 0;


}


