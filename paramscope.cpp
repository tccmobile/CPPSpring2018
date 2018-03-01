//
// Created by Will Smith on 2/27/18.
//

#include <iostream>
using namespace std;

void OutputMinutesAsHours(double origMinutes) {

   /* Your solution goes here  */
   cout<<origMinutes/60;

}

int main() {

   double minutes = 210.0;

   OutputMinutesAsHours(minutes); // Will be run with 210.0, 3600.0, and 0.0.
   cout <<endl;

   return 0;
}