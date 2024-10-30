#include <ConsoleOrderManager.h>
#include <iostream>


void ConsoleOrderManager::addItemToOrder(Order& tOrder, const std::vector<Article>& articles) {
    std::string articleID;
    Item item(Article("", "", 0.0), 0);
    std::cout << "Ingrese ID del articulo: ";
    std::cin >> articleID;

    Article foundArticle("", "", 0.0); 
    if (findArticleByID(articleID, articles, foundArticle)) {
        item.setArticle(foundArticle);
    } else {
        std::cout << "Artículo no encontrado." << std::endl;
        return; 
    }

    int quantity;
    std::cout << "Ingrese cantidad: ";
    std::cin >> quantity;
    item.setQuantity(quantity);
    tOrder.addItem(item);
}

bool ConsoleOrderManager::findArticleByID(const std::string& articleID, const std::vector<Article>& articles, Article& foundArticle) {
    for (const auto& article : articles) {
        if (articleID == article.getID()) {
            foundArticle = article;
            return true;
        }
    }
    return false;
}

Order ConsoleOrderManager::createNewOrder(const std::string& ID, const Provider& tProvider, const Employee& tEmployee, const std::vector<Article>& articles) {
    bool newItem = true;
    Order tOrder(tProvider, tEmployee);

    do {
        addItemToOrder(tOrder, articles);
        std::cout << "Ingrese 1 para ingresar otro item, o 0 para completar la orden: ";
        std::cin >> newItem;
    } while (newItem);
    
    return tOrder;
}

void ConsoleOrderManager::showOrderInfo(const Order& tOrder) {
    std::cout << "Order ID: " << tOrder.getID() << std::endl;
    Provider tProvider = tOrder.getProvider();
    std::cout << "Proveedor: " << tProvider.getName() << " " << tProvider.getLastName() << std::endl;

    for (const auto& item : tOrder.getItems()) {
        Article tArticle = item.getArticle();
        std::cout   << "  Item: " << tArticle.getName() << std::endl;
        std::cout   << ", Unit Price: $" << tArticle.getPrice() << std::endl;
        std::cout   << ", Quantity: " << item.getQuantity() << std::endl;
        std::cout   << ", Total: $" << item.getPrice() << std::endl;
    }
    std::cout << "Total Price: $" << tOrder.getTotalPrice() << std::endl;     
}
