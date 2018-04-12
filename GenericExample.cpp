//
// Created by Will Smith on 4/10/18.
//

#include <iostream>
#include <string>
using namespace std;

class GenericItem {
public:
   void SetName(string newName) {
      itemName = newName;
   };

   void SetQuantity(int newQty) {
      itemQuantity = newQty;
   };


   string GetName(){
       return itemName;
   };

   int GetQuantity(){
       return itemQuantity;
   };

   virtual void PrintItem() {
      cout << "Item: "<<itemName << " " << itemQuantity << endl;
   };

protected:
   string itemName;
   int itemQuantity;
};

class ProduceItem : public GenericItem { // Derived from GenericItem
public:
   void SetExpiration(string newDate) {
      expirationDate = newDate;
   };

   string GetExpiration() {
      return expirationDate;
   };

    void PrintItem(){
        //cout << GetName() << " " << GetQuantity() << " "<<expirationDate<< endl;
        cout<<"Produce: "<<itemName<<" "<<itemQuantity<<" "<<expirationDate<<endl;
    };

private:
   string expirationDate;
};

int main() {
   GenericItem miscItem;
   ProduceItem perishItem;

    GenericItem* ItemPtr;
    ItemPtr = new GenericItem;


    ItemPtr -> SetName("Smith Cereal");
    ItemPtr -> SetQuantity(9);
    ItemPtr -> PrintItem();

    ItemPtr = new ProduceItem;
    ItemPtr ->SetName("Apples");
    ItemPtr ->SetQuantity(40);
    ItemPtr ->PrintItem();



  /* miscItem.SetName("Smith Cereal");
   miscItem.SetQuantity(9);

    miscItem.PrintItem();

   perishItem.SetName("Apples");
   perishItem.SetQuantity(40);
   perishItem.SetExpiration("May 5, 2012");

    perishItem.PrintItem();*/
   //cout << "  (Expires: " << perishItem.GetExpiration()
   //<< ")" << endl;

   return 0;
}