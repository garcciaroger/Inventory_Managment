#ifndef INVENTORY_H
#define INVENTORY_H
#include <unordered_map>
#include <string>
#include "Item.h"

class Inventory {
private:
    std::unordered_map<std::string, Item> inventory; // Hash table for storing items

public:
    void add_item();                  // Add a new item
    void delete_item(const std::string& sku); // Delete an item by SKU
    void display_inventory() const;  // Display all items
    void get_inventory_report() const; // Generate and display a report
};

#endif // INVENTORY_H