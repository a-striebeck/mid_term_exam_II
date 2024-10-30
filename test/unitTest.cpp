#include <TestEvaluator.hpp>
#include <Order.h>
#include <Provider.h>
#include <Article.h>
#include <Item.h>
#include <Employee.h> 

void testOrderAndProvider() {
    TestEvaluator te;
    te.title("Order and Provider Tests");

    // Arrange
    Provider testProvider;
    Employee testEmployee;

    testProvider.setID("123");
    testProvider.setName("Juan");
    testProvider.setLastName("Perez");

    testEmployee.setID("416");
    testEmployee.setName("Agustin");
    testEmployee.setLastName("Cocho");

    Article article("001", "Guantes", 15.0);
    Item item(article, 2); // Cantidad: 2

    // Act
    Order order(testProvider, testEmployee);
    order.addItem(item);

    // Assert
    te.evaluate("Provider ID is '123'", testProvider.getID() == "123");
    te.evaluate("Provider Name is 'Juan'", testProvider.getName() == "Juan");
    te.evaluate("Employee ID is '416'", testEmployee.getID() == "416");
    te.evaluate("Employee Name is 'Agustin'", testEmployee.getName() == "Agustin");
    te.evaluate("Order total price is $30", order.getTotalPrice() == 30.0);
    
    // Result
    te.summary();
}

void testEmployee(){
    TestEvaluator te;
    te.title("New Employee Test");

    //Arrange  
    Employee testEmployee;

    //Act
    testEmployee.setID("003");
    testEmployee.setName("Jose");
    testEmployee.setLastName("Luis");

    //Assert   

    te.evaluate("Employee ID is 003", testEmployee.getID() == "003");
    te.evaluate("Employee Name is Jose", testEmployee.getName() == "Jose");
    te.evaluate("Employee Last Name is Luis", testEmployee.getLastName() == "Luis");

    te.summary();
}

int main() {
    testOrderAndProvider();
    testEmployee();
    return 0;
}