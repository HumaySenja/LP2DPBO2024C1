#include <iostream>
#include <string>

using namespace std;
class Shirt : public Cloth {
private:
    string color;
    string sleeve_type;

public:
    Shirt() : Cloth(), color(""), sleeve_type("") {}

    Shirt(const string color, const string sleeve_type)
        : Cloth(), color(color), sleeve_type(sleeve_type) {}

    string get_Color() const {
        return color;
    }

    void set_Color(const string color) {
        this->color = color;
    }

    string get_SleeveType() const {
        return sleeve_type;
    }

    void set_SleeveType(const string sleeve_type) {
        this->sleeve_type = sleeve_type;
    }
};