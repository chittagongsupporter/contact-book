#ifndef ContactBook_H
#define ContactBook_H

#include "Contact.hpp"
#include <iostream>
#include <stdexcept>
#include <vector>

class ContactBook {
public:
  // Data members
  std::vector<Contact> contacts;

  // constructor
  ContactBook();

  // Member functions
  void addContact(Contact &contact);
  void removeContact(Contact &contact);
  void viewContacts() const;
};

#endif