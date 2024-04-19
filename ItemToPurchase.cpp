#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

/* Type your code here */
void::ItemToPurchase::SetName(string name) {
  itemName = name;
}

void::ItemToPurchase::SetPrice(string price) {
  itemPrice = price;
}

void::ItemToPurchase::SetQuantity(string qty) {
  itemQuantity = qty;
}

string ItemToPurchase::GetName(){
  return itemName;
}

string ItemToPurchase::GetPrice(){
  return itemPrice;
}

string ItemToPurchase::GetQuantity(){
  return itemQuantity;
}
