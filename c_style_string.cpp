#include<iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main()
{
	char first_name[20]{};
	char last_name[20]{};
	char full_name[50]{};
	char temp[60]{};
	
	cout << first_name;
	
	/*cout << "Please enter your first name: ";
	cin >> first_name;
	cout << "Hello, " << first_name << "Enter your last name: ";
	cin >> last_name;
	
	strcpy(full_name, first_name);
	strcat(full_name, " ");
	strcat(full_name, last_name);
	cout << "Welcome " << full_name << endl;
	cout << "Number of Characters: " << strlen(full_name) << endl;*/
	
	/*cout << "Enter your name: ";
	cin >> full_name; //Inserting string upto the space
	cout << "Welcome " << full_name << endl;*/
	
	cout << "Enter your name: ";
	cin.getline(full_name, 50); //Inserting the string with space
	cout << "Welcome " << full_name << endl;
	
	/*strcat(temp, "Subhasis");
	if (strcmp(temp, full_name)==0)
		cout << "Name matched..." << endl;
	else 
		cout << "Try again!" << endl;*/
	
	for (int i=0; i<strlen(full_name); i++)
	{
		if (isalpha(full_name[i]))
			full_name[i] = toupper(full_name[i]);
	}
	cout << "Your full name is " << full_name << endl;
 	
	
	return 0;
}
