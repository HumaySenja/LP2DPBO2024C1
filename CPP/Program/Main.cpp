#include <iostream>
#include <vector>
#include <string>
#include<iomanip>
#include "Product.cpp"
#include "Cloth.cpp"
#include "Shirt.cpp"

void printDaftarCloth(const vector<Shirt> shirtList) {
    int panjangidproduct = 2;
    int panjangname = 4;
    int panjangbrand = 5;
    int panjangprice = 5;
    int panjangsize = 4;
    int panjangmaterial = 8;
    int panjanggender = 6;
    int panjangcolor = 5;
    int panjangsleeve_type = 14;

    for (const auto shirt : shirtList) {
        string priceAsString = to_string(shirt.price);
        if (shirt.idProduct.length() > panjangidproduct) {
            panjangidproduct = shirt.idProduct.length();
        }
        if (shirt.name.length() > panjangname) {
            panjangname = shirt.name.length();
        }
        if (shirt.brand.length() > panjangbrand) {
            panjangbrand = shirt.brand.length();
        }
        if (priceAsString.length() > panjangprice) {
            panjangprice = priceAsString.length();
        }
        if (shirt.material.length() > panjangmaterial) {
            panjangmaterial = shirt.material.length();
        }
        if (shirt.gender.length() > panjanggender) {
            panjanggender = shirt.gender.length();
        }
        if (shirt.color.length() > panjangcolor) {
            panjangcolor = shirt.color.length();
        }
        if (shirt.sleeve_type.length() > panjangsleeve_type) {
            panjangsleeve_type = shirt.sleeve_type.length();
        }
    }

    int panjangsemua = panjangidproduct + panjangname + panjangbrand + panjangprice + panjangsize + panjangmaterial
            + panjanggender + panjangcolor + panjangsleeve_type;

    cout << "\nDaftar Kemeja";
    for (int i = 0; i < panjangsemua + 28; i++) {
        cout << "-";
    }
    cout << "\n";

    cout << "| ID";
    for (int j = 0; j < panjangidproduct - 2; j++) {
        cout << " ";
    }
    cout << " | Name";
    for (int j = 0; j < panjangname - 4; j++) {
        cout << " ";
    }
    cout << " | Brand";
    for (int j = 0; j < panjangbrand - 5; j++) {
        cout << " ";
    }
    cout << " | Price";
    for (int j = 0; j < panjangprice - 5; j++) {
        cout << " ";
    }
    cout << " | Size";
    for (int j = 0; j < panjangsize - 4; j++) {
        cout << " ";
    }
    cout << " | Material";
    for (int j = 0; j < panjangmaterial - 8; j++) {
        cout << " ";
    }
    cout << " | Gender";
    for (int j = 0; j < panjanggender - 6; j++) {
        cout << " ";
    }
    cout << " | Color";
    for (int j = 0; j < panjangcolor - 5; j++) {
        cout << " ";
    }
    cout << " | Panjang Lengan";
    for (int j = 0; j < panjangsleeve_type - 14; j++) {
        cout << " ";
    }
    cout << " |";

    cout << "\n";

    for (int i = 0; i < panjangsemua + 28; i++) {
        cout << "-";
    }
    cout << "\n";

    for (const auto& shirt : shirtList) {
        string priceAsString = to_string(shirt.price);

        cout << "| " << shirt.idProduct;
        for (int j = 0; j < panjangidproduct - shirt.idProduct.length(); j++) {
            cout << " ";
        }
        cout << " | ";

        cout << shirt.name;
        for (int j = 0; j < panjangname - shirt.name.length(); j++) {
            cout << " ";
        }
        cout << " | ";

        cout << shirt.brand;
        for (int j = 0; j < panjangbrand - shirt.brand.length(); j++) {
            cout << " ";
        }
        cout << " | ";

        cout << shirt.price;
        for (int j = 0; j < panjangprice - priceAsString.length(); j++) {
            cout << " ";
        }
        cout << " | ";

        cout << shirt.size;
        for (int j = 0; j < panjangsize - shirt.size.length(); j++) {
            cout << " ";
        }
        cout << " | ";

        cout << shirt.material;
        for (int j = 0; j < panjangmaterial - shirt.material.length(); j++) {
            cout << " ";
        }
        cout << " | ";

        cout << shirt.gender;
        for (int j = 0; j < panjanggender - shirt.gender.length(); j++) {
            cout << " ";
        }
        cout << " | ";

        cout << shirt.color;
        for (int j = 0; j < panjangcolor - shirt.color.length(); j++) {
            cout << " ";
        }
        cout << " | ";

        cout << shirt.sleeve_type;
        for (int j = 0; j < panjangsleeve_type - shirt.sleeve_type.length(); j++) {
            cout << " ";
        }
        cout << " | ";

        cout << "\n";
    }

    for (int k = 0; k < panjangsemua + 28; k++) {
        cout << "-";
    }
    cout << "\n";
}
int main() {
    int n;
    cout << "Ketikkan jumlah produk yang mau diinput: ";
    cin >> n;

    vector<Shirt> shirtList;
    for (int i = 0; i < n; i++) {
        Shirt temp;

        cout << "ID produk: ";
        cin >> temp.idProduct;
        cout << "Nama produk: ";
        cin >> temp.name;
        cout << "Brand produk: ";
        cin >> temp.brand;
        cout << "Harga produk: ";
        cin >> temp.price;
        cout << "Ukuran produk: ";
        cin >> temp.size;
        cout << "Material produk: ";
        cin >> temp.material;
        cout << "Gender produk: ";
        cin >> temp.gender;
        cout << "Warna produk: ";
        cin >> temp.color;
        cout << "Jenis lengan produk: ";
        cin >> temp.sleeve_type;

        shirtList.push_back(temp);
    }

    printDaftarCloth(shirtList);

    return 0;
}