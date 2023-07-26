#pragma once
#include <string>
using namespace std;
class Users
{
public:
	string full_name;
	string id;
	string password;
	string gender;
	int age;
	string country;
	string governorate;
	string vaccinated;
	string num_of_dose;
public:
	Users();
	Users(string user_name, string user_id, string user_pass, string user_gender, int user_age, string user_country, string user_govern, string user_vaccinted, string num_of_dose);
	Users(string user_id, string user_pass);
	void SignUp(); // add new user  
	string Login(string user_id, string user_pass);
	void DisplayInfo(string user_id);
	void UpdateInfo();
    void Delete_user_record(string user_id); //delete record 
	string Login_Admin(string user_name,string user_pass);//function for sign in Admin

};