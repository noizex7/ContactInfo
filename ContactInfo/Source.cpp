// This program demonstrates a class with a destructor. 
#include "ContactInfo.h" 
using namespace std;

int main()
{
	// Define a ContactInfo object with the following data:
// Name: Kristen Lee Phone Number: 555-2021
	ContactInfo entry1("Kristen Lee", "555-2021");
	entry1.display();

	ContactInfo entry2(entry1);  //Copy Construction
	entry2.display();

	char* name = nullptr, * phone = nullptr;
	name = new char[15];
	phone = new char[15];
	ContactInfo* entryPtr;
	entryPtr = new ContactInfo;
	cout << "Entre su nombre:";
	cin.getline(name, '\n');
	cin.ignore();
	cout << "Entre su numero de telefono:";
	cin.getline(phone, '\n');
	entryPtr->setName(name);
	entryPtr->setPhoneNumber(phone);
	entryPtr->display();

	delete[] name;
	delete[] phone;
	delete entryPtr;
	system("pause");
	return 0;
}