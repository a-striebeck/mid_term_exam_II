#include <Item.h>

Item::Item(Article tArticle) : product(tArticle){}

Item::~Item()
{
}
//Setters

void Item::setQuantity(int tQuantity){
    quantity = tQuantity;
}

void Item::setPrice(){
    price = product.getPrice() * quantity;
}

//Getters

Article Item::getArticle() const{
    return product;
}

int Item::getQuantity() const{
    return quantity;
}

double Item::getPrice() const{
    return price;
}