#include <Order.h>

Order::Order(const Provider& tProvider, const Employee& tEmployee) : provider(tProvider), employee(tEmployee){}


Order::~Order()
{
}

void Order::addItem(const Item& tItem){
    items.push_back(tItem);
}
//Setters

void Order::setTotalPrice(const Item& tItem){
    totalPrice += tItem.getPrice();
}

void Order::setProvider(const Provider& tProvider){
    provider = tProvider;
}
void Order::setEmployee(const Employee& tEmployee){
    employee = tEmployee;
}

//Getters
std::string Order::getID() const{
    return ID;
}

double Order::getTotalPrice() const {
    double total = 0.0;
    for (const auto& item : items) {
        total += item.getArticle().getPrice() * item.getQuantity();
    }
    return total;
}

Employee Order::getEmploye() const{
    return employee;
}

std::vector <Item> Order::getItems() const{
    return items;
}

Provider Order::getProvider() const{
    return provider;
}