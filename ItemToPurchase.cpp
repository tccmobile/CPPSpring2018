//
// Created by Will Smith on 3/13/18.
//

#include "ItemToPurchase.h"
#include <iostream>
using namespace std;

ItemToPurchase::ItemToPurchase(): itemName("none"), itemQuantity(0), itemPrice (0), itemDescription("none") {}

const string &ItemToPurchase::GetName() const {
    return itemName;
}

void ItemToPurchase::SetName(const string &itemName) {
    ItemToPurchase::itemName = itemName;
}

int ItemToPurchase::GetPrice() const {
    return itemPrice;
}

void ItemToPurchase::SetPrice(int itemPrice) {
    ItemToPurchase::itemPrice = itemPrice;
}

int ItemToPurchase::GetQuantity() const {
    return itemQuantity;
}

void ItemToPurchase::SetQuantity(int itemQuantity) {
    ItemToPurchase::itemQuantity = itemQuantity;
}

const string &ItemToPurchase::GetDescription() const {
    return itemDescription;
}

void ItemToPurchase::SetDescription(const string &itemDescription) {
    ItemToPurchase::itemDescription = itemDescription;
}

ItemToPurchase::ItemToPurchase(const string &itemName, const string &itemDescription, int itemPrice =0 , int itemQuantity =0)
        : itemName(itemName), itemDescription(itemDescription), itemPrice(itemPrice), itemQuantity(itemQuantity) {}

void ItemToPurchase::PrintItemCost() const {
    cout<<GetName()<<" "<<GetQuantity()<<" @ $"<<GetPrice()<<" = $"<<(GetPrice()*GetQuantity())<<endl;

}

void ItemToPurchase::PrintItemDescription() const {
    cout<<GetName()<<": "<<GetDescription()<<endl;
}
