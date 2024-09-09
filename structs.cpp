#include<iostream>
using namespace std ;
struct student {
        string Name ;
        int ID ;
        int Age ;
    };
int main (){ 

    

    student std1;
    std1.Name ="John Doe" ;
    std1.ID = 1001 ;
    std1.Age = 20 ;

    student std2;
    std2.Name = "Jane Smith" ;
    std2.ID = 1002 ; 
    std2.Age = 21 ;
    
    student std3;
    std3.Name = "Bob Johnson " ;
    std3.ID = 1003 ;
    std3.Age = 19 ; 

    cout<<"Student 1 : "<<endl<<std1.Name<<endl<<std1.ID<<endl<<std1.Age<<endl;
    cout<<"Student 2 :"<<endl<<std2.Name<<endl<<std2.ID<<endl<<std2.Age<<endl;
    cout<<"student 3 :"<<endl<<std3.Name<<endl<<std3.ID<<endl<<std3.Age<<endl;


    return 0;
}