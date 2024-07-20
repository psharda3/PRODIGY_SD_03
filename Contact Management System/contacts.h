#ifndef CONTACTS_H
#define CONTACTS_H

#include <string>
#include <vector>

struct Contact {
    std::string name;
    std::string phoneNumber;
    std::string email;
};

void addContact(std::vector<Contact>& contacts);
void viewContacts(const std::vector<Contact>& contacts);
void deleteContact(std::vector<Contact>& contacts);
void editContact(std::vector<Contact>& contacts);

#endif 