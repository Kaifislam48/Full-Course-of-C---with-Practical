// Data Types 
#include<iostream>
using namespace std;
int main(){
    int i;  //initialisation of variable like integer types 
    i = 4; // Value assing to variable
    cout<<"Size of int "<<sizeof(i)<<endl;  //endl for escape sequence. We can also use \n for escape sequence

    float f;
    cout<<"Size of float "<< sizeof(f)<<endl;

    char c;
    cout<<"Size of char "<< sizeof(c)<<endl;

    bool b;
    cout<<"Size of boolean "<< sizeof(b)<<endl;

    double d;
    cout<<"Size of double "<< sizeof(d)<<endl;

    short si;
    //short int si;
    cout<<"Size of Short Int "<< sizeof(si)<<endl;

    long li;
    //long int li;
    cout<<"Size of Long Int "<< sizeof(li)<<endl;
}