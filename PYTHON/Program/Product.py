class Product:
    def __init__(self, idProduct="", name="", brand="", price=0):
        self.idProduct = idProduct
        self.name = name
        self.brand = brand
        self.price = price

    def get_IdProduct(self):
        return self.idProduct

    def set_IdProduct(self, idProduct):
        self.idProduct = idProduct
        
    def get_Name(self):
        return self.name

    def set_Name(self, name):
        self.name = name

    def get_Brand(self):
        return self.brand

    def set_Brand(self, brand):
        self.brand = brand

    def get_Price(self):
        return self.price

    def set_Price(self, price):
        self.price = price