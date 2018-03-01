//
// Created by Will Smith on 2/27/18.
//


#include <iostream>
using namespace std;

int ComputeSquare(int numToSquare) {
    return numToSquare * numToSquare;
}

int main() {
    int numSquared;

    ComputeSquare(7);

    cout << "7 squared is " << numSquared << endl;

    return 0;
}