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
    string itemDescription;
    int itemPrice;
    int itemQuantity;

public:
    ItemToPurchase();

    ItemToPurchase(const string &itemName, const string &itemDescription, int itemPrice, int itemQuantity);

    const string &GetName() const;

    void SetName(const string &itemName);

    int GetPrice() const;

    void SetPrice(int itemPrice);

    int GetQuantity() const;

    void SetQuantity(int itemQuantity);

    const string &GetDescription() const;

    void SetDescription(const string &itemDescription);

    void PrintItemCost() const;

    void PrintItemDescription() const;


};


#endif //SPRING2018_ITEMTOPURCHASE_H
