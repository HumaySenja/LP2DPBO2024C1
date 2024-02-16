class Shirt extends Cloth {
    private String color;
    private String sleeve_type;

    public Shirt(){
        this.color = "";
        this.sleeve_type = "";
    }

    public Shirt(String color, String sleeve_type){
        this.color = color;
        this.sleeve_type = sleeve_type;
    }

    public String get_Color() {
        return color;
    }

    public void set_Color(String color) {
        this.color = color;
    }

    public String get_SleeveType() {
        return sleeve_type;
    }

    public void set_SleeveType(String sleeve_type) {
        this.sleeve_type = sleeve_type;
    }
}
