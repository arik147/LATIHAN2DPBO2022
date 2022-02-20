#include "Hardware.cpp"

class Memory : public Hardware{
    private:
        string frequency;
        string memorySize;
        string supportsCuda;



    public:
        Memory(string frequency, string memorySize, string supportsCuda)
        {
            this->frequency = frequency;
            this->memorySize = memorySize;
            this->supportsCuda = supportsCuda;
        }
        
        Memory(){}
        
        void setFrequency(string frequency)
        {
            this->frequency = frequency;
        }
        
        string getFrequency()
        {
            return this->frequency;
        }

        void setMemorySize(string memorySize)
        {
            this->memorySize = memorySize;
        }

        string getMemorySize()
        {
            return this->memorySize;
        }

        void setSupportsCuda(string supportsCuda)
        {
            this->supportsCuda = supportsCuda;
        }

        string getSupportsCuda()
        {
            return this->supportsCuda;
        }

        void print()
        {
            cout << "Brand         : " << getBrand() << endl;
            cout << "Model         : " << getModel() << endl;
            cout << "Price         : " << getPrice() << endl;
            cout << "Product ID    : " << getIdProduct() << endl;
            cout << "Frequency     : " << getFrequency() << endl;
            cout << "Memory Size   : " << getMemorySize() << endl;
            cout << "Supports Cuda : " << getSupportsCuda() << endl;
        }

        ~Memory(){}
};