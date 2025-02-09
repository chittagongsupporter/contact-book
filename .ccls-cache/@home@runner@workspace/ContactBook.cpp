#include "ContactBook.hpp"
#include <iostream>
#include <stdexcept>

void ContactBook::addContact(int contact) { contacts.push_back(contact); }
void ContactBook::removeContact(int contact) {
  for (auto it = contacts.begin(); it != contacts.end(); ++it) {
    if (*it == contact) {
      contacts.erase(it);
      return;
    }
  }
}

void ContactBook::viewContacts() {
  for (auto it = contacts.begin(); it != contacts.end(); ++it) {
    std::cout << *it << std::endl;
  }
}