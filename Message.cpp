#include "Message.h"

Message::Message(const User& sender, const string& text) : sender(sender), text(text) {}

string Message::getText() const 
{
    return text;
}

string Message::getSender() const 
{
    return sender.getUsername();
}