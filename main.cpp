#include <iostream>
#include <vector>

using namespace std;

/*
This array is used to store all the contacts.
*/
vector<vector<string>> contacts;

/*
Show all contacts. This function uses a for loop starting from 0 to the size of data.
It then prints each contact stored in the data.
*/
void show_all_contacts()
{
    cout << "All contacts:" << endl;
    for (int i = 0; i < contacts.size(); i++)
        cout << i + 1 << ". " << contacts[i][0] << " : " << contacts[i][1] << endl;
}

/*
Save contact. This function takes necessary details from user and
then adds the contact to the data.
*/
void save_contact()
{
    string name, phone;
    cout << "Enter details to save:" << endl;
    cout << "name: ";
    cin >> name;
    cout << "phone: ";
    cin >> phone;
    vector<string> data = {name, phone};
    contacts.push_back(data);
    cout << "Contact saved successfully." << endl;
}

/*
Edit a contact. This function takes the index of contact that user wants
to edit. Then it takes contact details and updates the contact at given index.
*/
void edit_contact() {
    int index;
    cout << "Enter serial number of contact to delete" << endl;
    cout << "Serial Number: ";
    cin >> index;
    --index;

    cout << endl;
    string name, phone;
    cout << "Enter details to save:" << endl;
    cout << "name: ";
    cin >> name;
    cout << "phone: ";
    cin >> phone;

    vector<string> data = {name, phone};
    contacts[index] = data;
    cout << "Successfully changed contact." << endl;
}

/*
Delete a contact. This function takes index of the contact that user wants
to delete. And then deletes it from the data.
*/
void delete_contact() {
    int index;
    cout << "Enter serial number of contact to delete" << endl;
    cout << "Serial Number: ";
    cin >> index;
    --index;
    contacts.erase(contacts.begin() + index);
    cout << "Successfully delete contact." << endl;
}

/*
Show welcome message to the user
*/
void greet()
{
    cout << "Welcome to Address Book" << endl;
    cout << "Manage all your contacts at one place" << endl;
    cout << endl;
}

void print_menu()
{
    cout << "Main Menu" << endl;
    cout << "\t [1] Create a new contact" << endl;
    cout << "\t [2] List all contacts" << endl;
    cout << "\t [3] Edit a contact" << endl;
    cout << "\t [4] Delete a contact" << endl;
    cout << "\t [0] Exit" << endl;
    cout << endl;
}

int main()
{
    greet();

    while(true)
    {
        print_menu();

        int choice;
        cout << "Enter your choice: ";
        cin >> choice;
        cout << endl;

        if (choice == 0)
        {
            cout << "Thanks for using Address Book" << endl;
            break;
        }
        else if (choice == 1)
            save_contact();
        else if (choice == 2)
            show_all_contacts();
        else if (choice == 3)
            edit_contact();
        else if (choice == 4)
            delete_contact();

        int option;
        cout << endl << "\t [1] Main Menu" << endl;
        cout << "\t [0] Exit" << endl;
        cout << endl << "Enter your choice: ";
        cin >> option;
        cout << endl;

        if (option == 1)
            continue;
        else
            break;
    }

    return 0;
}
