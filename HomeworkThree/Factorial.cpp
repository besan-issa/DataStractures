#include<iostream>
using namespace std ;
int factorial(int n){

if (n==0)return 1;
return n*factorial(n-1);

}
int main (){
int number;
int fact ;
cout<<"enter a number : "<<endl; 
cin>>number;
cout<<"the factorial is "<<factorial(number);
return 0;
}
