#include<iostream>
using namespace std;

/*  array is collection of items of simmilar type stored in contigious memory locations.
    sometime single varibale is not sufficient to store all data.


*/
int main(){

    //Array examples
    int marks[4] ={11,2,22,33};
    //int mathMarks[4];
    //mathMarks[0]=100;
    //mathMarks[1]=500;
    //mathMarks[2]=150;
    //mathMarks[3]=105;

    //cout<<"these are the math marks"<<endl;
    //cout<<mathMarks[0]<<endl;
    //cout<<mathMarks[1]<<endl;
    //cout<<mathMarks[2]<<endl;
    //cout<<mathMarks[3]<<endl;    

    // cout<<"these are the marks"<<endl;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

    //using loop we can print all lines
    cout<<"using loop"<<endl; 
    for(int i=0 ;i<4 ; i++){
        cout<<marks[i]<<endl;
    }

    //Pointera and arrays 
    int* p = marks; //here dont need to have & , just have the marks and in *p adress of index 0 will be stored.
    cout<<"the value of marks[0] is "<<*(p)<<endl; 
    cout<<"the value of address of marks[0] is "<<(p)<<endl; 
    cout<<"the value of marks[0] is "<<*(p+1)<<endl; 
    cout<<"the value of address of marks[0] is "<<(p+1)<<endl;
    cout<<"the value of marks[0] is "<<*(p+2)<<endl; 
    cout<<"the value of address of marks[0] is "<<(p+2)<<endl;
    cout<<"the value of marks[0] is "<<*(p+3)<<endl; 
    cout<<"the value of address of marks[0] is "<<(p+3)<<endl;

    return 0;

}