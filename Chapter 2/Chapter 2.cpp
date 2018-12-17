// ReSharper disable once CppUnusedIncludeDirective
#include "pch.h"
#include <iostream>
#include <string>
#include "std_lib_facilities.h"
using namespace std;

void first_task();
void second_task();
void third_task();
void fourth_task();
void fifth_task();
void sixth_task();
void safe_conversion();
void drill();
void exercise_1();
void exercise_2();
void exercise_3();
void exercise_4();
void exercise_5();
void exercise_6();

/*
int main()
{
	int selector = 1;
	cout << "Which task, choose between 1, 2, 3, 4, 5, and 6\n";
	cin >> selector;
	switch (selector)
	{
	case 2:
		second_task();
		break;
	case 3:
		third_task();
		break;
	case 4:
		fourth_task();
		break;
	case 5:
		fifth_task();
		break;
	case 6:
		sixth_task();
		break;
	default:
		first_task();
		break;
	}

	system("pause");
	return 0;
}
*/

int main()
{
	exercise_6();
	system("pause");
	return 0;
}

void first_task()
{
	cout << "Please enter your first name and age\n";
	string first_name = "???";	// string variable
								// ("???” means “don’t know the name”)
	double age = -1;				// integer variable (–1 means “don’t know the age”)
	cin >> first_name >> age;	// read a string followed by an integer
	cout << "Hello, " << first_name << " (age " << age * 12 << " months)\n";
}

void second_task()
{
	cout << "Please enter a int value: ";
	int n;
	cin >> n;
	cout << "n == " << n
		<< "\nn+1 == " << n + 1
		<< "\nthree times n == " << 3 * n
		<< "\ntwice n == " << n + n
		<< "\nn squared == " << n * n
		<< "\nhalf of n == " << n / 2
		<< "\nsquare root of n == " << sqrt(n)
		<< '\n'; // another name for newline (“end of line”) in output
}

void third_task()
{
	cout << "Please enter two names\n";
	string first;
	string second;
	cin >> first >> second; // read two strings
	if (first == second) cout << "that's the same name twice\n";
	if (first < second)
		cout << first << " is alphabetically before " << second << '\n';
	if (first > second)
		cout << first << " is alphabetically after " << second << '\n';
}

void fourth_task()
{
	string previous = " "; // previous word; initialized to “not a word”
	string current; // current word
	while (cin >> current) { // read a stream of words
		//cout << "Current: " << current << ", previous: " << previous << "\n";
		if (previous == current) // check if the word is the same as last
			cout << "Repeated word: " << current << '\n';
		previous = current;
	}
	// we can terminate this while loop by pressing CTRL + Z plus Enter in Windows
	// or by pressing CTRL + D in UNIX, that represents EOF signal which will stop cin
}

void fifth_task()
{
	int number_of_words = 0;
	string previous = " "; // not a word
	string current;
	while (cin >> current) {
		++number_of_words; // increase word count
		if (previous == current)
			cout << "word number " << number_of_words
			<< " repeated: " << current << '\n';
		previous = current;
	}
}

void sixth_task()
{
	double d = 0;
	while (cin >> d) { // repeat the statements below
	// as long as we type in numbers
		int i = d; // try to squeeze a double into an int
		// int i1{ d }; type safe initialization
		char c = i; // try to squeeze an int into a char
		int i2 = c; // get the integer value of the character
		cout << "d==" << d // the original double
			<< " i==" << i // converted to int
			<< " i2==" << i2 // int value of char
			<< " char(" << c << ")\n"; // the char
	}
}

void safe_conversion()
{
	char c = 'x';
	int i1 = c;
	int i2 = 'x';
	char c2 = i1;
	cout << c << ' ' << i1 << ' ' << c2 << '\n';
}

