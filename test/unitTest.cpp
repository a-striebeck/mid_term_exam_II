#include <TestEvaluator.hpp>
#include <Order.h>
#include <Customer.h>
#include <Article.h>
#include <Item.h>

void testOrderAndCustomer() {
    TestEvaluator te;
    te.title("Order and Customer Tests");

    // Crear cliente de prueba
    Customer testCustomer;
    testCustomer.setID("123");
    testCustomer.setName("Juan");
    testCustomer.setLastName("Perez");

    // Crear artículo de prueba
    Article article("001", "Lipstick", 15.0);
    Item item(article, 2); // Cantidad: 2

    // Crear orden y agregar ítem
    Order order(testCustomer);
    order.addItem(item);

    // Pruebas
    te.evaluate("Customer ID is '123'", testCustomer.getID() == "123");
    te.evaluate("Customer Name is 'Juan'", testCustomer.getName() == "Juan");
    te.evaluate("Order total price is $30", order.getTotalPrice() == 30.0);
    
    // Resumen de la prueba
    te.summary();
}

int main() {
    testOrderAndCustomer();
    return 0;
}