#include "ConsoleProviderManager.h"
#include <algorithm>

void ConsoleProviderManager::createProvider(std::vector<std::shared_ptr<Provider>>& providers) {
    std::string id, name, lastName;
    std::cout << "Introduce el ID del proveedor: ";
    std::cin >> id;
    std::cout << "Introduce el nombre del proveedor: ";
    std::cin >> name;
    std::cout << "Introduce el apellido del proveedor: ";
    std::cin >> lastName;

    
    auto newProvider = std::make_shared<Provider>();
    newProvider->setID(id);
    newProvider->setName(name);
    newProvider->setLastName(lastName);
    

    providers.push_back(newProvider);
    std::cout << "Proveedor creado exitosamente.\n";
}


std::shared_ptr<Provider> ConsoleProviderManager::searchProviderByID(const std::vector<std::shared_ptr<Provider>>& providers, const std::string& id) const {
    for (const auto& provider : providers) {
        if (provider->getID() == id) {
            return provider;
        }
    }
    return nullptr; 
}

void ConsoleProviderManager::searchProvider(const std::vector<std::shared_ptr<Provider>>& providers) const {
    std::string id;
    std::cout << "Introduce el ID del proveedor a buscar: ";
    std::cin >> id;

    auto provider = searchProviderByID(providers, id);
    if (provider) {
        std::cout << "Proveedor encontrado:\n";
        std::cout << "ID: " << provider->getID() << "\n";
        std::cout << "Nombre: " << provider->getName() << "\n";
        std::cout << "Apellido: " << provider->getLastName() << "\n";
    } else {
        std::cout << "Proveedor no encontrado.\n";
    }
}

void ConsoleProviderManager::updateProvider(std::vector<std::shared_ptr<Provider>>& providers) {
    std::string id;
    std::cout << "Introduce el ID del proveedor a modificar: ";
    std::cin >> id;

    auto provider = searchProviderByID(providers, id);
    if (provider) {
        std::string newID, newName, newLastName;
        std::cout << "Introduce el nuevo ID: ";
        std::cin >> newID;
        std::cout << "Introduce el nuevo nombre: ";
        std::cin >> newName;
        std::cout << "Introduce el nuevo apellido: ";
        std::cin >> newLastName;

        provider->setID(newID);
        provider->setName(newName);
        provider->setLastName(newLastName);
        std::cout << "Proveedor actualizado exitosamente.\n";
    } else {
        std::cout << "Proveedor no encontrado.\n";
    }
}

void ConsoleProviderManager::deleteProvider(std::vector<std::shared_ptr<Provider>>& providers) {
    std::string id;
    std::cout << "Introduce el ID del proveedor a eliminar: ";
    std::cin >> id;

    auto provider = searchProviderByID(providers, id);
    if (provider) {
        providers.erase(std::remove_if(providers.begin(), providers.end(),
            [&id](const std::shared_ptr<Provider>& p) { return p->getID() == id; }), providers.end());
        std::cout << "Proveedor eliminado exitosamente.\n";
    } else {
        std::cout << "Proveedor no encontrado.\n";
    }
}

void ConsoleProviderManager::showProviderOrders(const std::vector<Order>& orders, const std::string& providerID) const {
    std::cout << "Órdenes para el proveedor ID " << providerID << ":\n";
    bool found = false;
    for (const auto& order : orders) {
        if (order.getProvider().getID() == providerID) {
            ConsoleOrderManager::showOrderInfo(order);
            found = true;
        }
    }
    if (!found) {
        std::cout << "No hay órdenes asociadas a este proveedor.\n";
    }
}
