//
// Created by Will Smith on 2/13/18.
//

#include <iostream>
using namespace std;

int main() {
    int userNum;
    int i;
    int j;

    userNum  = 3;

    /* Your solution goes here  */

    for ( i = 0; i <=userNum ; ++i) {
        for ( j = 0; j <=i ; ++j) {
            cout<<" ";
            //FIXME: I've got an extra leading whitespace
        }
        cout<<i<<endl;
    }

    //TODO: Verify output is in the correct format for Zybooks
    return 0;
}