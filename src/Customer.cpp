#include <Customer.h>

Customer::Customer()
{
}

Customer::~Customer()
{
}

// Setters, and addOrder()
    void Customer::addOrder(Order tOrder){
        orders.push_back(tOrder);
    }
    void Customer::setID(std::string tID){
        ID = tID;
    }
    void Customer::setName(std::string tName){
        name = tName;
    }
    void Customer::setLastName(std::string tLastName){
        lastName = tLastName;
    }

//Getters

    std::string Customer::getID() const{
        return ID;
    }
    std::string Customer::getName() const{
        return name;
    }
    std::string Customer::getLastName() const{
        return lastName;
    }
    Order Customer::getOrder(int pos){
        return orders.at(pos);
    }