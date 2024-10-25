#include <OrderManager.h>

OrderManager::OrderManager()
{
}

OrderManager::~OrderManager()
{
}

void OrderManager::addItemToOrder(Order& tOrder, std::vector <Article> articles){
    
}
Order OrderManager::createNewOrder(std::string ID, Customer tCustomer){
    bool flag = true;
    Order tOrder;
    tOrder.setCustomer(tCustomer);
    do
    {
        OrderManager::addItemToOrder(this);
    } while (flag == true);
    
    return tOrder;
}

void OrderManager::showOrderInfo(Order tOrder){

    std::cout << "Order ID: " << tOrder.getID() << std::endl;
    Customer tCustomer = tOrder.getCustomer();

    std::cout << "Cliente: " << tCustomer.getName() << " " << tCustomer.getLastName() << endl;
    // Recorre los items dentro de la orden.
    Article tArticle;
        for (const auto& item : tOrder.getItems()) {
            tArticle = item.getArticle();
            std::cout << "  Item: " << tArticle.getName() << ", Unit Price: $" << tArticle.getPrice() << "Quantity: "<< item.getQuantity() << "Total: $"<< item.getPrice() <<std::endl;
        }
        std::cout << "Total Price: $" << tOrder.getTotalPrice() << std::endl;
        
}
