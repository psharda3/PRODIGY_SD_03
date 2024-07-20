#include "contacts.h"
#include <iostream>
#include <algorithm>


void addContact(std::vector<Contact>& contacts) {
    Contact newContact;
    std::cout << "Enter Name: ";
    std::getline(std::cin, newContact.name);
    std::cout << "Enter Phone Number: ";
    std::getline(std::cin, newContact.phoneNumber);
    std::cout << "Enter Email ID: ";
    std::getline(std::cin, newContact.email);
    contacts.push_back(newContact);
    std::cout << "Contact added successfully!!!" << std::endl;
}


void viewContacts(const std::vector<Contact>& contacts) {
    for (size_t i = 0; i < contacts.size(); ++i) {
        std::cout << i + 1 << ". Name: " << contacts[i].name << "| Phone Number: " << contacts[i].phoneNumber << "| Email ID: " << contacts[i].email << std::endl;
    }
}


void deleteContact(std::vector<Contact>& contacts) {
    std::string nameToDelete;
    std::cout << "Enter the name of the person whose contact you want to remove: ";
    std::getline(std::cin, nameToDelete);

    for (auto it = contacts.begin(); it != contacts.end(); ++it) {
        if (it->name == nameToDelete) {
            contacts.erase(it);
            std::cout << "Contact deleted successfully.\n";
            return;
        }
    }
    std::cout << "Contact not found.\n";
}



void editContact(std::vector<Contact>& contacts) {
    if (contacts.empty()) {
        std::cout << "No contacts available to edit.\n";
        return;
    }

    std::string nameToEdit;
    std::cout << "Enter the name of the contact to edit: ";
    std::getline(std::cin, nameToEdit);

    for (auto& contact : contacts) {
        if (contact.name == nameToEdit) {
            std::cout << "Editing contact " << contact.name << "\n";

            std::string newName, newPhoneNumber, newEmail;

            std::cout << "Enter new name : ";
            std::getline(std::cin, newName);
            if (!newName.empty()) {
                contact.name = newName;
            }

            std::cout << "Enter new phone number : ";
            std::getline(std::cin, newPhoneNumber);
            if (!newPhoneNumber.empty()) {
                contact.phoneNumber = newPhoneNumber;
            }

            std::cout << "Enter new email : ";
            std::getline(std::cin, newEmail);
            if (!newEmail.empty()) {
                contact.email = newEmail;
            }

            std::cout << "Contact updated successfully.\n";
            return;
        }
    }

    std::cout << "Contact not found.\n";
}
