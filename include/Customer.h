#include <vector>
#include <iostream>
#include <Order.h>

class Customer
{
private:

    std::string ID;
    std::string name;
    std::string lastName;
    std::vector <Order> orders;

public:
    Customer();
    ~Customer();

    // Setters, and addOrder()
    void addOrder(Order tOrder);
    void setID(std::string tID);
    void setName(std::string tName);
    void setLastName(std::string tLastName);

    // Getters
    std::string getID() const;
    std::string getName() const;
    std::string getLastName() const;
    Order getOrder(int pos);

};

