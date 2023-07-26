#include <iostream>
#include "Linkedlist.h"
#include "Users.h"
using namespace std;
int main()
{


    Users user;
    string x;
    int choice;
    string id;
    string password;
    int your_choice;
    string username;
    while (true)
    {

        cout << "Please choose your option:(1/User - 2/Admin - 3/Exit)" << endl;
        cout << "Enter your option" << endl;
        int option;
        cin >> option;
        switch (option)
        {

        case 1:
        {

            do {
                cout << "Please enter your choice: (1/SignUp - 2/Display/Edit/Delete - 3/delete - 4/View - 5/Addclass - 6/Edit class - 7/Delete Class - 8/Assign)" << endl;
                cin >> choice;
                switch (choice)
                {
                case 1:
                {
                    user.SignUp();

                    break;
                }
                case 2: {
                    cout << "Enter your id \n";
                    cin >> id;
                    cout << "Enter your password \n";
                    cin >> password;
                    string user_id = user.Login(id, password);

                    cout << "Enter your choice: (1/Display - 2/Edit- 3/Delete)" << endl;
                    cin >> your_choice;
                    switch (your_choice)
                    {
                    case 1:
                    {
                        user.DisplayInfo(user_id);
                        break;
                    }
                    case 2:
                    {

                        break;
                    }
                    case 3:
                    {
                        user.Delete_user_record(user_id);

                        break;

                    }

                    }
                    break;

                }
               
                }
                cout << "Do you want to continue ?" << endl;
                cin >> x;

            } while (x == "y");

            break;
        }

        case 2:
        {

            do {

                cout << "Please enter your choice: (1/Add - 2/Edit - 3/Delete - 4/View - 5/Add in class - 6/Delete_from_class)" << endl;
                cin >> choice;
                switch (choice)
                {

                case 1:
                {
                    cout << "enter your username \n";
                    cin >> username;
                    cout << "enter your password \n";
                    cin >> password;
                    user.Login_Admin(username,password);
                    break;
                }

                case 2: {

                    break;
                }
                case 3: {

                    break;
                }
                case 4: {
                    int your_choice;
                    cout << "Enter your choice: (1/View in class - 2/View membership - 3/View all)" << endl;
                    cin >> your_choice;
                    switch (your_choice) {
                    case 1: {

                        break;
                    }
                    case 2: {

                        break;
                    }
                    case 3: {

                        break;

                    }
                    }
                    break;

                }
                case 5: {


                    break;

                }
                case 6: {

                    break;

                }

                }
                cout << "Do you want to continue ?" << endl;
                cin >> x;

            } while (x == "y");
            break;
        }
        case 3:
        {
            exit(0);

            break;


        }
        }

    }







    return 0;
}