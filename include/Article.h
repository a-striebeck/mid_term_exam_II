#include <iostream>

class Article
{
private:
    std::string ID;
    std::string name;
    double price;
public:
    Article(std::string tID, std::string tName, double tPrice);
    ~Article();
    
    // Setters
    void setID(std::string tID);
    void setName(std::string tName);
    void setPrice(double tPrice);

    // Getters
    std::string getID() const;
    std::string getName() const;
    double getPrice() const;
};


