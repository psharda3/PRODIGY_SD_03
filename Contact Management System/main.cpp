#include "contacts.h"
#include <iostream>
#include <vector>

int main() {
    std::vector<Contact> contacts;
    int value;
    while (true) {
        std::cout << "Welcome to your Phone Book!!" << std::endl;
        std::cout << "Press 1: To view the existing contacts." << std::endl;
        std::cout << "Press 2: To edit the contact list." << std::endl;
        std::cout << "Press 3: To delete the existing contacts." << std::endl;
        std::cout << "Press 4: To add contacts." << std::endl;
        std::cout << "Press 5: To exit." << std::endl;
        std::cin >> value;
        std::cin.ignore(); 

        switch (value) {
            case 1:
                viewContacts(contacts);
                break;
            case 2:
                editContact(contacts);
                break;
            case 3:
                deleteContact(contacts);
                break;
            case 4:
                addContact(contacts);
                break;
            case 5:
                std::cout << "Exiting the program.\n";
                return 0;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    }
}
