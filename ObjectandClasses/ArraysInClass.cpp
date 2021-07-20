#include<bits/stdc++.h>
using namespace std;

class shop{
private:

  int itemCounter;
  string itemName[100];
  int itemPrice[100];

public:
  void getCounter(void) {itemCounter=0;}
  void setItemPrice(void);
  void displayItem(void);
};

void shop :: setItemPrice(void){
  std::cout << "Enter Product name "<< itemCounter+1  << ":  ";
  std::cin >> itemName[itemCounter];

  std::cout << "Enter Product Price: ";
  std::cin >> itemPrice[itemCounter];
  itemCounter++;
}

void shop :: displayItem(void){
  for (int i = 0; i < itemCounter; i++) {
      std::cout << "The "<<itemName[i]<<" is added and price set to: "<<itemPrice[i] << '\n';
  }
}

int main(int argc, char const *argv[]) {
   shop sh;
   sh.getCounter();
   sh.setItemPrice();
   sh.displayItem();
  return 0;
}
