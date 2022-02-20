class Memory extends Hardware
{
    private String frequency;
    private String memorySize;
    private boolean supportsCuda;
    
    public Memory(String frequency, String memorySize, Boolean supportsCuda){
        this.frequency = frequency;
        this.memorySize = memorySize;
        this.supportsCuda = supportsCuda;
    }

    public Memory(){}
    
    public void setFrequency(String frequency){
        this.frequency = frequency;
    }

    public String getFrequency(){
        return frequency;
    }

    public void setMemorySize(String memorySize){
        this.memorySize = memorySize;
    }

    public String getMemorySize(){
        return memorySize;
    }

    public void setSupportsCuda(boolean supportsCuda){
        this.supportsCuda = supportsCuda;
    }

    public boolean getSupportsCuda(){
        return supportsCuda;
    }

    public void print(){
        System.out.println("Brand : " + getBrand());
        System.out.println("Model : " + getModel());
        System.out.println("Price : " + getPrice());
        System.out.println("Product ID : " + getIdProduct());
        System.out.println("Frequency : " + getFrequency());
        System.out.println("Memory Size : " + getMemorySize());
        System.out.println("Supports Cuda : " + getSupportsCuda());
    }
}
