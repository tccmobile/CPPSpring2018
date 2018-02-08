//
// Created by Will Smith on 1/30/18.
//

#include <iostream>
using namespace std;

int main() {
   int kidsInFamily1;       // Should be int, not double
   int kidsInFamily2;       // (know anyone with 2.3 kids?)
   int numFamilies;

   double avgKidsPerFamily; // Expect fraction, so double

   kidsInFamily1 = 3;
   kidsInFamily2 = 4;
   numFamilies = 2;

   avgKidsPerFamily = (double)(kidsInFamily1 + kidsInFamily2)
                      / numFamilies;

   cout << "Average kids per family: " << avgKidsPerFamily << endl;

   return 0;
}