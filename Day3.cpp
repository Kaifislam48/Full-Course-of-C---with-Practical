#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;   //Taking input from user 
        if (number > 0) {
        cout << "The number is positive." << endl;
        if (number%2==0){
            cout<<"Even Number ";
        }
        else{
            cout<<"Odd Number ";
        }
    } else if (number < 0) {
        cout << "The number is negative." << endl;
    } else {
        cout << "The number is zero." << endl;
    }

    return 0;
}
