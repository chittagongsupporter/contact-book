#ifndef Contact_H
#define Contact_H
#include <iostream>
class Contact {
public:
  // data members
  std::string name;
  std::string phoneNumber;
  // default constructor delegates to paramertized constructor
  Contact();
  // paramertized constructor
  Contact(std::string name, std::string phoneNumber);

  // member functions
  void setName(std::string name);
  void setPhoneNumber(std::string phoneNumber);
  std::string getName() const;
  std::string getPhoneNumber() const;
};

#endif