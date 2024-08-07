#pragma once
#include <unordered_map>
#include "User.h"
#include "Chat.h"

using namespace std;

class Server 
{
private:
    unordered_map<string, User> users;
    Chat chatRoom;
public:
    bool registerUser(const string& username);
    bool sendMessage(const string& username, const string& text);
    void displayChatHistory() const;
    bool removeMessage(int index);
    bool editMessage(int index, const string& newText);
};


