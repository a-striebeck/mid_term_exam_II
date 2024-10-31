#include <TestEvaluator.hpp>
#include <Order.h>
#include <Provider.h>
#include <Article.h>
#include <Item.h>
#include <Employee.h> 

void testOrderAndProvider() {
    TestEvaluator test;
    test.title("Order Test");

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
    test.evaluate("Provider ID is '123'", testProvider.getID() == "123");
    test.evaluate("Provider Name is 'Juan'", testProvider.getName() == "Juan");
    test.evaluate("Employee ID is '416'", testEmployee.getID() == "416");
    test.evaluate("Employee Name is 'Agustin'", testEmployee.getName() == "Agustin");
    test.evaluate("Order total price is $30", order.getTotalPrice() == 30.0);
    
    // Result
    test.summary();
}

void testEmployee(){
    TestEvaluator test;
    test.title("New Employee Test");

    //Arrange  
    Employee testEmployee;

    //Act
    testEmployee.setID("003");
    testEmployee.setName("Jose");
    testEmployee.setLastName("Luis");

    //Assert   

    test.evaluate("Employee ID is 003", testEmployee.getID() == "003");
    test.evaluate("Employee Name is Jose", testEmployee.getName() == "Jose");
    test.evaluate("Employee Last Name is Luis", testEmployee.getLastName() == "Luis");

    test.summary();
}

int main() {
    testOrderAndProvider();
    testEmployee();
    return 0;
}