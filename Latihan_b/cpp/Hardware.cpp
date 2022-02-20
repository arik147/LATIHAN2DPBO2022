#include "Product.cpp"

class Hardware : public Product{
    private:
        string brand;
        string model;

    public:
        Hardware(string brand, string model)
        {
            this->brand = brand;
            this->model = model;
        }

        Hardware(){}
        
        void setBrand(string brand)
        {
            this->brand = brand;
        }
        string getBrand()
        {
            return this->brand;
        }

        void setModel(string model)
        {
            this->model = model;
        }

        string getModel()
        {
            return this->model;
        }

        ~Hardware(){}
};