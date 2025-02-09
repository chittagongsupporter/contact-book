#include "ContactBook.hpp"
#include <iostream>
int main() {
  Contact contact1("John Doe", "123-456-7890");
  Contact contact2("Jane Smith", "987-545-5343");
  ContactBook contactBook1;
  contactBook1.addContact(contact1);
  contactBook1.addContact(contact2);
  contactBook1.removeContact(contact2);
  contactBook1.viewContacts();

  return 0;
}