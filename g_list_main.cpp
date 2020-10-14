#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using std::string; 
using std::cin;

class GroceryList {
	private:
		int item_count;
		string item0;
		string item1;
		string item2;
		string item3;
		string item4;
		string item5;
		string item6;
		string item7;
		string item8;
		string item9;
		std::vector<std::string> grocery_list;
		std::ofstream glist;
		
	public:	

		void items_input() {
				glist.open("grocery_list.txt");
				std::cout << "Enter 10 items to add to your shopping list: \n";

				cin >> item0;
				cin >> item1;
				cin >> item2;
				cin >> item3;
				cin >> item4;
				cin >> item5;
				cin >> item6;
				cin >> item7;
				cin >> item8;
				cin >> item9;
			}
		void list_output() {

			item_count = 0;

			grocery_list.push_back(item0);
			item_count++;
			grocery_list.push_back(item1);
			item_count++;
			grocery_list.push_back(item2);
			item_count++;
			grocery_list.push_back(item3);
			item_count++;
			grocery_list.push_back(item4);
			item_count++;
			grocery_list.push_back(item5);
			item_count++;
			grocery_list.push_back(item6);
			item_count++;
			grocery_list.push_back(item7);
			item_count++;
			grocery_list.push_back(item8);
			item_count++;
			grocery_list.push_back(item9);
			item_count++;

			while (item_count < 10) {
				items_input();
			}
			if (item_count >= 10) {
				std::copy(grocery_list.rbegin(), grocery_list.rend(), std::ostream_iterator<string>(glist, "\n"));
				string exit;
				std::cout << "You have entered the maximum number of items. Press e to exit.\n";
				glist.close();
				std::cin >> exit;

			}
		}
};


int main() {
	GroceryList glist;

	glist.items_input();
	glist.list_output();
	

	return 0;

}