#ifndef CUSTOMER_MANAGER_H
#define CUSTOMER_MANAGER_H

#include <Customer.h>
#include <OrderManager.h>

class CustomerManager
{
private:
    
public:
    CustomerManager();
    ~CustomerManager();
    static void showCustomersOrders(std::string customerID, std::vector<Order> orders);
    static Customer createNewCustomer(std::string ID);
};

#endif // CUSTOMER_MANAGER_H