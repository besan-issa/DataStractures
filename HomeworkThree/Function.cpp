#include<iostream>
using namespace std ;
void swap(int*ptr1 , int*ptr2){

    int temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;

    
}
int main (){
int num1=4;
int num2=12; 

swap(&num1,&num2);
cout<<"num1= "<<num1<<endl<<"num2= "<<num2<<endl;

    return 0;
}