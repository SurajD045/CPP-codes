#include<iostream>
using namespace std;
int c=45;

int main(){
    //*************Build in data types************** */
    // int a,b,c;

    // cout<<"Enter rthe value of a :"<<endl;
    // cin>>a;
    // cout<<"enter the value of b :"<<endl;
    // cin>>b;
    // c = a+b;
    // cout<<"the sum is ="<<c<<endl;

//here we ant to access the global variable in any function then we need to call the scope resolution operator.
//like here is present as local varible, if i call c then it will print the value that is stored in the local varibale. 
//":: "this is scop resolution operator. it will used to access the global variable in any function.

    // cout<<"the value of global variable is:"<<::c<<endl;

    // cout<<"this is c++ program!";
//**********************Float , double, long double******************* */
    // float d=34.4f;
    // double e=34.4l;

    // cout<<"the size of 34.4 is:"<<sizeof(34.4)<<endl; //by default conpiler take decimal number as double.
    // cout<<"the size of 34.4f is:"<<sizeof(34.4f)<<endl;//by 34.4f just this f means it a float 
    // cout<<"the size of 34.4l is:"<<sizeof(34.4l)<<endl;//34.4l means it a  double.
    // cout<<"the size of 34.4F is:"<<sizeof(34.4F)<<endl;//here doesent matter the leter is capital or small. 
    // cout<<"the size of 34.4L is:"<<sizeof(34.4L)<<endl;

//***************Refernce variables************************************ */
//Suraj dubal---> sura----->dada------>hardcoder (this are all my names refering me with different names.)

// float x=34;
// float &y=x;
// cout<<x<<endl;//here x is original name and called by its original name.
// cout<<y<<endl;//here y is refering to x.

//***********************TYpe casting******************************** */
int p=45;
float q=45.90;

cout<<"the value of a is:"<<p<<endl;
cout<<"the value of b is :"<<q<<endl;
cout<<"the value of b is :"<<int(q)<<endl;//float is b is typecasted to int;
cout<<"the value of b is :"<<(int)q<<endl;// same as about but different way to type cast

cout<<"the value of sum is :"<<(p+q)<<endl;
cout<<"the value of sum is :"<<(p+int(q))<<endl;
cout<<"the value of sum is :"<<(p+(int)q)<<endl;


    return 0;

}