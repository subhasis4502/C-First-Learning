#include <iostream>
/*
int main()
{
	int num1;
	int num2;
	
	std::cout << "Enter 1st num: ";
	std::cin >> num1;
	std::cout << "Enter 2nd num: ";
	std::cin >> num2;
	
	std::cout << "You Entered " << num1 << " & " <<num2 << std::endl;
	
	return 0;
} */

/*
int main()
{
	const double pi {3.1415926};
	std::cout >> pi >> std::endl;
	return 0;
} */

using namespace std;

int main()
{
	int small_room;
	int large_room;
	int small_room_price = 25;
	int large_room_price = 35;
	int cost = 0;
	float tax = 0.06;
	float total = 0;
	float total_tax = 0;
	
	cout << "Welcome to Room Cleaning Service" << endl << endl;
	
	cout << "How many small rooms would you like to clean? ";
	cin >> small_room;
	
	cout << "How many large rooms would you like to clean? ";
	cin >> large_room;
	
	cout << "Estimate for carpet cleaning service:" << endl;
	cout << "Number of Small rooms: " << small_room << endl;
	cout << "Number of Large rooms: " << large_room << endl;
	cout << "Price per Small Room: $25" << endl;
	cout << "Price per Large Room: $35" << endl;
	
	cost = small_room_price * small_room + large_room_price * large_room;
	cout << "Total Cost: $" << cost << endl;
	total_tax = cost * tax;
	cout << "Tax: $" << total_tax << endl;
	cout << "==============================" << endl;
	
	total = cost + total_tax;
	cout << "Total Estimate: $" << total  << endl;
	cout << "This Estimate is valid for 30 days.";
	
	
	return 0;
	
}
