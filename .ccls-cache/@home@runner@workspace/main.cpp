#include "ContactBook.hpp"
#include <iostream>
int main() {
  ContactBook contactBook1;
  contactBook1.addContact(1);
  contactBook1.addContact(2);
  contactBook1.removeContact(2);
  contactBook1.viewContacts();

  return 0;
}