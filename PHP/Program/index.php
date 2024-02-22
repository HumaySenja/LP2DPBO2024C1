<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
    <style>
        table {
            border-collapse: collapse;
        }

        table, th, td {
            border: 1px solid black;
        }

        th, td {
            padding: 5px;
            text-align: left;
        }
    </style>
</head>
<body>
    <?php
    require_once('Shirt.php');

    $ShirtList = array(
        array("101", "Kemeja_kotak", "uniqlo", "150000", "M", "Kain", "Unisex", "Biru", "Pendek"),
        array("202", "Kemeja_polos", "Volvo", "999999", "L", "kain", "Male", "Putih", "Panjang"),
        array("303", "Kemeja_Kasual", "Hyundai", "1500000", "S", "kain", "Female", "Coklat", "Panjang"),
        array("404", "Kemeja_01", "Uniqlo", "300000", "XL", "kain", "Unisex", "Hitam", "Panjang")
    );
    
    $Shirts = array();
    
    foreach ($ShirtList as $data) {
        $Shirt = new Shirt();
        $Shirt->set_IdProduct($data[0]);
        $Shirt->set_Name($data[1]);
        $Shirt->set_Brand($data[2]);
        $Shirt->set_Price($data[3]);
        $Shirt->set_Size($data[4]);
        $Shirt->set_Material($data[5]);
        $Shirt->set_Gender($data[6]);
        $Shirt->set_Color($data[7]);
        $Shirt->set_SleeveType($data[8]);

        $Shirts[] = $Shirt; 
    }
    
    echo "<h3>Daftar Kemeja</h3>";
    echo "<table>";
    echo "<tr>
            <th>ID</th>
            <th>Name</th>
            <th>Brand</th>
            <th>Price</th>
            <th>Size</th>
            <th>Material</th>
            <th>Gender</th>
            <th>Color</th>
            <th>Sleeve Type</th>
          </tr>";
    
    foreach ($Shirts as $Shirt) {
        echo "<tr>";
        echo "<td>" . $Shirt->get_IdProduct() . "</td>";
        echo "<td>" . $Shirt->get_Name() . "</td>";
        echo "<td>" . $Shirt->get_Brand() . "</td>";
        echo "<td>" . $Shirt->get_Price() . "</td>";
        echo "<td>" . $Shirt->get_Size() . "</td>";
        echo "<td>" . $Shirt->get_Material() . "</td>";
        echo "<td>" . $Shirt->get_Gender() . "</td>";
        echo "<td>" . $Shirt->get_Color() . "</td>";
        echo "<td>" . $Shirt->get_SleeveType() . "</td>";
        echo "</tr>";
    }
    echo "</table>";

    ?>  
</body>
</html>

