#include "User.h"

User::User(const string& username)
{
    this->username = username;
}

User::User()
{
    username = " ";
}

string User::getUsername() const 
{
    return username;
}