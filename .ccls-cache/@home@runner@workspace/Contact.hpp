#ifndef Contact_H
#define Contact_H
#include <iostream>
class Contact {
public:
  // Data members
  std::string name;
  std::string phoneNumber;

  // Default constructor delegates to paramertized constructor
  Contact();

  // Paramertized constructor
  Contact(std::string name, std::string phoneNumber);

  // Setters
  void setName(std::string name);
  void setPhoneNumber(std::string phoneNumber);

  // Getters
  std::string getName() const;
  std::string getPhoneNumber() const;
};

#endif