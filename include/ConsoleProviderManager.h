#ifndef CONSOLEPROVIDERMANAGER_H
#define CONSOLEPROVIDERMANAGER_H

#include <Provider.h>
#include <Order.h>
#include <vector>
#include <memory>
#include <iostream>
#include <ConsoleOrderManager.h>

class ConsoleProviderManager
{
public:
    // CRUD
    void createProvider(std::vector<std::shared_ptr<Provider>>& providers);
    void searchProvider(const std::vector<std::shared_ptr<Provider>>& providers) const;
    void updateProvider(std::vector<std::shared_ptr<Provider>>& providers);
    void deleteProvider(std::vector<std::shared_ptr<Provider>>& providers);
    void showProviderOrders(const std::vector<Order>& orders, const std::string& providerID) const;

private:
    std::shared_ptr<Provider> searchProviderByID(const std::vector<std::shared_ptr<Provider>>& providers, const std::string& id) const;
};

#endif // CONSOLEPROVIDERMANAGER_H
