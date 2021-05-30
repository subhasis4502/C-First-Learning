#include <iostream>

using namespace std;

/*int main()
{
	double a = 10;
	double b = 20;
	
	cout << a << " + " << b << " = " << a+b << endl;
	cout << a << " - " << b << " = " << a-b << endl;
	cout << a << " x " << b << " = " << a*b << endl;
	cout << a << " / " << b << " = " << a/b << endl;
	
	return 0;
}*/

/*int main()
{
	int total {0};
	int num1 {0}, num2 {0}, num3 {0};
	const int count {3};
	
	cout << "Enter 3 Integers: ";
	cin >> num1 >> num2 >> num3;
	
	total = num1 + num2 + num3;
	
	double average {0.0};
	
	average = static_cast<double>(total)/count;
	
	cout << "Total of these is: " << total << endl;
	cout << "Average: " << average << endl;
	return 0;
}*/

/*int main()
{
	bool equal_result {false};
	bool not_equal_result {false};
	
	char num1 {}, num2 {};
	
	cout << boolalpha;
	
	cout << "Enter two numbers: " ;
	cin >> num1 >> num2;
	equal_result = (num1 == num2);
	not_equal_result = (num1 =! num2);
	
	cout << equal_result;
	
	return 0;
}*/

/*int main()
{
	int a {}, b{};
	
	cout << "Enter two integers: ";
	cin >> a >> b;
	
	if (a>=b)
		cout << a << " is greater than equal to " << b << endl;
	else
		cout << a << " is less than equal to " << b << endl;
		
	return 0;
}*/

int main()
{
	const int dollar=100, quarters=25, dimes=10, nickels=5, pennies =1;
	int input=0;
	
	cout << "Enter an amount in cents: ";
	cin >> input;
	
	cout << "Dollar: " << input/dollar << endl;
	cout << "Quaters: " << (input % dollar)/quarters <<endl;
	cout << "Dimes: " << (input % quarters)/dimes << endl;
	cout << "Nickels: " << (input % dimes)/nickels << endl;
	cout << "Pennies: " << (input % nickels)/pennies << endl;
	
	
	return 0;
	
}
