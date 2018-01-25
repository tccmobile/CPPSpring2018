#include <iostream>
using namespace std;

int main() {
    int numBeans;
    int numJars;
    int totalBeans;

    numBeans = 500;
    numJars = 3;

    cout << numBeans << " beans in ";
    cout << numJars   << " jars yields ";
    totalBeans = numBeans * numJars;
    cout << totalBeans << " total"<< endl;

    return 0;
}
