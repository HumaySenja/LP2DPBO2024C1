class Product {
    private String idProduct;
    private String name;
    private String brand;
    private int price;

    public Product(){
        this.idProduct = "";
        this.name = "";
        this.brand = "";
        this.price = 0;
    }

    public Product(String idProduct, String name, String brand, int price){
        this.idProduct = idProduct;
        this.name = name;
        this.brand = brand;
        this.price = price;
    }

    // Getter and Setter methods for idProduct
    public String get_IdProduct() {
        return idProduct;
    }

    public void set_IdProduct(String idProduct) {
        this.idProduct = idProduct;
    }

    // Getter and Setter methods for name
    public String get_Name() {
        return name;
    }

    public void set_Name(String name) {
        this.name = name;
    }

    // Getter and Setter methods for brand
    public String get_Brand() {
        return brand;
    }

    public void set_Brand(String brand) {
        this.brand = brand;
    }

    // Getter and Setter methods for price
    public int get_Price() {
        return price;
    }

    public void set_Price(int price) {
        this.price = price;
    }
}
