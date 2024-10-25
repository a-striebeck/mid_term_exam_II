#include <Customer.h>
#include <OrderManager.h>

class CustomerManager
{
private:
    /* data */
public:
    CustomerManager();
    ~CustomerManager();
    static void showCustomersOrders(std::string customerID, std::vector<Order> orders);
    static Customer createNewCustomer(std::string ID);
};
