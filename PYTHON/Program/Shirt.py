from Cloth import Cloth  

class Shirt(Cloth):
    def __init__(self, color="", sleeve_type=""):
        super().__init__()
        self.color = color
        self.sleeve_type = sleeve_type

    def get_Color(self):
        return self.color

    def set_Color(self, color):
        self.color = color

    def get_SleeveType(self):
        return self.sleeve_type

    def set_SleeveType(self, sleeve_type):
        self.sleeve_type = sleeve_type