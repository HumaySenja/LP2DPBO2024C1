#include <iostream>
#include <string>

using namespace std;

class Product {
private:
    string idProduct;
    string name;
    string brand;
    int price;

public:
    // Default constructor
    Product() : idProduct(""), name(""), brand(""), price(0) {}

    // Parameterized constructor
    Product(const string idProduct, const string name, const string brand, int price)
        : idProduct(idProduct), name(name), brand(brand), price(price) {}

    // Getter and Setter methods for idProduct
    string get_IdProduct() const {
        return idProduct;
    }

    void set_IdProduct(const string idProduct) {
        this->idProduct = idProduct;
    }

    // Getter and Setter methods for name
    string get_Name() const {
        return name;
    }

    void set_Name(const string name) {
        this->name = name;
    }

    // Getter and Setter methods for brand
    string get_Brand() const {
        return brand;
    }

    void set_Brand(const string brand) {
        this->brand = brand;
    }

    // Getter and Setter methods for price
    int get_Price() const {
        return price;
    }

    void set_Price(int price) {
        this->price = price;
    }

    ~Product(){};
};