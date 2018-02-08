//
// Created by Will Smith on 2/8/18.
//

#include <iostream>
#include <string> // Note: This library is needed to use the string type
using namespace std;

int main() {

    string userInput;

    cout<<"Input an abbreviation:"<<endl;
    cin>>userInput;

    if (userInput.find('O')!=string::npos){
        cout<<"I found an O"<<endl;
    }

    if (userInput=="LOL"){
        cout<<"laughing out loud"<<endl;
    } else if (userInput=="IDK"){
        cout<<"I don't know"<<endl;
    } else if (userInput=="BFF"){
        cout<<"best friends forever"<<endl;
    } else if (userInput=="IMHO"){
        cout<<"in my humble opinion"<<endl;
    } else if (userInput=="TMI"){
        cout<<"too much information"<<endl;
    } else {
        cout<<"Unknown"<<endl;
    }

    return 0;
}