import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    private static void printDaftarCloth(ArrayList<Shirt> shirtList) {
        int panjangidproduct = 2;
        int panjangname = 4;
        int panjangbrand = 5;
        int panjangprice = 5;
        int panjangsize = 4;
        int panjangmaterial = 8;
        int panjanggender = 6;
        int panjangcolor = 5;
        int panjangsleeve_type = 14;

        for (int i = 0; i < shirtList.size(); i++) {
            String priceAsString = Integer.toString(shirtList.get(i).get_Price());
            if (shirtList.get(i).get_IdProduct().length() > panjangidproduct) {
                panjangidproduct = shirtList.get(i).get_IdProduct().length();
            }
            if (shirtList.get(i).get_Name().length() > panjangname) {
                panjangname = shirtList.get(i).get_Name().length();
            }
            if (shirtList.get(i).get_Brand().length() > panjangbrand) {
                panjangbrand = shirtList.get(i).get_Brand().length();
            }
            if (priceAsString.length() > panjangprice) {
                panjangprice = priceAsString.length();
            }
            if (shirtList.get(i).get_Material().length() > panjangmaterial) {
                panjangmaterial = shirtList.get(i).get_Material().length();
            }
            if (shirtList.get(i).get_Gender().length() > panjanggender) {
                panjanggender = shirtList.get(i).get_Gender().length();
            }
            if (shirtList.get(i).get_Color().length() > panjangcolor) {
                panjangcolor = shirtList.get(i).get_Color().length();
            }
            if (shirtList.get(i).get_SleeveType().length() > panjangsleeve_type) {
                panjangsleeve_type = shirtList.get(i).get_SleeveType().length();
            }
        }

        int panjangsemua = panjangidproduct + panjangname + panjangbrand + panjangprice + panjangsize + panjangmaterial
                + panjanggender + panjangcolor + panjangsleeve_type;

        System.out.println("\nDaftar Kemeja");
        for (int i = 0; i < panjangsemua + 28; i++) {
            System.out.print("-");
        }
        System.out.print("\n");

        System.out.print("| ID");
            for (int j = 0; j < panjangidproduct - 2; j++) {
                System.out.print(" ");
            }
            System.out.print(" | Name");
            for (int j = 0; j < panjangname - 4; j++) {
                System.out.print(" ");
            }
            System.out.print(" | Brand");
            for (int j = 0; j < panjangbrand - 5; j++) {
                System.out.print(" ");
            }
            System.out.print(" | Price");
            for (int j = 0; j < panjangprice - 5; j++) {
                System.out.print(" ");
            }
            System.out.print(" | Size");
            for (int j = 0; j < panjangsize - 4; j++) {
                System.out.print(" ");
            }
            System.out.print(" | Material");
            for (int j = 0; j < panjangmaterial - 8; j++) {
                System.out.print(" ");
            }
            System.out.print(" | Gender");
            for (int j = 0; j < panjanggender - 6; j++) {
                System.out.print(" ");
            }
            System.out.print(" | Color");

            for (int j = 0; j < panjangcolor - 5; j++) {
                System.out.print(" ");
            }
            System.out.print(" | Panjang Lengan");
            for (int j = 0; j < panjangsleeve_type - 14; j++) {
                System.out.print(" ");
            }
            System.out.print(" |");

            System.out.print("\n");

            for (int i = 0; i < panjangsemua + 28; i++) {
                System.out.print("-");
            }
            System.out.print("\n");

        for (int i = 0; i < shirtList.size(); i++) {
            String priceAsString = Integer.toString(shirtList.get(i).get_Price());

            System.out.print("| " + shirtList.get(i).get_IdProduct());
            for (int j = 0; j < panjangidproduct - shirtList.get(i).get_IdProduct().length(); j++) {
                System.out.print(" ");
            }
            System.out.print(" | ");

            System.out.print(shirtList.get(i).get_Name());
            for (int j = 0; j < panjangname - shirtList.get(i).get_Name().length(); j++) {
                System.out.print(" ");
            }
            System.out.print(" | ");

            System.out.print(shirtList.get(i).get_Brand());
            for (int j = 0; j < panjangbrand - shirtList.get(i).get_Brand().length(); j++) {
                System.out.print(" ");
            }
            System.out.print(" | ");

            System.out.print(shirtList.get(i).get_Price());
            for (int j = 0; j < panjangprice - priceAsString.length(); j++) {
                System.out.print(" ");
            }
            System.out.print(" | ");

            System.out.print(shirtList.get(i).get_Size());
            for (int j = 0; j < panjangsize - shirtList.get(i).get_Size().length(); j++) {
                System.out.print(" ");
            }
            System.out.print(" | ");

            System.out.print(shirtList.get(i).get_Material());
            for (int j = 0; j < panjangmaterial - shirtList.get(i).get_Material().length(); j++) {
                System.out.print(" ");
            }
            System.out.print(" | ");

            System.out.print(shirtList.get(i).get_Gender());
            for (int j = 0; j < panjanggender - shirtList.get(i).get_Gender().length(); j++) {
                System.out.print(" ");
            }
            System.out.print(" | ");

            System.out.print(shirtList.get(i).get_Color());
            for (int j = 0; j < panjangcolor - shirtList.get(i).get_Color().length(); j++) {
                System.out.print(" ");
            }
            System.out.print(" | ");

            System.out.print(shirtList.get(i).get_SleeveType());
            for (int j = 0; j < panjangsleeve_type - shirtList.get(i).get_SleeveType().length(); j++) {
                System.out.print(" ");
            }
            System.out.print(" | ");

            System.out.print("\n");
        }
        for (int k = 0; k < panjangsemua + 28; k++) {
            System.out.print("-");
        }
        System.out.print("\n");
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int i, n = 0;
        
        String idProduct;
        String name;
        String brand;
        int price;
        String size;
        String material;
        String gender;
        String color;
        String sleeve_type;

        ArrayList<Shirt> shirtList = new ArrayList<>();
        System.out.println("Ketikan jumlah produk yang mau diinput");
        n = scanner.nextInt();
        for (i = 0; i < n; i++) {
            Shirt temp = new Shirt();

            System.out.print("ID produk:");
            idProduct = scanner.next();
            System.out.print("Nama produk:");
            name = scanner.next();
            System.out.print("Brand produk:");
            brand = scanner.next();
            System.out.print("Harga produk:");
            price = scanner.nextInt();
            System.out.print("Ukuran produk:");
            size = scanner.next();
            System.out.print("Material produk:");
            material = scanner.next();
            System.out.print("gender produk:");
            gender = scanner.next();
            System.out.print("warna produk:");
            color = scanner.next();
            System.out.print("jenis lengan produk:");
            sleeve_type = scanner.next();

            temp.set_IdProduct(idProduct);
            temp.set_Name(name);
            temp.set_Brand(brand);
            temp.set_Price(price);
            temp.set_Size(size);
            temp.set_Material(material);
            temp.set_Gender(gender);
            temp.set_Color(color);
            temp.set_SleeveType(sleeve_type);

            shirtList.add(temp);
        }

        printDaftarCloth(shirtList);
        scanner.close();
    }
}
