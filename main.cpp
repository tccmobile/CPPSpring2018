#include <iostream>
#include "ItemToPurchase.h"
#include "ShoppingCart.h"

using namespace std;

char printMenu(ShoppingCart &myCart){
    char choice;

    return choice;
}




int main() {
    ItemToPurchase item1, item2;
    string name;
    int quantity, price;

    cout<<"Item 1"<<endl;
    cout<<"Enter the item name:"<<endl;
    getline(cin,name);
    cout<<"Enter the item price:"<<endl;
    cin>>price;
    cout<<"Enter the item quantity:"<<endl;
    cin>>quantity;

    item1.SetName(name);
    item1.SetPrice(price);
    item1.SetQuantity(quantity);

    cin.ignore();

    cout<<endl;
    cout<<"Item 2"<<endl;
    cout<<"Enter the item name:"<<endl;
    getline(cin,name);
    cout<<"Enter the item price:"<<endl;
    cin>>price;
    cout<<"Enter the item quantity:"<<endl;
    cin>>quantity;

    item2.SetName(name);
    item2.SetPrice(price);
    item2.SetQuantity(quantity);

    cout<<endl;
    cout<<"TOTAL COST"<<endl;
    cout<<item1.GetName()<<" "<<item1.GetQuantity()<<" @ $"<<item1.GetPrice()<<" = $"<<(item1.GetPrice()*item1.GetQuantity())<<endl;
    cout<<item2.GetName()<<" "<<item2.GetQuantity()<<" @ $"<<item2.GetPrice()<<" = $"<<(item2.GetPrice()*item2.GetQuantity())<<endl;
    cout<<endl;
    cout<<"Total: $"<<(item1.GetPrice()*item1.GetQuantity())+(item2.GetPrice()*item2.GetQuantity())<<endl;

    return 0;
}
