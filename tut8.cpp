#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    // int a=5;
    // char c='c';
    // cout<<"the value of a was:"<<a<<c<<endl;

    // a=6;
    // c='p';
    // cout<<"the value od a is:"<<a<<c<<endl;
//*********Constants in c++********** */
// const int a=5;
// cout<<"the value of a was:"<<a<<endl;
// a=45;//it will throw an error becouse we declared the a as the constant. now we can't change the value of variable.

// cout<<"the value of a is:"<<a<<endl;

//**********Manupulators********************* */
// int a=1, b=12, c=123;
// cout<<"the value of a witout setw is:"<<a<<endl;
// cout<<"the value of b witout setw is:"<<b<<endl;
// cout<<"the value of c witout setw is:"<<c<<endl;

// cout<<"the value of a with setw is:"<<setw(4)<<a<<endl;//here setw requires  manip called header file.
// cout<<"the value of b with setw is:"<<setw(4)<<b<<endl;//here endl is also a manupulator. 
// cout<<"the value of c with setw is:"<<setw(4)<<c<<endl;


//************OPerator precedance*********************** */
int g,h,v=5;
g=5;
h=6;
v=(g*h)+v;
cout<<"the value of v is "<<v<<endl;
v=g*h+v;
cout<<"the value of v is"<<v<<endl;


return 0;


}