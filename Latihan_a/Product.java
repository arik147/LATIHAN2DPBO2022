class Product
{
    private int price;
    private String idProduct;
    
    public Product(int price, String idProduct){
        this.price = price;
        this.idProduct = idProduct;
    }
    
    public Product(){}
    
    public void setPrice(int price){
        this.price = price;
    }
    
    public int getPrice(){
        return price;
    }

    public void setIdProduct(String idProduct){
        this.idProduct = idProduct;
    }
    
    public String getIdProduct(){
        return idProduct;
    }
}