from Memory import Memory

memory_obj = Memory()

memory_obj.setBrand("Asus")
memory_obj.setModel("RTX 3090 TI")
memory_obj.setPrice("Rp. 1.000.000")
memory_obj.setIdProduct("AR39")
memory_obj.setFrequency("19.5 Gbps")
memory_obj.setMemorySize("24GB")
memory_obj.setSupportsCuda("yes")

print("Brand         : " + memory_obj.getBrand())
print("Model         : " + memory_obj.getModel())
print("Price         : " + memory_obj.getPrice())
print("Product ID    : " + memory_obj.getIdProduct())
print("Frequency     : " + memory_obj.getFrequency())
print("Memory Size   : " + memory_obj.getMemorySize())
print("Supports Cuda : " + memory_obj.getSupportsCuda())