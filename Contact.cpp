#include "Contact.hpp"

// Constructors
Contact::Contact() : Contact("", "") {}
Contact::Contact(std::string name, std::string phoneNumber) {
  this->name = name;
  this->phoneNumber = phoneNumber;
}

// Setters
void Contact::setName(std::string name) { this->name = name; }
void Contact::setPhoneNumber(std::string phoneNumber) {
  this->phoneNumber = phoneNumber;
}

// Getters
std::string Contact::getName() const { return this->name; }
std::string Contact::getPhoneNumber() const { return this->phoneNumber; }