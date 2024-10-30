#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee {
protected:
    std::string ID;
    std::string name;
    std::string lastName;

public:
    // Constructor
    Employee();
    ~Employee();
    // Getters
    std::string getID() const;
    std::string getName() const;
    std::string getLastName() const;

    // Setters
    void setID(const std::string& tID);
    void setName(const std::string& tName);
    void setLastName(const std::string& tLastName);
};

#endif // EMPLOYEE_H
