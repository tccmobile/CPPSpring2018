//
// Created by Will Smith on 4/17/18.
//

#include <iostream>
using namespace std;

void BackwardsAlphabet(char currLetter){
   if (currLetter == 'a') {
      cout << "Found Treasure! "<<currLetter << endl;
   }
   else{
      cout << "Digging down "<<currLetter << " "<<endl;
      BackwardsAlphabet(currLetter - 1);
       cout<< "Climbing out "<<currLetter<< " "<<endl;
   }
   return;
}

int main() {
   char startingLetter = '-';

   startingLetter = 'z';

   /* Your solution goes here  */
   BackwardsAlphabet(startingLetter);

    cout<<"I'm spending my treasure!!"<<endl;

   return 0;
}