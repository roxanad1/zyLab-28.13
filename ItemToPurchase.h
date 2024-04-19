#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H

#include <string>
using namespace std;

class ItemToPurchase{
  private:
  string itemName;
  int itemPrice;
  int itemQuantity;

  public:
  ItemToPurchase();
  void SetName(string name);
  void SetPrice(int price);
  void SetQuantity(int qty);

  string GetName();
  int GetPrice();
  int GetQuantity();

  void Print();
};


#endif
