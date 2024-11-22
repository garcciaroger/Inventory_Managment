#ifndef ITEM_H
#define ITEM_H

#include <string>
#include <iostream>

class Item {
private:
    // Attributes for each item
    std::string sku;
    std::string name;
    std::string category;
    std::string manufacturer;
    std::string date_added;
    double price;
    int quantity;

public:
    // Default Constructor
    Item() = default;

    // Parameterized Constructor
    Item(const std::string& sku, const std::string& name, const std::string& category,
         const std::string& manufacturer, const std::string& date_added, double price, int quantity)
        : sku(sku), name(name), category(category), manufacturer(manufacturer),
          date_added(date_added), price(price), quantity(quantity) {}

    // Getters
    std::string get_sku() const { return sku; }
    std::string get_name() const { return name; }
    std::string get_category() const { return category; }
    std::string get_manufacturer() const { return manufacturer; }
    std::string get_date_added() const { return date_added; }
    double get_price() const { return price; }
    int get_quantity() const { return quantity; }

    // Display item details
    void display_item() const {
        std::cout << "Name: " << name << "\n"
                  << "Category: " << category << "\n"
                  << "Manufacturer: " << manufacturer << "\n"
                  << "Date Added: " << date_added << "\n"
                  << "Price: $" << price << "\n"
                  << "Quantity: " << quantity << std::endl;
    }

    // Destructor (default)
    ~Item() = default;
};

#endif // ITEM_H