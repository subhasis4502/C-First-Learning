#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	string s0;
	string s1("Kpple");
	string s2(s1, 0 , 3);
	string s3(10, 'x');
	
	cout << s1 << endl;
	cout << s1.length() << endl;
	cout << s2 << endl;
	cout << s3 << endl;
	
	s1[0]='A';
	cout << s1 << endl;
	
	s2 = "red";
	s3 = s1 + " " + "is " + s2;
	cout << s3 << endl;
	
	for (int i = 0; i <= s1.length(); i++)
	{
		cout << s1[i] << endl; 
	}
	
	s1 = s3.erase(9, 11);
	cout << s3 << endl;
	
	cout << s3.find("is") <<endl;
	
	return 0;
}
