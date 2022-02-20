from numpy import product
from Product import Product

class Hardware(Product):
    __brand = ""
    __model = ""

    def __init__(self):
        self.__brand = ""
        self.__model = ""

    def setBrand(self, brand):
        self.__brand = brand

    def getBrand(self):
        return self.__brand

    def setModel(self, model):
        self.__model = model

    def getModel(self):
        return self.__model