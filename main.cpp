#include <iostream>
#include <vector>
#include <memory>
#include "Article.h"
#include "Employee.h"
#include "Provider.h"
#include "Item.h"
#include "Order.h"
#include "ConsoleOrderManager.h"
#include "ConsoleProviderManager.h"

int main() {
    // Crear el vector de artículos con productos de goma
    std::vector<Article> articles = {
        Article("A001", "Goma Redonda", 1.50),
        Article("A002", "Goma Cuadrada", 2.00),
        Article("A003", "Goma Triangular", 1.75),
        Article("A004", "Goma Industrial", 3.20),
        Article("A005", "Goma de Alta Resistencia", 4.50),
        Article("A006", "Goma Ligera", 1.30),
        Article("A007", "Goma de Alta Fricción", 2.80),
        Article("A008", "Goma Espuma", 1.20),
        Article("A009", "Goma Adhesiva", 3.00),
        Article("A010", "Goma Elástica", 1.80)
    };

    // Crear el vector de proveedores
    std::vector<std::shared_ptr<Provider>> providers;

    // Crear manejadores
    ConsoleOrderManager orderManager;
    ConsoleProviderManager providerManager;

    // Crear un proveedor y agregarlo al vector de proveedores
    providerManager.createProvider(providers);

    // Crear empleado (solo uno para las órdenes de ejemplo)
    Employee employee;
    employee.setID("E001");
    employee.setName("Agustín");
    employee.setLastName("Striebeck");

    // Vector para almacenar las órdenes
    std::vector<Order> orders;

    // Crear dos órdenes y asociarlas al último proveedor agregado
    for (int i = 0; i < 2; ++i) {
        std::cout << "\nCreando Orden " << i + 1 << ":\n";
        if (!providers.empty()) {
            Order newOrder = orderManager.createNewOrder("O" + std::to_string(i + 1), *providers.back(), employee, articles);
            orders.push_back(newOrder); // Agregar la orden al vector de órdenes
        } else {
            std::cout << "No hay proveedores disponibles para asociar la orden.\n";
        }
    }

    // Mostrar órdenes del proveedor elegido
    std::string providerID;
    std::cout << "\nIngrese el ID del proveedor para mostrar sus órdenes: ";
    std::cin >> providerID;
    providerManager.showProviderOrders(orders, providerID);

    return 0;
}