void drill()
{
	string first_name;
	string friend_name;
	char friend_sex = 0;
	int age = 0;
	
	cout << "Enter the name of the person you want to write to:\n";
	cin >> first_name;

	cout << "Enter the age of the person you want to write to:\n";
	cin >> age;
	if (age <= 0 || age >= 110)
		simple_error("you're kidding");

	cout << "Enter the name of another friend:\n";
	cin >> friend_name;

	cout << "What is the gender of that friend (m/f):\n";
	cin >> friend_sex;

	/*___________Start of a letter_____________*/

	cout << "\nDear " << first_name << ",\n\n";
	cout << "\thow are you doing lately? I am very happy in this new situation. This has been an amazing experience and I am so glad I have decided to go.\n";
	cout << "Have you seen " << friend_name << " lately? ";
	if(friend_sex == 'm')
		cout << "If you see " << friend_name << " please ask him to call me.\n";
	else if(friend_sex == 'f')
		cout << "If you see " << friend_name << " please ask her to call me.\n";
	cout << "I hear you just had a birthday and you are " << age << " years old.\n";
	if (age < 12)
		cout << "Next year you will be " << age + 1;
	if (age == 17)
		cout << "Next year you will be able to vote.";
	if (age > 70)
		cout << "I hope you are enjoying retirement.";

	cout << "\nYours sincerely,\n\nDean.";
}

void exercise_1()
{
	const double conversion_m_to_km = 1.609;
	double distance = 0;
	cout << "Enter the distance in miles: ";
	cin >> distance;
	cout << "The distance expressed in kilometers: " << distance * conversion_m_to_km << "\n";
}

void exercise_2()
{
	int val1{0}, val2{0};
	cout << "Enter two integer values: ";
	cin >> val1 >> val2;
	if (val1 < val2)
		cout << "Larger number is: " << val2 << "\nSmaller number is: " << val1;
	else if (val2 < val1)
		cout << "Larger number is: " << val1 << "\nSmaller number is: " << val2;
	else
		cout << "Number are equal";
	cout << "\nSum of these two numbers is: " << val1 + val2 << "\nDifference is: " << val1 - val2 << "\nProduct is: " << val1 * val2 << "\nRatio is: " << val1 / val2 << "\n";
}

void exercise_3()
{
	double val1{ 0 }, val2{ 0 };
	cout << "Enter two floating point values: ";
	cin >> val1 >> val2;
	if (val1 < val2)
		cout << "Larger number is: " << val2 << "\nSmaller number is: " << val1;
	else if (val2 < val1)
		cout << "Larger number is: " << val1 << "\nSmaller number is: " << val2;
	else
		cout << "Number are equal";
	cout << "\nSum of these two numbers is: " << val1 + val2 << "\nDifference is: " << val1 - val2 << "\nProduct is: " << val1 * val2 << "\nRatio is: " << val1 / val2 << "\n";
}

void exercise_4()
{
	int val1{ 0 }, val2{ 0 }, val3{0};
	cout << "Enter three integer values: ";
	cin >> val1 >> val2 >> val3;
	if (val1 > val2)
	{
		int temp = val2;
		val2 = val1;
		val1 = temp;
	}
	if(val2 > val3)
	{
		int temp = val3;
		val3 = val2;
		val2 = temp;
	}
	if (val1 > val2)
	{
		int temp = val2;
		val2 = val1;
		val1 = temp;
	}
	
	cout << "Sorted from smallest to biggest: " << val1 << ", " << val2 << ", " << val3 << "\n";
}

void exercise_5()
{
	string val1{ 0 }, val2{ 0 }, val3{ 0 };
	cout << "Enter three string values: ";
	cin >> val1 >> val2 >> val3;
	if (val1 > val2)
	{
		auto temp = val2;
		val2 = val1;
		val1 = temp;
	}
	if (val2 > val3)
	{
		auto temp = val3;
		val3 = val2;
		val2 = temp;
	}
	if (val1 > val2)
	{
		auto temp = val2;
		val2 = val1;
		val1 = temp;
	}

	cout << "Sorted alphabetically: " << val1 << ", " << val2 << ", " << val3 << "\n";
}

void exercise_6()
{
	int val1{ 0 };
	cout << "Enter integer value: ";
	cin >> val1;
	if (val1 % 2 == 0)
		cout << "The value " << val1 << " is an even number";
	else
		cout << "The value " << val1 << " is an uneven number";

}

void exercise_7()
{
	string string_representation;
	cout << "Enter spelled-out number: ";
	cin >> string_representation;
}