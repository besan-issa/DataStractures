#include<iostream>
using namespace std ;
struct node {
    string Name ;
    int ID ;
    int Age ;
    node *ptr ;
    
    //constructor
    node (string n , int i , int a ){
         Name = n ;
         ID = i;
         Age = a ;
        ptr =nullptr ;
 
    } 

};
int main (){
    node*start= new node( "Jhon Doe" ,  1001 ,  20 );
    start->ptr= new node( "Jane Smith" ,  1002 ,  21 );
    start->ptr->ptr= new node("Bob Johnson" ,  1003 , 19);
    start->ptr->ptr->ptr=new node ("Jane Doe", 1004 , 18 );
    

    node*current = start ;
    int studentNum=1;//student counter 

    while (current != nullptr ){
        cout<<"Student "<<studentNum<<":"<<endl;
        cout<<current->Name<<endl;
        cout<<current->ID<<endl;
        cout<<current->Age<<endl;
        cout<<endl;

        current = current->ptr;
        studentNum ++;
    }


    return 0;

}