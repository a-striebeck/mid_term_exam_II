#include <CustomerManager.h>

CustomerManager::CustomerManager()
{
}


CustomerManager::~CustomerManager()
{
}

void CustomerManager::showCustomersOrders(std::string customerID, std::vector<Order> orders) {
    for (auto &&order : orders){   
        Customer tCustomer = order.getCustomer();
        if (customerID == tCustomer.getID()){
            OrderManager::showOrderInfo(order);
        }   
    }
}

Customer CustomerManager::createNewCustomer(std::string ID){
    
    Customer tCustomer;
    tCustomer.setID(ID);
    
    std::string name;
    std::cout << "Ingrese nombre: ";
    std::cin >> name;
    tCustomer.setName(name);

    std::string lastName;
    std::cout << "\n Ingrese apellido: ";
    std::cin >> lastName;
    tCustomer.setLastName(lastName);
    
    return tCustomer;
}
