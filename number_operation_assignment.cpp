#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> numbers;
	char input;
	bool condition (false);
	
	cout << "P - Print Numbers" << endl;
	cout << "A - Add a Number" << endl;
	cout << "M - Display Mean of the Number" << endl;
	cout << "S - Display the Smallest Number" << endl;
	cout << "L - Display the Largest Number" << endl;
	cout << "Q - Quit" << endl;
	
	do
	{
		cout << "\nEnter Your Choice: ";
		cin >> input;
		input = tolower(input);
		
	if (input == 'p')
	{
		if (numbers.size() == 0)
			cout << "[] - the list is empty." << endl;
		else
		{
			cout << "The list is [ ";
			for (int i = 0; i<numbers.size(); i++)
				cout << numbers[i] << " ";
			cout << "]";
		}
	}
	else if (input == 'a')
		{
			int newValue;
			cout << "Enter a value: ";
			cin >> newValue;
			numbers.push_back(newValue);
		}
	else if (input == 'm')
		{
			if (numbers.size() == 0)
				cout << "Not possible, the list is empty.";
			else
			{
				double mean = 0;
			for (int i = 0; i<numbers.size(); i++)
				mean += numbers[i];
			cout << "Mean of them: " << mean/numbers.size() << endl;
			}
		}
	else if (input == 's')
		{
			if (numbers.size() == 0)
				cout << "Not possible, the list is empty.";
			else
			{
				int small = numbers[0];
			for (int i = 0; i<numbers.size(); i++)
				if (small>numbers[i])
					small=numbers[i];
			cout << "Smallest number in the list: " << small << endl;
			}
		}
	else if (input == 'l')
		{
			if (numbers.size() == 0)
				cout << "Not possible, the list is empty.";
			else
			{
				int large = numbers[0];
			for (int i = 0; i<numbers.size(); i++)
				if (large<numbers[i])
					large=numbers[i];
			cout << "Largest numbet in the list: " << large << endl;
			}
		}
	else if (input == 'q')
		{
			cout << "Thank You!!" << endl;
			break;
		}
	}
	
	while (input != 'p' or input != 'a');
	
	return 0;
}
