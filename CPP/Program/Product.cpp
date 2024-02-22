
#ifndef PRODUCT_H
#define PRODUCT_H
#include <string>

class Product {
private:
    std::string idProduct;
    std::string name;
    std::string brand;
    int price;

public:
    Product(std::string idProduct = "", std::string name = "", std::string brand = "", int price = 0) {
        this->idProduct = idProduct;
        this->name = name;
        this->brand = brand;
        this->price = price;
    }

    std::string get_IdProduct() {
        return idProduct;
    }

    void set_IdProduct(std::string idProduct) {
        this->idProduct = idProduct;
    }

    std::string get_Name() {
        return name;
    }

    void set_Name(std::string name) {
        this->name = name;
    }

    std::string get_Brand() {
        return brand;
    }

    void set_Brand(std::string brand) {
        this->brand = brand;
    }

    int get_Price() {
        return price;
    }

    void set_Price(int price) {
        this->price = price;
    }
};
#endif