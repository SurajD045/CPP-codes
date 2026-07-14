/**c++ main control structures ka kam hota hain program ko flow dena, logic dena. program main jan dalna. 
*In c++ 3 basic control structures a.Sequence structures  b.Selection structure   c. Loop structure
*a. Sequence structre : as name suggest it basically perform sequence of actions. Entry->action1->action2->exit.
*b. Selection structure : itt is basical have certain actions and implemented according to condition. entry-> condtion ->if true ->action1 if false->action2.->then exit.
*c. Loop structure: it is basically like depend on condition certain loop is executed, after the condition goes false loop get breaked.
*    entry ->check condition->if true ->execute action 1 ->again check contion and ->if true again execute action and -> check condition if false -> execute action 2-> exit.

******/

#include<iostream>

using namespace std;
int main(){
    //cout<<"this is c++ program for tut 9";
    int age;
    cout<<"Enter your age : "<<endl;
    cin>>age;
/********Selection control structure if-else **************************** */
    // if(age<18){
    //     cout<<"you are baccha and you can't have drink"<<endl;
    // }else if(age==18){
    //     cout<<"You are just 18 and not adult but you can travel with your friends"<<endl;
    // }
    // else{
    //     cout<<"you can have parties and you can drink with your father"<<endl;
    // }

    /************Selection control structre switch case*************************** */
    switch(age){
        case 18 :
            cout<<"you are 18"<<endl;
        break;

        case 22 :
            cout<<"you are 22"<<endl;
        break;

        case 2 :
            cout<<"you are 2"<<endl;
        break;


        default:
        cout<<"No specia cases"<<endl;
        break;
    }

    return 0;
}