#ifndef ORDER_H
#define ORDER_H

#include <vector>
#include <iostream>
#include <Item.h>
#include <Customer.h>

class Order
{
private:
    std::string ID;
    Customer customer;
    std::vector <Item> Items;
    double totalPrice;

    //Private setter, since I don't that this method is available outside the class.
    //It is ment to be called only when a new Item is added to the order.
    void setTotalPrice(const Item& tItem);

public:
    Order(const Customer& tCustomer); 
    ~Order();
    //Setters
    void addItem(const Item& tItem);    
    void setCustomer(Customer tCustomer);
    //Getters
    Customer getCustomer() const;
    std::string getID() const;
    double getTotalPrice() const;
    Item getItem(int pos) const;
    std::vector <Item> getItems() const;
};

#endif // ORDER_H
