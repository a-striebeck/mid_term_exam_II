#include <Order.h>

Order::Order(const Customer& tCustomer) : customer(tCustomer) {}


Order::~Order()
{
}
//Setters

void Order::setTotalPrice(const Item& tItem){
    totalPrice += tItem.getPrice();
}

/*

Although addItem() is not a setter itself, it adds elements to the array, so I placed it between the setter, 
and the getters.

*/
void Order::addItem(const Item& tItem){
    Items.push_back(tItem);
    setTotalPrice(tItem);
}

void Order::setCustomer(Customer tCustomer){
    customer = tCustomer;
}


//Getters
std::string Order::getID() const{
    return ID;
}
double Order::getTotalPrice() const{
    return totalPrice;
}

Item Order::getItem(int pos) const{
    return Items.at(pos);
}

std::vector <Item> Order::getItems() const{
    return Items;
}

Customer Order::getCustomer() const{
    return customer;
}