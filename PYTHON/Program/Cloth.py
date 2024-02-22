from Product import Product 

class Cloth(Product):
    def __init__(self, size="", material="", gender=""):
        super().__init__()
        self.size = size
        self.material = material
        self.gender = gender

    def get_Size(self):
        return self.size

    def set_Size(self, size):
        self.size = size

    def get_Material(self):
        return self.material

    def set_Material(self, material):
        self.material = material

    def get_Gender(self):
        return self.gender

    def set_Gender(self, gender):
        self.gender = gender