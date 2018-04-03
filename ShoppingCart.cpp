//
// Created by Will Smith on 3/15/18.
//

#include <iostream>
#include "ShoppingCart.h"

ShoppingCart::ShoppingCart(): customerName("none"),currentDate("January 1, 2016") {}

ShoppingCart::ShoppingCart(const string &customerName, const string &currentDate) : customerName(customerName),
                                                                                    currentDate(currentDate) {}

const string &ShoppingCart::GetCustomerName() const {
    return customerName;
}

const string &ShoppingCart::GetDate() const {
    return currentDate;
}

void ShoppingCart::AddItem(ItemToPurchase &item) {
    //Adds an item to cartItems vector.
}

void ShoppingCart::RemoveItem(const string &itemName) {
    // Removes item from cartItems vector.
    // If item name cannot be found, output this message: Item not found in cart. Nothing removed.
    for (int i = 0; i < cartItems.size() ; ++i) {
        if (cartItems.at(i).GetName()==itemName){
            cout<<"Found it!"<<endl;

        }

    }
}

void ShoppingCart::ModifyItem(ItemToPurchase &item) {
    // Modifies an item's description, price, and/or quantity.
    // If item can be found (by name) in cart, check if parameter has default values for description, price, and quantity. If not, modify item in cart.
    // If item cannot be found (by name) in cart, output this message: Item not found in cart. Nothing modified.

}

int ShoppingCart::GetNumItemsInCart() {
    int totalItems;
    //Returns quantity of all items in cart.
    return totalItems;
}

int ShoppingCart::GetCostOfCart() {
    int totalCost;

    //Determines and returns the total cost of items in cart.

    return totalCost;
}

void ShoppingCart::PrintTotal()  {
    // Outputs total of objects in cart.
    // If cart is empty, output this message: SHOPPING CART IS EMPTY
}

void ShoppingCart::PrintDescriptions()  {
    // Outputs each item's description.
}




