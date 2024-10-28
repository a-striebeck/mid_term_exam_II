#ifndef ITEM_H
#define ITEM_H


#include <Article.h>

class Item
{
private:
    Article product;
    int quantity;
    double price;
    //Private Setter
    void setPrice();
public:
    Item(const Article& tArticle, int tQuantity);;
    ~Item();

    // Setters
    void setQuantity(int tQuantity);
    void setArticle(Article tArticle);

    // Getters
    Article getArticle() const;
    int getQuantity() const;
    double getPrice()const;
};

#endif // ITEM_H
