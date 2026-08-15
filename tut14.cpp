#include<iostream>
using namespace std;


    
    /*Stuctures :is a user defined datatype and used to combined differnt datatypes 
                unlike the array which store same datatype values ,
                structure can store multiple datatypes values.
                
    */
    typedef struct employee
    {
        int eID;
        char FavChar;
        float salary;
        int experience;
    }ep;

    /* unions :used for memory optimizations as it allow to use ony one datatypes .
                for eg: only rice at a time . memory is allocated is 4bit.
                or you u=can use car and memory is allocated 1bit 
    */
    union money
    {
        int rice;
        char car;
        float pounds;
    };
    
int main(){
    union money m1;
    m1.rice = 5;
    // m1.car = 'c';
    // m1.pounds = 1.5;
    cout<<m1.rice<<endl;


    // struct employee suraj;  //now for employee we can use ep
    // suraj.eID = 001;       
    // suraj.FavChar = 's';    
    // suraj.salary = 600000;
    // suraj.experience = 0;

    // cout<<"The value of "<<suraj.eID<<endl;
    // cout<<"The value of "<<suraj.FavChar<<endl;
    // cout<<"The value of "<<suraj.salary<<endl;
    // cout<<"The value of "<<suraj.experience<<endl;
    return 0;

}