class Cloth extends Product{
    private String size;
    private String material;
    private String gender;

    public Cloth(){
        this.size = "";
        this.material = "";
        this.gender = "";
    }

    public Cloth(String size, String material, String gender){
        this.size = size;
        this.material = material;
        this.gender = gender;
    }

    public String get_Size() {
        return size;
    }

    public void set_Size(String size) {
        this.size = size;
    }

    public String get_Material() {
        return material;
    }

    public void set_Material(String material) {
        this.material = material;
    }

    public String get_Gender() {
        return gender;
    }

    public void set_Gender(String gender) {
        this.gender = gender;
    }
}
