//
// Created by Will Smith on 4/10/18.
//

#include <string>
#include <iostream>
using namespace std;


int main(){

  int count=0;

    string userInput;

    cout<<"Enter a string:";

    getline(cin,userInput);

    for (int i = 0; i <userInput.size() ; ++i) {
        if (userInput.at(i)==','){
            count++;
        }

    }

    cout<<"Your string: "<<userInput<<endl;
    cout<<"Had "<<count<<" commas"<<endl;


  return 0;
}