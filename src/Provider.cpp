#include <Provider.h>

Provider::Provider()
{
}

Provider::~Provider()
{
}

// Setters
void Provider::setID(std::string tID){ID = tID;}
void Provider::setName(std::string tName){name = tName;}
void Provider::setLastName(std::string tLastName){lastName = tLastName;}

//Getters

std::string Provider::getID() const{return ID;}
std::string Provider::getName() const{return name;}
std::string Provider::getLastName() const{return lastName;}