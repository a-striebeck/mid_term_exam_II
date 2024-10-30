#ifndef ORDER_H
#define ORDER_H

#include <vector>
#include <iostream>
#include <Item.h>
#include <Employee.h>
#include <Provider.h>

class Order
{
private:
    std::string ID;
    Provider provider;
    Employee employee;
    std::vector <Item> items;
    double totalPrice;

    //Private setter, since I don't that this method is available outside the class.
    //It is ment to be called only when a new Item is added to the order.
    void setTotalPrice(const Item& tItem);

public:
    Order(const Provider& tProvider, const Employee& tEmployee); 
    ~Order();

    //Setters
    void addItem(const Item& tItem);    
    void setProvider(const Provider& tProvider);
    void setEmployee(const Employee& tEmployee);

    //Getters
    Provider getProvider() const;
    Employee getEmploye() const;
    std::string getID() const;
    double getTotalPrice() const;
    std::vector <Item> getItems() const;
};

#endif // ORDER_H
