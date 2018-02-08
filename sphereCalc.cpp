//
// Created by Will Smith on 1/30/18.
//

#include <iostream>
#include <cmath>
using namespace std;

#define PI 3.14159

int main() {
   const double piVal = 3.14159;
   double sphereVolume;
   double sphereRadius;

   sphereRadius = 1.0;



   /* Your solution goes here  */
   sphereVolume = 4.0/3.0 * PI * pow(sphereRadius,3);

   cout << "Sphere volume: " << sphereVolume << endl;

   return 0;
}