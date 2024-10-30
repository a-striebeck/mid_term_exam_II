#include <Employee.h>

// Constructor
Employee::Employee(){}
Employee::~Employee(){}
// Getters
std::string Employee::getID() const { return ID; }
std::string Employee::getName() const { return name; }
std::string Employee::getLastName() const { return lastName; }

// Setters
void Employee::setID(const std::string& tID) { ID = tID; }
void Employee::setName(const std::string& tName) { name = tName; }
void Employee::setLastName(const std::string& tLastName) { lastName = tLastName; }
