<?php 
require_once('Cloth.php');
class Shirt extends Cloth {
    private $color;
    private $sleeve_type;


    public function __construct($color="", $sleeve_type=""){
        
        parent::__construct("", "", "");
        $this->color = $color;
        $this->sleeve_type = $sleeve_type;
    }

    public function get_Color() {
        return $this->color;
    }

    public function set_Color($color) {
        $this->color = $color;
    }

    public function get_SleeveType() {
        return $this->sleeve_type;
    }

    public function set_SleeveType($sleeve_type) {
        $this->sleeve_type = $sleeve_type;
    }
}
?>