#include<iostream>
using namespace std;

int main(){
    //cout<<"this is tut10 and we are covering loop structure in cpp"<<endl;

    /* Loops in c++:
    There are three types of loops in c++:
    1. For loop
    2.While loop
    3.Do while loop.
    */
   /*Syntax for dor loop
        for(initialization ; Condition ; Updatioin){
        
            loop body (c++ code);
        }
   
    */
        // for(int i = 0; i < 100; i++ ){
        //     cout<<i<<endl;
        // }

    /*While loop

    Syntax:

        While(Condition){
            C++ Statments;
            Updation;
        }
    */
    //Infinitee loop
        // int i =0;
        // while(true){
        //     cout<<i<<endl;
        // }
    //do while loop in c++
        // do
        // {
        //     //c++ statements
        //     //updation
        // }while(condition);

        // int i = 0;
        // do
        // {
        //     cout<<i<<endl;
        //     i++;
        // } while (i<= 10);
    //6 table using for loop
        for(int i = 1; i<=10; i++){
            cout<<6*i<<endl;
        }    

    return 0;

}