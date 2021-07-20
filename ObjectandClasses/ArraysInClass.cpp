	#include<bits/stdc++.h>
	using namespace std;

	class shop{
	private:

	int itemCounter;
	string itemName[100];
	int itemPrice[100];
  int itemNumber[100];
	public:
	void getCounter(void) {itemCounter=0;}
	void setItemDetails(void);
	void displayItemDeatils(void);
	};

	void shop :: setItemDetails(void){
	std::cout << "Enter Product name "<<":  ";
	std::cin >> itemName[itemCounter];

	std::cout << "Enter Product Price: ";
	std::cin >> itemPrice[itemCounter];

  std::cout << "Enter Number of "<<itemName[itemCounter]<<" to be added: " << '\n';
  std::cin >> itemNumber[itemCounter];

	itemCounter++;
	}

	void shop :: displayItemDeatils(void){
	for (int i = 0; i < itemCounter; i++) {
	  std::cout << "The "<<itemName[i]<<" is added and price set to: "<<itemPrice[i] << '\n';
  }
	}

	int main(int argc, char const *argv[]) {
	shop sh;
	int n;
	std::cout << "Enter number of Product: ";
	std::cin >> n;
	sh.getCounter();
	for (int i = 0; i < n; i++) {
	   sh.setItemDetails();
   }
	sh.displayItemDeatils();
	return 0;
	}
