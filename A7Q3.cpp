#include <iostream>
#include <fstream>
using namespace std;

int getInput(string s, string first_name, string last_name, string Terminate, int age);
int printinput(string s, string first_name, string last_name, int age);

int getInput(string s, string first_name, string last_name, string Terminate, int age)
{
	ofstream outfile;
	outfile.open("s.txt");

	while (Terminate != "quit")
	{
		if (Terminate != "quit")
		{
			cout << "Enter first name : "; cin >> first_name;
			outfile << " " << first_name;
			cout << "Enter last name : "; cin >> last_name;
			outfile << " " << last_name;
			cout << "Enter age : "; cin >> age;
			outfile << " " << age << endl;
			cout << "Type quit when done, input any letter to continue :"; cin >> Terminate;
		}

		if (Terminate == "quit")
		{
			cout << endl;
			outfile.close();
		}
	}
	return 0;
}
	int printinput(string s, string first_name, string last_name, int age)
	{
	
		ifstream infile("s.txt");
		while (infile >> first_name >> last_name >> age)
		{
			cout << "Your inputed First name is :" << first_name << " ," << "Your inputed last name is :" << last_name << " ," << "Your inputed age is :" << age << " ," << endl;
		}

		return 0;
	}

	int main()
	{
		
		int age{};
		string firstName, lastName;
		string terminate, s = "s.txt";

		getInput(s, firstName, lastName,terminate, age);
		printinput(s, firstName, lastName, age);

		return 0;
		
	}