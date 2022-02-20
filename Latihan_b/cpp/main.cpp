#include "Memory.cpp"

int main(){
    Memory memory_obj;

    memory_obj.setBrand("Asus");
    memory_obj.setModel("RTX 3090 TI");
    memory_obj.setPrice("Rp. 1.000.000");
    memory_obj.setIdProduct("AR39");
    memory_obj.setFrequency("19.5 Gbps");
    memory_obj.setMemorySize("24GB");
    memory_obj.setSupportsCuda("yes");

    memory_obj.print();

    return 0;
}