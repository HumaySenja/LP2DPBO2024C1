#ifndef CLOTH_H
#define CLOTH_H
#include "Product.cpp"

class Cloth : public Product {
private:
    std::string size;
    std::string material;
    std::string gender;

public:
    Cloth(std::string size = "", std::string material = "", std::string gender = "") : Product() {
        this->size = size;
        this->material = material;
        this->gender = gender;
    }

    std::string get_Size() {
        return size;
    }

    void set_Size(std::string size) {
        this->size = size;
    }

    std::string get_Material() {
        return material;
    }

    void set_Material(std::string material) {
        this->material = material;
    }

    std::string get_Gender() {
        return gender;
    }

    void set_Gender(std::string gender) {
        this->gender = gender;
    }
};
#endif