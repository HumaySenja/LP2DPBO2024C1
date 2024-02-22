class Shirt:
    def __init__(self):
        self.idProduct = ""
        self.name = ""
        self.brand = ""
        self.price = 0
        self.size = ""
        self.material = ""
        self.gender = ""
        self.color = ""
        self.sleeve_type = ""

def print_daftar_cloth(shirt_list):
    panjang_id_product = 2
    panjang_name = 4
    panjang_brand = 5
    panjang_price = 5
    panjang_size = 4
    panjang_material = 8
    panjang_gender = 6
    panjang_color = 5
    panjang_sleeve_type = 14

    for shirt in shirt_list:
        price_as_string = str(shirt.price)
        panjang_id_product = max(panjang_id_product, len(shirt.idProduct))
        panjang_name = max(panjang_name, len(shirt.name))
        panjang_brand = max(panjang_brand, len(shirt.brand))
        panjang_price = max(panjang_price, len(price_as_string))
        panjang_size = max(panjang_size, len(shirt.size))
        panjang_material = max(panjang_material, len(shirt.material))
        panjang_gender = max(panjang_gender, len(shirt.gender))
        panjang_color = max(panjang_color, len(shirt.color))
        panjang_sleeve_type = max(panjang_sleeve_type, len(shirt.sleeve_type))

    panjang_semua = panjang_id_product + panjang_name + panjang_brand + panjang_price + panjang_size + panjang_material \
                    + panjang_gender + panjang_color + panjang_sleeve_type

    print("\nDaftar Kemeja")
    print("-" * (panjang_semua + 28))

    print(f"| ID{' ' * (panjang_id_product - 2)} | Name{' ' * (panjang_name - 4)} | Brand{' ' * (panjang_brand - 5)} "
          f"| Price{' ' * (panjang_price - 5)} | Size{' ' * (panjang_size - 4)} | Material{' ' * (panjang_material - 8)} "
          f"| Gender{' ' * (panjang_gender - 6)} | Color{' ' * (panjang_color - 5)} | Panjang Tangan{' ' * (panjang_sleeve_type - 14)} |")
    print("-" * (panjang_semua + 28))

    for shirt in shirt_list:
        price_as_string = str(shirt.price)
        print(f"| {shirt.idProduct}{' ' * (panjang_id_product - len(shirt.idProduct))} | "
              f"{shirt.name}{' ' * (panjang_name - len(shirt.name))} | "
              f"{shirt.brand}{' ' * (panjang_brand - len(shirt.brand))} | "
              f"{shirt.price}{' ' * (panjang_price - len(price_as_string))} | "
              f"{shirt.size}{' ' * (panjang_size - len(shirt.size))} | "
              f"{shirt.material}{' ' * (panjang_material - len(shirt.material))} | "
              f"{shirt.gender}{' ' * (panjang_gender - len(shirt.gender))} | "
              f"{shirt.color}{' ' * (panjang_color - len(shirt.color))} | "
              f"{shirt.sleeve_type}{' ' * (panjang_sleeve_type - len(shirt.sleeve_type))} |")

    print("-" * (panjang_semua + 28))

def main():
    shirt_list = []

    print("Ketikkan jumlah produk yang mau diinput")
    n = int(input())
    for _ in range(n):
        temp = Shirt()

        temp.idProduct = input("ID produk:")
        temp.name = input("Nama produk:")
        temp.brand = input("Brand produk:")
        temp.price = int(input("Harga produk:"))
        temp.size = input("Ukuran produk:")
        temp.material = input("Material produk:")
        temp.gender = input("Gender produk:")
        temp.color = input("Warna produk:")
        temp.sleeve_type = input("Jenis lengan produk:")

        shirt_list.append(temp)

    print_daftar_cloth(shirt_list)

if __name__ == "__main__":
    main()
