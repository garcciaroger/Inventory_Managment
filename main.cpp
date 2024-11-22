#include "Inventory.h"
#include <iostream>

int main() {
    Inventory new_inventory; // Manage inventory items
    int user_choice;

    do {
        std::cout << "\n   Inventory Management System   " << std::endl;
        std::cout << "--------------------------------" << std::endl;
        std::cout << "1. Add Inventory" << std::endl;
        std::cout << "2. Delete Inventory" << std::endl;
        std::cout << "3. View Current Inventory" << std::endl;
        std::cout << "4. Get Inventory Report" << std::endl;
        std::cout << "5. Exit" << std::endl;

        // Prompt user for input
        std::cout << "Enter Option: ";
        std::cin >> user_choice;

        // Check for invalid input (non-integer values)
        if (std::cin.fail()) {
            std::cin.clear(); // Clear error state
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore invalid input
            std::cout << "Invalid input. Please enter a number between 1 and 5.\n";
            user_choice = 0; // Reset to force loop
            continue;
        }

        // Validate range of input
        while (user_choice < 1 || user_choice > 5) {
            std::cout << "Enter a valid number (1-5): ";
            std::cin >> user_choice;

            if (std::cin.fail()) {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Invalid input. Please enter a number between 1 and 5.\n";
                user_choice = 0;
            }
        }

        // Handle menu options
        switch (user_choice) {
        case 1: {
            new_inventory.add_item();
            break;
        }
        case 2: {
            std::string sku;
            std::cout << "Enter SKU to delete: ";
            std::cin >> sku;
            new_inventory.delete_item(sku);
            break;
        }
        case 3: {
            new_inventory.display_inventory();
            break;
        }
        case 4: {
            new_inventory.get_inventory_report();
            break;
        }
        case 5: {
            // Exit message moved out of loop
            break;
        }
        default:
            std::cout << "Invalid option. Please try again.\n";
        }
    } while (user_choice != 5);

    std::cout << "\nExiting... Goodbye!" << std::endl;

    return 0;
}