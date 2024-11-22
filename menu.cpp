#include <iostream>
#include "Item.h"

void main_menu(){
    std::cout << "   Inventory Managment System   " << std::endl;
    std::cout << "--------------------------------" << std::endl;
    std::cout << "1. Add Inventory " << std::endl;
    std::cout << "2. Delete Inventory " << std::endl;
    std::cout << "3. View Current Inventory " << std::endl;
    std::cout << "4. Get Inventory Report " << std::endl;


    int user_choice;
    std::cout << "Enter Option: " << std::endl;
    std::cin >> user_choice;

    while(user_choice < 0 || user_choice > 5){
        std::cout << "Enter a valid number" << std::endl;
        std::cin >> user_choice;
    }

    switch (user_choice){
        case 1:{
            //Add Inventory
            add_inventory();
        }
        case 2:{
            //View Inventory
            view_inventory();
        }
        case 3:{
            //Delete Inventory
        }
        case 4:{
            //Get Inventory Report
        }
    }
}

void add_inventory(){
    //Add Inventory
    char choice;
    do {
        Item item;
        item.add_item(); // Collect item details

        // Store the item in the inventory
        std::string sku = item.get_sku_number();
        inventory[sku] = item;

        // Ask user if they want to add another item
        std::cout << "\nWould you like to add another item? (Y/N): ";
        std::cin >> choice;

    } while (choice == 'Y' || choice == 'y');
}

void view_inventory(){

}

void delete_inventory(){

}

void inventory_report(){

}
