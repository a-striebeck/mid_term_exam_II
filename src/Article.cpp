#include <Article.h>

Article::Article(std::string tID, std::string tName, double tPrice) : ID(tID), name(tName), price(tPrice) {}

Article::~Article(){}
//Setters
void Article::setID(std::string tID){
    ID = tID;
}

void Article::setName(std::string tName){
    name = tName;
}

void Article::setPrice(double tPrice){
    price = tPrice;
}

//Getters
std::string Article::getID() const{
    return ID;
}

std::string Article::getName() const {
    return name;
}

double Article::getPrice() const {
    return price;
}

