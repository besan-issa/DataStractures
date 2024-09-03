#include<iostream>
#include<iomanip>
#include<string>
using namespace std ;
int main(){
    int size ;
    int sub ;

    //take the numbers of students and subjects 

    cout<<"Enter number of students : ";
    cin>>size ;

    cout<<"Enter number of subjects :";
    cin>>sub ;
    cin.ignore();

    string* students = new string[size];
    string* sbj=new string[sub] ;
    int** grades=new int*[size];
    

    //new adding 
    for(int i=0; i<size; ++i){
        grades[i]=new int[sub];
    }

    //Enter the subjects name 

    cout<<"Enter names of subjects :"<<endl;
    for(int i=0; i<sub; ++i){
        cout<<"Subject "<<(i+1)<<":";
        getline(cin , sbj[i]);
    }

    //Enter the students names and the're grades 

    for(int i=0; i<size; ++i){
        cout<<"Enter name of student "<<i+1<<":";
        cin>>students[i];
        getline(cin , students[i]);
        cout<<"Enter grades for "<<students[i]<<":\n";

        for(int j=0; j<sub; ++j){
            cout<<sbj[j]<<":";
            cin>>grades[i][j];
        }
        cin.ignore();
    }
    cout<<setw(20)<<"Student Name";
    for(int i=0; i<sub; ++i){
        cout<<setw(10)<<sbj[i];
    }
    cout<<setw(10)<<"Average"<<endl;

    for(int i=0; i<size; ++i){
        cout<<setw(20)<<students[i];
        int sum = 0;
        for(int j=0; j<sub; ++j){
            cout<<setw(10)<<grades[i][j];
            sum+=grades[i][j];
            sum+=grades[i][j];
        }
        double average = static_cast<double>(sum)/sub;
        cout<<setw(10)<<fixed<<setprecision(2)<<average<<endl;
    }
        
        

    for(int i=0; i<size; ++i){
        delete[] grades[i];
    }
    delete[] grades;
    delete[] students ;
    delete[] sbj ;
    
    return 0;
}