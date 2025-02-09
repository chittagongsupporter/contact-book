#include "ContactBook.hpp"

ContactBook::ContactBook() {}
void ContactBook::addContact(Contact &contact) { contacts.push_back(contact); }
void ContactBook::removeContact(Contact &contact) {
  for (int i = 0; i < contacts.size(); i++) {
    if (contacts[i].getName() == contact.getName()) {
      contacts.erase(contacts.begin() + i);
    }
  }
}

void ContactBook::viewContacts() const {
  for (int i = 0; i < contacts.size(); i++) {
    std::cout << contacts[i].getName() << " " << contacts[i].getPhoneNumber()
              << std::endl;
  }
}