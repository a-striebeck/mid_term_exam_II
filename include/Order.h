#include <vector>
#include <iostream>
#include <Item.h>

class Order
{
private:
    std::vector <Item> Items;
    double totalPrice;

    //Private setter, since I don't want for this method to be available outside the class.
    //It is ment to be called only when a new Item is added to the order.
    void setTotalPrice(Item tItem);

public:
    Order();
    ~Order();
    void addItem(Item tItem);    

    //Getters
    double getTotalPrice() const;
    Item getItem(int pos) const;
};

