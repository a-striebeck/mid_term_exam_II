#include <Item.h>

Item::Item(const Article& tArticle, int tQuantity)
    : product(tArticle), quantity(tQuantity){}

Item::~Item()
{
}
//Setters

void Item::setQuantity(int tQuantity){
    quantity = tQuantity;
    setPrice();
}

void Item::setPrice(){
    price = product.getPrice() * quantity;
}

void Item::setArticle(Article tArticle){
    product = tArticle;
    setPrice(); // The price is recalculated if the product change.
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