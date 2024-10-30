#ifndef PROVIDER_H
#define PROVIDER_H

#include <vector>
#include <iostream>

class Provider
{
private:

    std::string ID;
    std::string name;
    std::string lastName;

public:
    Provider();
    ~Provider();

    // Setters, and addOrder()
    void setID(std::string tID);
    void setName(std::string tName);
    void setLastName(std::string tLastName);

    // Getters
    std::string getID() const;
    std::string getName() const;
    std::string getLastName() const;

};

#endif // Provider_H

