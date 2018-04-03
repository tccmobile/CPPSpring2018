//
// Created by Will Smith on 3/15/18.
//

#ifndef SPRING2018_SHOPPINGCART_H
#define SPRING2018_SHOPPINGCART_H

#include <string>
#include <vector>
#include "ItemToPurchase.h"

using namespace std;

class ShoppingCart {
private:
    string customerName;
    string currentDate;
    vector < ItemToPurchase > cartItems;
public:
    ShoppingCart();

    ShoppingCart(const string &customerName, const string &currentDate);

    const string &GetCustomerName() const;

    const string &GetDate() const;

    void AddItem(ItemToPurchase &item);

    void RemoveItem(const string &itemName);

    void ModifyItem(ItemToPurchase &item);

    int GetNumItemsInCart();

    int GetCostOfCart();

    void PrintTotal();

    void PrintDescriptions();


};


#endif //SPRING2018_SHOPPINGCART_H
