
#include <iostream>
#include <vector>
#include "Product.cpp"
#include "Cloth.cpp"
#include "Shirt.cpp"

using namespace std;

void print_daftar_cloth(vector<Shirt> vvector)
{
    int panjang_id_product = 2;
    int panjang_name = 4;
    int panjang_brand = 5;
    int panjang_price = 5;
    int panjang_size = 4;
    int panjang_material = 8;
    int panjang_gender = 6;
    int panjang_color = 5;
    int panjang_sleeve_type = 14;

    for (int i = 0; i < vvector.size(); i++)
    {
        string price_as_string = to_string(vvector[i].get_Price());
        panjang_id_product = max(panjang_id_product, static_cast<int>(vvector[i].get_IdProduct().length()));
        panjang_name = max(panjang_name, static_cast<int>(vvector[i].get_Name().length()));
        panjang_brand = max(panjang_brand, static_cast<int>(vvector[i].get_Brand().length()));
        panjang_price = max(panjang_price, static_cast<int>(price_as_string.length()));
        panjang_size = max(panjang_size, static_cast<int>(vvector[i].get_Size().length()));
        panjang_material = max(panjang_material, static_cast<int>(vvector[i].get_Material().length()));
        panjang_gender = max(panjang_gender, static_cast<int>(vvector[i].get_Gender().length()));
        panjang_color = max(panjang_color, static_cast<int>(vvector[i].get_Color().length()));
        panjang_sleeve_type = max(panjang_sleeve_type, static_cast<int>(vvector[i].get_SleeveType().length()));
    }

    int panjang_semua = panjang_id_product + panjang_name + panjang_brand + panjang_price + panjang_size + panjang_material + panjang_gender + panjang_color + panjang_sleeve_type;

    cout << "\nDaftar Kemeja\n";
    cout << string(panjang_semua + 28, '-') << "\n";

    cout << "| ID" << string(panjang_id_product - 2, ' ') << " | Name" << string(panjang_name - 4, ' ')
         << " | Brand" << string(panjang_brand - 5, ' ') << " | Price" << string(panjang_price - 5, ' ')
         << " | Size" << string(panjang_size - 4, ' ') << " | Material" << string(panjang_material - 8, ' ')
         << " | Gender" << string(panjang_gender - 6, ' ') << " | Color" << string(panjang_color - 5, ' ')
         << " | Panjang Tangan" << string(panjang_sleeve_type - 14, ' ') << " |\n";

    cout << string(panjang_semua + 28, '-') << "\n";

    for (int i = 0; i < vvector.size(); i++)
    {
        string price_as_string = to_string(vvector[i].get_Price());
        cout << "| " << vvector[i].get_IdProduct() << string(panjang_id_product - vvector[i].get_IdProduct().length(), ' ')
             << " | " << vvector[i].get_Name() << string(panjang_name - vvector[i].get_Name().length(), ' ')
             << " | " << vvector[i].get_Brand() << string(panjang_brand - vvector[i].get_Brand().length(), ' ')
             << " | " << vvector[i].get_Price() << string(panjang_price - price_as_string.length(), ' ')
             << " | " << vvector[i].get_Size() << string(panjang_size - vvector[i].get_Size().length(), ' ')
             << " | " << vvector[i].get_Material() << string(panjang_material - vvector[i].get_Material().length(), ' ')
             << " | " << vvector[i].get_Gender() << string(panjang_gender - vvector[i].get_Gender().length(), ' ')
             << " | " << vvector[i].get_Color() << string(panjang_color - vvector[i].get_Color().length(), ' ')
             << " | " << vvector[i].get_SleeveType() << string(panjang_sleeve_type - vvector[i].get_SleeveType().length(), ' ')
             << " |\n";
    }

    cout << string(panjang_semua + 28, '-') << "\n";
}

int main()
{
    vector<Shirt> shirt_list;

    string idProduct;
    string name;
    string brand;
    int price;
    string size;
    string material;
    string gender;
    string color;
    string sleeve_type;

    cout << "Ketikkan jumlah produk yang mau diinput\n";
    int n;
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        Shirt temp;

        cout << "ID produk:";
        getline(cin, idProduct);
        cout << "Nama produk:";
        getline(cin, name);
        cout << "Brand produk:";
        getline(cin, brand);
        cout << "Harga produk:";
        cin >> price;
        cin.ignore();
        cout << "Ukuran produk:";
        getline(cin, size);
        cout << "Material produk:";
        getline(cin, material);
        cout << "Gender produk:";
        getline(cin, gender);
        cout << "Warna produk:";
        getline(cin, color);
        cout << "Jenis lengan produk:";
        getline(cin, sleeve_type);

        temp.set_IdProduct(idProduct);
        temp.set_Name(name);
        temp.set_Brand(brand);
        temp.set_Price(price);
        temp.set_Size(size);
        temp.set_Material(material);
        temp.set_Gender(gender);
        temp.set_Color(color);
        temp.set_SleeveType(sleeve_type);
        shirt_list.push_back(temp);
    }

    print_daftar_cloth(shirt_list);

    return 0;
}