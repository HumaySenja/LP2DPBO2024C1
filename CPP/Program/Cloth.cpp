#include <iostream>
#include <string>

using namespace std;
class Product;

class Cloth : public Product {
private:
    string size;
    string material;
    string gender;

public:
    // Default constructor
    Cloth() : size(""), material(""), gender("") {}

    // Parameterized constructor
    Cloth(const string size, const string material, const string gender)
        : size(size), material(material), gender(gender) {}

    // Getter and Setter methods for size
    string get_Size() const {
        return size;
    }

    void set_Size(const string size) {
        this->size = size;
    }

    // Getter and Setter methods for material
    string get_Material() const {
        return material;
    }

    void set_Material(const string material) {
        this->material = material;
    }

    // Getter and Setter methods for gender
    string get_Gender() const {
        return gender;
    }

    void set_Gender(const string gender) {
        this->gender = gender;
    }
    ~Cloth(){};
};