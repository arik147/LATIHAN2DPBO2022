class Product:
    __price = ""
    __idProduct = ""

    def __init__(self):
        self.__price = ""    
        self.__idProduct = ""

    def setPrice(self, price):
        self.__price = price

    def getPrice(self):
        return self.__price

    def setIdProduct(self, idProduct):
        self.__idProduct = idProduct

    def getIdProduct(self):
        return self.__idProduct