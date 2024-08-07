#include "Chat.h"
#include <iostream>

void Chat::addMessage(const Message& message) 
{
    messages.push_back(message);
}

void Chat::displayChatHistory() const 
{
    for (size_t i = 0; i < messages.size(); ++i) 
    {
        cout << i << ": " << messages[i].getSender() << ": " << messages[i].getText() << endl;
    }
}

bool Chat::removeMessage(int index) 
{
    if (index >= 0 && index < messages.size()) 
    {
        messages.erase(messages.begin() + index);
        return true;
    }
    return false;
}

bool Chat::editMessage(int index, const string& newText) 
{
    if (index >= 0 && index < messages.size()) 
    {
        Message& message = messages[index];
        // Create a new Message with the same sender but new text
        messages[index] = Message(User(message.getSender()), newText);
        return true;
    }
    return false;
}
