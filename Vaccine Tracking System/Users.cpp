#include "Users.h"
#include "Linkedlist.cpp"
#include <assert.h>
#include <iostream>

using namespace std;
LinkedList<Users> list;
LinkedList<Users> Waitinglist;
Users user;
string Admin_name1 = "zain11@yahoo.com";
string Admin_pass1 = "123456";
string Admin_name2 = "mohamed22@yahoo.com";
string Admin_pass2 = "147852";
Users::Users(string user_name, string user_id, string user_pass, string user_gender, int user_age, string user_country, string user_govern, string user_vaccinted, string user_num_of_dose)
{
	this->full_name = user_name;
	this->id = user_id;
	this->password = user_pass;
	this->gender = user_gender;
	this->age = user_age;
	this->country = user_country;
	this->governorate = user_govern;
	this->vaccinated = user_vaccinted;
	this->num_of_dose = user_num_of_dose;
}
Users::Users() {

}

Users::Users(string user_id, string user_pass)
{
	this->id = user_id;
	this->password = user_pass;
}
void Users::SignUp()
{

	cout << "Enter your Full name" << endl;
	cin >> full_name;
	cout << "Enter your id" << endl;
	cin >> id;
	for (int i = 0; i < list.Length(); i++)
	{

		Users user = list.At(i);
		if (id == user.id)
		{
			cout << "this id is exisst please enter another id " << endl;
			cin >> id;
		}
		else {
			break;
		}
	}
	cout << "Enter your password" << endl;
	cin >> password;
	cout << "Enter your Gender" << endl;
	cin >> gender;
	cout << "Enter your Age" << endl;
	cin >> age;
	cout << "Enter your Country" << endl;
	cin >> country;
	cout << "Enter your Governorate" << endl;
	cin >> governorate;
	cout << "Enter your Vaccinated" << endl;
	cin >> vaccinated;
	if (vaccinated == "y")
	{
		cout << "do you take one dose or two" << endl;
		cin >> num_of_dose;
	}
	else {
		num_of_dose = "zero";
		Users users(full_name, id, password, gender, age, country, governorate, vaccinated, num_of_dose);
		Waitinglist.Append(users);
	}

	Users u(full_name, id, password, gender, age, country, governorate, vaccinated, num_of_dose);

	list.Append(u);



}
string Users::Login(string user_id, string user_pass)
{
	int temp = 0;
	for (int i = 0; i < list.Length(); i++) {

		Users user = list.At(i);
		if (user_pass == user.password && user_id == user.id)
		{
			cout << "correct" << endl;

			temp = 1;
			break;

		}
		else {

			temp = 0;

		}



	}
	if (temp == 1)
	{
		return user_id;
	}
	else {
		cout << "incorrect \n";
		cout << "Enter your id \n";
		cin >> id;
		cout << "Enter your password \n";
		cin >> password;
		user.Login(id, password);
	}
	return id;
}

void Users::DisplayInfo(string id)
{

	/*cout << "Enter your id \n";
	cin >> id;
	cout << "Enter your password \n";
	cin >> password;
	user.Login(id, password);*/

	for (int i = 0; i < list.Length(); i++)
	{

		Users user = list.At(i);
		if (id == user.id)
		{

			cout << "full name is :" << user.full_name << endl;
			cout << "Id is :" << user.id << endl;
			cout << "Passowrd is : " << user.password << endl;
			cout << "Gender is :" << user.gender << endl;
			cout << "Age is : " << user.age << endl;
			cout << "Country is : " << user.country << endl;
			cout << "Governorate is : " << user.governorate << endl;
			cout << "Vaccinated is : " << user.vaccinated << endl;
			cout << "Num_of_dose is : " << user.num_of_dose << endl;
			break;
		}
	}

}
void Users::Delete_user_record(string user_id) {
	for (int i = 0; i < list.Length(); i++)
	{

		Users user = list.At(i);
		if (id == user.id)
		{
			list.DeleteAt(i);


		}
	}
}
string Users::Login_Admin(string Admin_name, string Admine_pass)
{
	
		if (Admin_name == Admin_name1 && Admine_pass == Admin_pass1) {
			cout << "correct!! \n";
			return Admine_pass;
			//break;
		}
		else if (Admin_name == Admin_name2 && Admine_pass == Admin_pass2)
		{
			cout << "correct!! \n";
			return Admine_pass;
			//break;
		}
		else {
			cout << "incorrect \n";
			cout << "Enter your username \n";
			cin >> Admin_name;
			cout << "Enter your password \n";
			cin >> Admine_pass;
			user.Login_Admin(Admin_name, Admine_pass);


		}

	return Admine_pass;
}
