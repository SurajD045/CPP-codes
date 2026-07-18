#include<iostream>
using namespace std;

int main(){
    // what is pointer ---> Pointer is data type which holds adress of other datatypes.

    int a = 3;
    int* b = &a; 
    // tis can be written also : 
    // int* b;
    // b = &a;



    // & --> Address of operator.

    cout<<b<<endl; //this will the adress of a variable stored in the memory.
    cout<<&a<<endl;//this will also give us address of a;
    cout<<&b<<endl; //this will print the adress of b stored in memory.

    // * --> (value at ) dereffernce operator.

    cout<<*b<<endl;//this *b gives data stored at the adress of variable a.


    // POinter to pointer:

    int** c = &b;
    cout<<"The value of address of b is : "<<&b<<endl;
    cout<<"The value of address of b is : "<<c<<endl;   

    cout<<"the value at address c is "<<*c<<endl;
    cout<<"the value at address value_at(value_at(c)): "<<**c<<endl;



    return 0;
}