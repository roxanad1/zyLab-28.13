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
   getline(cin, name);
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
   cin.ignore();
   getline(cin, name);
   itp2.SetName(name);
   
   cout << "Enter the item price: " << endl;
   cin >> price;
   itp2.SetPrice(price);
   
   cout << "Enter the item quantity: " << endl;
   cin >> qty;
   itp2.SetQuantity(qty);

   cout << "TOTAL COST" << endl;
   cout << itp.GetName() << " " << itp.GetQuantity() << " @ $" << itp.GetPrice() << " = $" << itp.GetQuantity()*itp.GetPrice() << endl;
   cout << itp2.GetName() << " " << itp2.GetQuantity() << " @ $" << itp2.GetPrice() << " = $" << itp2.GetQuantity()*itp2.GetPrice() << endl;

   cout << "Total: $" << (itp.GetQuantity()*itp.GetPrice())+(itp2.GetQuantity()*itp2.GetPrice()) << endl;
   
   return 0;
}
