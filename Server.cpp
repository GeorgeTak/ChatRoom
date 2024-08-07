#include "Server.h"

bool Server::registerUser(const string& username) 
{
    if (users.find(username) != users.end()) 
    {
        return false; // User already exists
    }
    users[username] = User(username);
    return true;
}

bool Server::sendMessage(const string& username, const string& text) 
{
    if (users.find(username) == users.end()) 
    {
        return false; // User does not exist
    }
    chatRoom.addMessage(Message(users[username], text));
    return true;
}

bool Server::removeMessage(int index) 
{
    return chatRoom.removeMessage(index);
}

bool Server::editMessage(int index, const string& newText) 
{
    return chatRoom.editMessage(index, newText);
}

void Server::displayChatHistory() const 
{
    chatRoom.displayChatHistory();
}
