//
// Created by Will Smith on 1/25/18.
//


#include <iostream>
using namespace std;

int main() {
    int userNum1,userNum2;

    cout << "Enter integer:" << endl;
    cin  >> userNum1;

    /* Type your code here */
    cout<<"You entered: "<<userNum1<<endl;
    cout<<userNum1<<" squared is "<<userNum1*userNum1<<endl;
    cout<<"And "<<userNum1<<" cubed is "<<userNum1*userNum1*userNum1<<"!!"<<endl;


    cout << "Enter another integer:" << endl;
    cin  >> userNum2;

    cout<<userNum1<<" + "<<userNum2<<" is "<<userNum1+userNum2<<endl;
    cout<<userNum1<<" * "<<userNum2<<" is "<<userNum1*userNum2<<endl;


    return 0;
}
