//
// Created by Will Smith on 2/27/18.
//

#include <iostream>
#include <vector>
using namespace std;

int main() {

    /* Type your code here. */
    vector<double> weights(5);
    double maxWeight, averageWeight, totalWeight;

    for (int i = 0; i < weights.size(); ++i) {
        cout<<"Enter weight "<<i+1<<":"<<endl;
        cin>>weights.at(i);
    }

    cout<<"You entered: ";

    for (int i = 0; i < weights.size(); ++i) {
        cout<<weights.at(i)<<" ";
    }

    cout<<endl<<endl;

    maxWeight=averageWeight=totalWeight=0;

    maxWeight = weights.at(0);

    for (int j = 0; j < weights.size(); ++j) {
        totalWeight+=weights.at(j);
        if (weights.at(j)>maxWeight){
            maxWeight = weights.at(j);
        }
    }

    cout<<"Total weight: "<<totalWeight<<endl;
    cout<<"Average weight: "<<totalWeight/weights.size()<<endl;
    cout<<"Max weight: "<<maxWeight<<endl;


    return 0;
}