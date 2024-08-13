#include<iostream>
using namespace std ;
float average (int arr[]);
int main (){
   
    int array[10];
    
    
    for(int i=0;i<10;i++){
        cout<<"enter a number : "<<endl;
        cin>>array[i];
        }
    float result=average(array);
    cout<<"the average is : "<<result<<endl;
    
    return 0;
}
float average (int arr[]){
        int sum =0;
        for(int i=0;i<10; i++){
            sum+=arr[i];
        }
        float avrg= sum/10.0;
        return avrg;
        
    }