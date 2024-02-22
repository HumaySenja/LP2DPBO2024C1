#ifndef SHIRT_H
#define SHIRT_H
#include "Cloth.cpp"
class Shirt : public Cloth {
private:
    std::string color;
    std::string sleeve_type;

public:
    Shirt(std::string color = "", std::string sleeve_type = "") : Cloth() {
        this->color = color;
        this->sleeve_type = sleeve_type;
    }

    std::string get_Color() {
        return color;
    }

    void set_Color(std::string color) {
        this->color = color;
    }

    std::string get_SleeveType() {
        return sleeve_type;
    }

    void set_SleeveType(std::string sleeve_type) {
        this->sleeve_type = sleeve_type;
    }
};
#endif