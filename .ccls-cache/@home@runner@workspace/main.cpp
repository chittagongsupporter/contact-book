#include "ContactBook.hpp"
#include <iostream>
int main() {
  // create contact objects
  Contact contact1("John Doe", "123-456-7890");
  Contact contact2("Jane Smith", "987-545-5343");

  // create contact book object
  ContactBook contactBook1;

  // add contacts to contact book
  contactBook1.addContact(contact1);
  contactBook1.addContact(contact2);

  contactBook1.removeContact(contact2); // remove

  contactBook1.viewContacts(); // view all contacts

  return 0;
}