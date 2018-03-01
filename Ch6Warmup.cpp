//
// Created by Will Smith on 3/1/18.
//

#include <iostream>
#include <string>
using namespace std;

//Step 2
//Returns the number of characters in usrStr
int GetNumOfCharacters(const string usrStr) {

    /* Type your code here. */
    int count=0;

    for (int i = 0; i < usrStr.size(); ++i) {
        count++;
    }

    return count;

}

//Step 4

void OutputWithoutWhitespace(const string usrStr){

    cout<<"String with no whitespace: ";
    for (int i = 0; i < usrStr.size() ; ++i) {
        if ((usrStr.at(i)!=' ')&& (usrStr.at(i)!='\t')){
            cout<<usrStr.at(i);
        }
    }
    cout<<endl;
}

int main() {

    /* Type your code here. */
    string userInput;
    //Step 1
    cout<<"Enter a sentence or phrase:"<<endl;
    getline(cin,userInput);
    cout<<endl;
    cout<<"You entered: "<<userInput<<endl<<endl;
    //Step 3
    cout<<"Number of characters: "<<GetNumOfCharacters(userInput)<<endl;
    OutputWithoutWhitespace(userInput);

    return 0;
}