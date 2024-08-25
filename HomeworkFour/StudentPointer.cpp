#include<iostream>
using namespace std ;
struct student {
        string Name ;
        int ID ;
        int Age ;
    };
int main (){
    student*p1 = new student {"John Doe " , 1001 , 20};
    cout<<"Student 1 : "<<endl<<"Name : "<<p1->Name<<endl<<"ID : "<<p1->ID<<endl<<"Age : "<<p1->Age<<endl;
    student*p2 = new student {"Jane smith " , 1002 , 21};
    cout<<"Student 2 : "<<endl<<"Name : "<<p2->Name<<endl<<"ID : "<<p2->ID<<endl<<"Age : "<<p2->Age<<endl;
    student*p3 = new student {"Bob johnson " , 1003 , 19};
    cout<<"Student 3 : "<<endl<<"Name : "<<p3->Name<<endl<<"ID : "<<p3->ID<<endl<<"Age : "<<p3->Age<<endl;
    
    
    return 0;
}