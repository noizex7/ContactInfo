#pragma once
#include <iostream>
using namespace std;
#include <cstring>   // Needed for strlen and strcpy 
const int DEFAULT_SIZE = 51;
class ContactInfo
{
private:
    char* name;   // The contact's name 
    char* phone;  // The contact's phone number 

public:
    void initName(int size, char* n);
    void initPhone(int size, char* p);
    ContactInfo();
    ContactInfo(char* n, char* p);
    ContactInfo(ContactInfo& aContactInfo);
    ~ContactInfo();
    void setName(char* aName);
    void setPhoneNumber(char* aPhone);
    void setNamePhoneNumber(char* aName, char* aPhone);
    char* getName() const;
    char* getPhoneNumber() const;
    void display() const;
};

