//
// Created by Will Smith on 3/13/18.
//

#ifndef SPRING2018_ITEMTOPURCHASE_H
#define SPRING2018_ITEMTOPURCHASE_H

#include <string>
using namespace std;

class ItemToPurchase {
private:
    string itemName;
    int itemPrice;
    int itemQuantity;

public:
    ItemToPurchase();

    const string &GetName() const;

    void SetName(const string &itemName);

    int GetPrice() const;

    void SetPrice(int itemPrice);

    int GetQuantity() const;

    void SetQuantity(int itemQuantity);
};


#endif //SPRING2018_ITEMTOPURCHASE_H
