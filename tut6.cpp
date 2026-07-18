
//There are two header files
//1.system header files: it comes with the system copiler.
#include<iostream>
//2. user defined header files: it is defined by the programmer.
//#include"this.h" //-->this.h is user defined header file and should be present in the current directory.
//"https://cppreference.com/cpp/header" here u will got all c++ standard header files present till date.


using namespace std;
int main(){
    int a=3, b=4;

    cout<<"operators in c++:"<<endl;
    cout<<"following are the types of operators in c++:"<<endl;
    //Arithmatic operators: 
    cout<<"the value of a+b is:"<<a+b<<endl;
    cout<<"the value of a-b is:"<<a-b<<endl;
    cout<<"the value of a*b is:"<<a*b<<endl;    
    cout<<"the value of a/b is:"<<a/b<<endl;
    cout<<"the value of a%b is:"<<a%b<<endl;
    cout<<"the value of a++ is:"<<a++<<endl;
    cout<<"the value of a is:"<<a<<endl;
    cout<<"the value of a-- is:"<<a--<<endl;
     cout<<"the value of a is:"<<a<<endl;
    cout<<"the value of ++a is:"<<++a<<endl;
    cout<<"the value of a is:"<<a<<endl;
    cout<<"the value of --a is:"<<--a<<endl;
    cout<<"the value of a is:"<<a<<endl;
    cout<<endl;
    //Assignment operators:-->
    int c=9, d=6;
    char e='a';

    //Comparison operators:
    cout<<"the following are the comprison operators:"<<endl;
    cout<<"the value os a == b is:"<<(a==b)<<endl;
    cout<<"the value os a != b is:"<<(a!=b)<<endl;
    cout<<"the value os a >= b is:"<<(a>=b)<<endl;
    cout<<"the value os a <= b is:"<<(a<=b)<<endl;
    cout<<"the value os a > b is:"<<(a>b)<<endl;
    cout<<"the value os a < b is:"<<(a<=b)<<endl;    
    cout<<endl;
     // logical operators:
     cout<<"the value of this logical and (a==b) && (a<b) is:"<<((a==b) && (a<b))<<endl;
     cout<<"the value of this logical or (a==b) || (a<b) is:"<<((a==b) || (a<b))<<endl;
     cout<<"the value of this logical not (!(a==b)) is:"<<(!(a==b))<<endl;

    return 0;
}