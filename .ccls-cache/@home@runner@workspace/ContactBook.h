#ifndef ContactBook_H
#define ContactBook_H

class ContactBook {
public:
  ContactBook();
  ~ContactBook();
  void addContact(const std::string &name, const std::string &phone);
  void removeContact(const std::string &name);
  void displayContacts() const;

private:
  struct Contact {
    std::string name;
    std::string phone;
  };
  Contact *contacts;
  int numContacts;
  int capacity;
  void resize();
};

#endif