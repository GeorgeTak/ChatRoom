// ChatRoom.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include <string>
#include "Server.h"

using namespace std;

void displayMenu() 
{
    cout << "\nChat Application Menu:" << endl;
    cout << "1. Register User" << endl;
    cout << "2. Send Message" << endl;
    cout << "3. Display Chat History" << endl;
    cout << "4. Remove Message" << endl;
    cout << "5. Edit Message" << endl;
    cout << "6. Exit" << endl;
}

int main() 
{
    Server server;
    int choice;
    string username, message;
    int index;

    while (true) 
    {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // Ignore newline character after integer input

        switch (choice) {
        case 1:
            cout << "Enter username to register: ";
            getline(cin, username);
            if (server.registerUser(username)) 
            {
                cout << "User " << username << " registered successfully." << endl;
            }
            else 
            {
                cout << "User " << username << " already exists." << endl;
            }
            break;

        case 2:
            cout << "Enter your username: ";
            getline(cin, username);
            cout << "Enter your message: ";
            getline(cin, message);
            if (server.sendMessage(username, message)) 
            {
                cout << "Message sent successfully." << endl;
            }
            else 
            {
                cout << "Failed to send message. Ensure the user is registered." << endl;
            }
            break;

        case 3:
            cout << "\nChat History:" << endl;
            server.displayChatHistory();
            break;

        case 4:
            cout << "Enter the index of the message to remove: ";
            cin >> index;
            cin.ignore(); // Ignore newline character
            if (server.removeMessage(index)) 
            {
                cout << "Message removed successfully." << endl;
            }
            else 
            {
                cout << "Failed to remove message. Invalid index." << endl;
            }
            break;

        case 5:
            cout << "Enter the index of the message to edit: ";
            cin >> index;
            cin.ignore(); // Ignore newline character
            cout << "Enter the new message text: ";
            getline(cin, message);
            if (server.editMessage(index, message)) 
            {
                cout << "Message edited successfully." << endl;
            }
            else 
            {
                cout << "Failed to edit message. Invalid index." << endl;
            }
            break;

        case 6:
            cout << "Exiting the application." << endl;
            return 0;

        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
