#include <Article.h>

class Item
{
private:
    Article product;
    int quantity;
    double price;
public:
    Item(Article tArticle);
    ~Item();

    // Setters
    void setQuantity(int tQuantity);
    void setPrice();

    // Getters
    Article getArticle() const;
    int getQuantity() const;
    double getPrice()const;
};


