// ReSharper disable once CppUnusedIncludeDirective
#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

void first_task();
void second_task();
void third_task();
void fourth_task();
void fifth_task();
void sixth_task();

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
		char c = i; // try to squeeze an int into a char
		int i2 = c; // get the integer value of the character
		cout << "d==" << d // the original double
			<< " i==" << i // converted to int
			<< " i2==" << i2 // int value of char
			<< " char(" << c << ")\n"; // the char
	}
}

