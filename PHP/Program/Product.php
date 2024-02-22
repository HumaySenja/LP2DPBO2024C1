<?php
class Product
{
    private $idProduct;
    private $name;
    private $brand;
    private $price;



    public function __construct($idProduct="", $name="", $brand="", $price="0")
    {
        $this->idProduct = $idProduct;
        $this->name = $name;
        $this->brand = $brand;
        $this->price = $price;
    }

    public function get_IdProduct()
    {
        return $this->idProduct;
    }

    public function set_IdProduct($idProduct)
    {
        $this->idProduct = $idProduct;
    }

    public function get_Name()
    {
        return $this->name;
    }

    public function set_Name($name)
    {
        $this->name = $name;
    }

    public function get_Brand()
    {
        return $this->brand;
    }

    public function set_Brand($brand)
    {
        $this->brand = $brand;
    }

    public function get_Price()
    {
        return $this->price;
    }
    
    public function set_Price($price)
    {
        $this->price = $price;
    }
}
?>