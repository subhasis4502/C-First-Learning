#include <iostream>
#include <climits>
#include <vector>

using namespace std;

/*int main()
{	
	cout << "char: " << sizeof(char) << " bytes" << endl;
	cout << "int: " << sizeof(int) << " bytes" << endl;
	cout << "unsigned int: " << sizeof(unsigned int) << " bytes" << endl;
	cout << "short: " << sizeof(short) << " bytes" << endl;
	cout << "long: " << sizeof(long) << " bytes" << endl;
	cout << "long long: " << sizeof(long long) << " bytes" << endl;
	cout << "float: " << sizeof(float) << " bytes" << endl;
	cout << "double: " << sizeof(double) << " bytes" << endl;
	cout << "long double: " << sizeof(long double) << " bytes" << endl;
	
	
	return 0;
}*/

/*int main()
{
	int test_score [5];
	cin >> test_score [0];
	cin >> test_score [1];
	cin >> test_score [2];
	cin >> test_score [3];
	cin >> test_score [4];
	
	test_score [4]=10;
	cout << test_score[5] <<endl;
	return 0;
}*/

/*int main()
{
	int movie_rating [3][4]
	{
		{0, 4, 3, 5},
		{2, 3, 3, 5},
		{1, 4, 4, 5}
	};
	cout << movie_rating[1][2] << endl;
	return 0;
}*/


/*int main()
{
	int test{0};
	
	vector <int> test_score (5, 3);
	cin >> test ;
	test_score.push_back(test);
	
	cout << test_score.size() << endl;
	return 0;
}*/

/*int main()
{
	vector <int> vector1;
	vector <int> vector2;
	
	vector1.push_back(10);
	vector1.push_back(20);
	cout << "Vector1 element is " << vector1.at(0) << " and " << vector1.at(1) <<endl;
	
	vector2.push_back(100);
	vector2.push_back(200);
	cout << "Vector2 element is " << vector2.at(0) << " and " << vector2.at(1) <<endl;
	return 0;
}*/

int main()
{
	
	vector <int> vector1;
	vector <int> vector2;
	
	vector1.push_back(10);
	vector1.push_back(20);
	vector2.push_back(100);
	vector2.push_back(200);
	
	vector <vector<int> >vector_2d; 
	vector_2d.push_back (vector1);
	vector_2d.push_back (vector2);
	
	cout << vector_2d[0][1] << " and " << vector_2d[1][0] << endl;
	
	vector1[0] = 1000;
	
	cout << vector_2d[0][1] << " and " << vector_2d[1][0] << endl;
	cout << "Vector1 element is " << vector1.at(0) << " and " << vector1.at(1) <<endl;
	return 0;
}
