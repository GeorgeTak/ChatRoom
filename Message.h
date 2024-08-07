#pragma once
#include <string>
#include "User.h"

using namespace std;

class Message 
{
private:
    User sender;
    string text;
public:
    Message(const User& sender, const string& text);
    string getText() const;
    string getSender() const;
};

