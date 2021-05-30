#include <iostream>
#include <vector>

using namespace std;

/*int main()
{
	int marks =0;
	cout << "Enter Your Marks: ";
	cin >> marks;
	
	if (marks>=0 && marks<=100)
	{
	
		if (marks >= 90)
		{
			cout << "Your grade is A" << endl;
			
		}
		
		else if (marks >= 80)
		{
			cout << "Your grade is B" << endl;
			
		}
		
		else if (marks >= 70)
		{
			cout << "Your grade is C" << endl;
			
		}
		
		else if (marks >= 60)
		{
			cout << "Your grade is D" << endl;
			
		}
		
		else
		{
			cout << "Your grade is F" << endl;
			
		}
	}
	else 
		cout << "Please enter a valid number.";	
	return 0;
}*/

/*int main()
{
	char alphabet;
	cout << "Enter any alphabet: ";
	cin >> alphabet;
	switch (alphabet)
	{
		case 'a':
			cout << "a is a vowel" << endl; break;
		
		case 'e':
			cout << "e is a vowel" << endl; break;
			
		case 'i':
			cout << "i is a vowel" << endl; break;
			
		case 'o':
			cout << "o is a vowel" << endl; break;
			
		case 'u':
			cout << "u is a vowel" << endl; break;
			
		default:
			cout << alphabet << " is not a vowel." << endl;
	}
	return 0;
}*/

/*int main()
{
	int num (0);
	cout << "Enter a Number: ";
	cin >> num;
	
	cout << num << " is a " << ((num%2==0) ? "Even":"Odd") << " number." << endl;
	return 0;
}*/

/*int main()
{
	char ans;
	do
	{	int num = 0; 
		cout << "Which table do you want: ";
		cin >> num;
		
		int i = 0;
		for (i=1; i<=10; i++)
		{
			cout << num << " x " << i << " = " << i*num << endl;
		}
		cout << "Do You need any other table?(y/n) ";
		cin >> ans;
	}
	while (ans== 'y' || 'Y');
	return 0;
}*/

/*int main()
{
	for (int j=5; j>=0; j--){
		for (int i=1; i<=j; i++)
		cout << i << " " ;
		cout << endl;}
	
	return 0;
}*/

/*int main()
{
	for (;;) //Infinite for loop
	cout << "oops" << endl;
	return 0;
}*/

/*int main()
{
	int scores[] {100, 90, 80};
	int size, sum=0;
	for (int score: scores)
		sum += score;
		++size;
	cout << "Average: " << sum/3 << endl;
	return 0;
}*/

/*int main()
{
	int num = 0;
	cout << "Enter a number: ";
	cin >> num;
	while (num>100)
	{
		cout << "Enter a number less than 100: ";
		cin >> num; 
	}
	cout << "Thanks Buddy!!" << endl;
	return 0;
}*/

/*int main()
{
	int num=0;
	do
	{
		cout << "Enter a number between 1 & 5: ";
		cin >> num;
	}
	while (num<1 || num>5);
	cout << "Thanks Buddy!!" << endl;
	return 0;
}*/

/*int main()
{
	vector <int> data(10,0);
	cout << "Give some data: ";
	cin >> data[0];
	cin >> data[1];
	cin >> data[2];
	
	cout << "Display Histogram" << endl;
	for (int val: data)
	{
		for (int i =1; i <=val; ++i)
		{
			cout<<"+";
		}
		cout<< endl;
	}
}*/
