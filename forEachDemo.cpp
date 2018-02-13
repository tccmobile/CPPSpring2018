//
// Created by Will Smith on 2/13/18.
//

#include <iostream>
using namespace std;

int main(){

  //TODO: Enter your code
  int ara[]={1,5,7,9,10,13};

    for (int i=0; i<6; i++){
        cout<<"value = "<<ara[i]<<endl;
    }

    cout<<"And now for something completely different:"<<endl;

    for (int val:ara){
        cout<<"value = "<<val<<endl;
    }
  return 0;
}