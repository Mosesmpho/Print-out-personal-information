#include <iostream>
using namespace std;

int main() {
	string name, surname, nationality, idnumber, gender, city;
	int age;

	cout << "Enter your name" << endl;
	cin >> name;
	cout << "Enter your surname" << endl;
	cin >> surname;
	cout << "Enter your gender" << endl;
	cin >> gender;
	cout << "Enter your age" << endl;
	cin >> age;
	cout << "Enter your City" << endl;
	cin >> city;
	cout << "Enter your  nationality" << endl;
	cin >> nationality;
	cout << "Enter your id number" << endl;
	cin >> idnumber;

	cout << "Your  names is :" << name << endl;
	cout << "Your gender is:" << gender << endl;
	cout << "Your age is:" << age << "years old" << endl;
	cout << "Your city is :" << city << endl;
	cout << "Your nationality is :" << nationality << endl;
	cout << "Your id number is :" << idnumber << endl;

	return 0;



}