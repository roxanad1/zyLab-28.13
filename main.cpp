#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

int main() {
   ItemToPurchase itp;
   ItemToPurchase itp2;
   string name;
   int price;
   int qty;

   // item 1
   cout << "Item 1" << endl;
   cout << "Enter the item name: " << endl;
   cin >> name;
   itp.SetName(name);
   
   cout << "Enter the item price: " << endl;
   cin >> price;
   itp.SetPrice(price);
   
   cout << "Enter the item quantity: " << endl;
   cin >> qty;
   itp.SetQuantity(qty);

   cin.ignore();
   
   // item 2
   cout << "Item 2" << endl;
   cout << "Enter the item name: " << endl;
   cin >> name;
   itp2.SetName(name);
   
   cout << "Enter the item price: " << endl;
   cin >> price;
   itp2.SetPrice(price);
   
   cout << "Enter the item quantity: " << endl;
   cin >> qty;
   itp2.SetQuantity(qty);

   cout << "TOTAL COST" << endl;
   cout << itp.GetName(name) << itp.GetQuantity(qty) << "@" << itp.GetPrice(price) << "=" << itp.GetQuantity(qty)*itp.GetPrice(price) << endl;
   cout << itp2.GetName(name) << itp2.GetQuantity(qty) << "@" << itp2.GetPrice(price) << "=" << itp2.GetQuantity(qty)*itp2.GetPrice(price) << endl;

   cout << "Total: " << (itp.GetQuantity(qty)*itp.GetPrice(price))+(itp2.GetQuantity(qty)*itp2.GetPrice(price)) << endl;
   
   return 0;
}
