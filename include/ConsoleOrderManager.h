#ifndef CONSOLE_ORDER_MANAGER_H
#define CONSOLE_ORDER_MANAGER_H

#include <Order.h>
#include <Provider.h>
#include <vector>


class ConsoleOrderManager {
private:
    static void addItemToOrder(Order& tOrder, const std::vector<Article>& articles);
    static bool findArticleByID(const std::string& articleID, const std::vector<Article>& articles, Article& foundArticle);
public:
    ConsoleOrderManager();
    ~ConsoleOrderManager();

    static Order createNewOrder(const std::string& ID, const Provider& tProvider, const Employee& tEmployee, const std::vector<Article>& articles);
    static void showOrderInfo(const Order& tOrder);
};

#endif // ORDER_MANAGER_H

