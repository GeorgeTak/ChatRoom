#pragma once
#include <vector>
#include "Message.h"

using namespace std;

class Chat 
{
private:
    vector<Message> messages;
public:
    void addMessage(const Message& message);
    void displayChatHistory() const;
    bool removeMessage(int index);
    bool editMessage(int index, const string& newText);
};

