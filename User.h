#pragma once
#include <string>

using namespace std;

class User 
{

private:
    string username;
public:
    User();
    User(const string& username);
    string getUsername() const;
};

