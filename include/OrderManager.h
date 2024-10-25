#include <Order.h>
#include <Customer.h>
class OrderManager
{
private:
    static void addItemToOrder();
public:
    OrderManager();
    ~OrderManager();

    static Order createNewOrder(std::string ID, Customer tCustomer);
    static void showOrderInfo(Order tOrder);

};

