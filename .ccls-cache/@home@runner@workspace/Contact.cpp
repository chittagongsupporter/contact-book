#include "Contact.hpp"

Contact::Contact() : Contact("", 0) {}
Contact::Contact(std::string name, std::string phoneNumber) {
  this->name = name;
  this->phoneNumber = phoneNumber;
}