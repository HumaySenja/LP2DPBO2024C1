<?php
require_once('Product.php');
class Cloth extends Product
{
    private $size;
    private $material;
    private $gender;

    public function __construct($size = "", $material="", $gender="")
    {
        parent::__construct("", "", "", "");
        $this->size = $size;
        $this->material = $material;
        $this->gender = $gender;
    }

    public function get_Size()
    {
        return $this->size;
    }

    public function set_Size($size)
    {
        $this->size = $size;
    }

    public function get_Material()
    {
        return $this->material;
    }

    public function set_Material($material)
    {
        $this->material = $material;
    }

    public function get_Gender()
    {
        return $this->gender;
    }

    public function set_Gender($gender)
    {
        $this->gender = $gender;
    }
}
?>