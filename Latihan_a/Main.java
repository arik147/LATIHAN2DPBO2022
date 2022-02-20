class Main{
    public static void main(String[] args)
    {
        Memory memory_obj = new Memory();
        
        memory_obj.setBrand("Asus");
        memory_obj.setModel("RTX 3090 TI");
        memory_obj.setPrice(100000);
        memory_obj.setIdProduct("AR39");
        memory_obj.setFrequency("19.5 Gbps");
        memory_obj.setMemorySize("24GB");
        memory_obj.setSupportsCuda(true);

        memory_obj.print();
    }
}
