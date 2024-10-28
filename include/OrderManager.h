#ifndef ORDER_MANAGER_H
#define ORDER_MANAGER_H

#include <Order.h>
#include <Customer.h>
#include <vector>


class OrderManager {
private:
    static void addItemToOrder(Order& tOrder, const std::vector<Article>& articles);
    static bool findArticleByID(const std::string& articleID, const std::vector<Article>& articles, Article& foundArticle);
public:
    OrderManager();
    ~OrderManager();

    static Order createNewOrder(const std::string& ID, const Customer& tCustomer, const std::vector<Article>& articles);
    static void showOrderInfo(const Order& tOrder);
};

#endif // ORDER_MANAGER_H

