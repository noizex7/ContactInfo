#include "ContactInfo.h"

	void ContactInfo:: initName(int size, char* n)
	{
		name = new char[size];
		strcpy_s(name, size, n);
	}

	void ContactInfo::initPhone(int size, char* p)
	{
		phone = new char[size];
		strcpy_s(phone, size, p);
	}

	ContactInfo::ContactInfo()
	{ // Initialize the name attribute.
		initName(DEFAULT_SIZE, "");

		// Initialize the phone attribute.
		initPhone(DEFAULT_SIZE, "");
	}
	// Constructor
	ContactInfo::ContactInfo(char* n, char* p)
	{ // Initialize the name attribute.
		initName(strlen(n) + 1, n);

		// Initialize the phone attribute.
		initPhone(strlen(p) + 1, p);
	}


	ContactInfo::ContactInfo(ContactInfo& aContactInfo)
	{
		setName(aContactInfo.getName());
		setPhoneNumber(aContactInfo.getPhoneNumber());
	}

	// Destructor
	ContactInfo:: ~ContactInfo()
	{
		delete[] name;
		delete[] phone;
	}

	void ContactInfo::setName(char* aName) {
		initName(strlen(aName) + 1, aName);
	}

	void ContactInfo::setPhoneNumber(char* aPhone) {
		initPhone(strlen(aPhone) + 1, aPhone);
	}

	void ContactInfo::setNamePhoneNumber(char* aName, char* aPhone) {
		initName(strlen(aName) + 1, aName);
		initName(strlen(aPhone) + 1, aPhone);
	}
	char* ContactInfo::getName() const
	{
		return name;
	}

	char* ContactInfo::getPhoneNumber() const
	{
		return phone;
	}

	// Display the object's data.
	void ContactInfo::display() const
	{
		cout << "Name: " << getName() << endl;
		cout << "Phone Number: " << getPhoneNumber() << endl;
	}