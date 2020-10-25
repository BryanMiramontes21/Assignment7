#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	string first_name, last_name, Terminate;
	int age;
	
	ofstream outfile;
	outfile.open("data-assignment-7.txt");
	
	while (Terminate != "quit")
	{
		if (Terminate != "quit" )
		{
			cout << "Enter first name : "; cin >> first_name;
			outfile << " " << first_name;
			cout << "Enter last name : "; cin >> last_name;
			outfile << " " << last_name;
			cout << "Enter age : "; cin >> age;
			outfile << " " << age << endl;
			cout << "Type quit when done, input any letter to continue :"; cin >> Terminate;
		}
		
		if(Terminate == "quit")
		{
			cout << endl;
			outfile.close();
		}
	}
	
	
	ifstream infile("data-assignment-7.txt");
	while (infile >> first_name >> last_name >> age)
	{
		cout << "Your inputed First name is :" << first_name << " ," << "Your inputed last name is :" << last_name << " ,"<< "Your inputed age is :" << age << " ," << endl;
	}

	return 0;
}
