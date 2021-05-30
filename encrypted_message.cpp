#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	string alphabet("abcdefghijklmnopqrstuvwxyz ABCDEFGHIJKLMNOPQRSTUVWXYZ");
	string cypher("!@#$%^&*()_+-=1234567890,./|abcdefghijklmnopqrstuvwxyz");
	string input;
	string output;
	
	cout << "Enter your secret code: ";
	cin >> input;
	
	for (int i = 0; i<input.length(); i++)
	{
		for (int j = 0; j<alphabet.length(); j++)
		{
			if (input[i] == alphabet[j])
			{
				output += cypher[j];
				break;	
			}	
		}
		
	}
	cout << "Your encrypted message is: " << output << endl;
}
