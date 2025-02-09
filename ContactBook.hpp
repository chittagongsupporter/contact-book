#ifndef ContactBook_H
#define ContactBook_H

#include <vector>

class ContactBook {
public:
  // Data members
  std::vector<int> contacts;

  // constructor
  ContactBook();

  // Member functions
  void addContact(int contact);
  void removeContact(int contact);
  void viewContacts();
};

#endif