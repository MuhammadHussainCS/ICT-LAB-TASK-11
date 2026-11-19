#include<iostream>
using namespace std;
class Product {
    private:
        string productId;
        string name;
        double price;

    public:

        void setProductId(string p) {
            productId = p;
        }
        void setName(string s) {
            name = s;
        }
        void setPrice(double pr) {
            price = pr;
        }
        string getProductId() {
            return productId;
        }
        string getName() {
            return name;
        }
        double getPrice() {
            return price;
        }

        void displayProductInfo() {
            cout << "Product ID " << getProductId() << endl;
            cout << "Name " << getName() << endl;
            cout << "Price " << getPrice() << endl;
        } 

};
class Electronics : public Product {
    private:
        string brand;
        int warrantyMonths;
        string powerConsumption;
    public:
        void setBrand(string b) {
            brand = b;
        }
        string getBrand() {
            return brand;
        }
        void setWarrantyMonths(int w){
            warrantyMonths = w;
        }
        int getWarrantyMonths() {
            return warrantyMonths;
        }
        void setPowerConsumption(string s) {
            powerConsumption = s;
        }
        string getPowerConsumption() {
            return powerConsumption;
        }
        void displayElectronicsInfo() {
            displayProductInfo();
            cout << "Brand Name " << getBrand() << endl;
            cout << "Warranty Months " << getWarrantyMonths() << endl;
            cout << "Pwer Consumption " << getPowerConsumption() << endl;
        }
};

class Grocery : public Product {
    private:
        string expiryDate;
        double weight;
        bool isOrganic;
        public:
            void setexpiryDate(string e) {
                expiryDate = e;
            }
            void setWeight(double w) {
                weight = w;
            }
            void setIsOrganic(bool a) {
                isOrganic = a;
            }
            string getExpiryDate() {
                return expiryDate;
            }
            double getWeight() {
                return weight;
            }
            bool getIsOrganic() {
                return isOrganic;
            }
            void displayGroceryInfo() {
                displayProductInfo();
                cout << "Expiry Date " << getExpiryDate() << endl;
                cout << "Weight " << getWeight() << endl;
                if(getIsOrganic()) {
                    cout << "IsOrganic: TRUE" << endl;
                } else {
                    cout << "IsOrganic: FALSE" << endl;
                }
            }
};

class Clothing : public Product {
    private:
        string size;
        string color;
        string material;
    public:
        void setColor(string s) {
            color = s;
        }
        void setMaterial(string m) {
            material = m;
        }
        void setSize(string l) {
            size = l;
        }
        string getColor() {
            return color;
        }
        string getSize() {
            return size;
        }
        string getMaterial() {
            return material;
        }

        void displayClothingInfo() {
            displayProductInfo();
            cout << "Size " << getSize() << endl;
            cout << "Color " << getColor() << endl;
            cout << "Material " << getMaterial() << endl;
        }
};

int main(){
    Electronics e1,e2;
    Clothing c1,c2;
    Grocery g1,g2;

    e1.setProductId("E01");
    e1.setName("LAPTOP");
    e1.setPrice(50000);
    e1.setBrand("Dell");
    e1.setWarrantyMonths(2);
    e1.setPowerConsumption("100 W");
    cout << "--- Electronics ---" << endl;
    e1.displayElectronicsInfo();

    e2.setProductId("E02");
    e2.setName("HeadPhones");
    e2.setPrice(5000);
    e2.setBrand("HP");
    e2.setWarrantyMonths(6);
    e2.setPowerConsumption("10 W");
    e2.displayElectronicsInfo();

    c1.setProductId("C01");
    c1.setName("T-Shirt");
    c1.setPrice(3000.0);
    c1.setSize("M");
    c1.setColor("Black");
    c1.setMaterial("Cotton");   
    cout << "--- Clothing ---" << endl;
    c1.displayClothingInfo();

    c2.setProductId("C02");
    c2.setName("Jacket");
    c2.setPrice(80000.0);
    c2.setSize("L");
    c2.setColor("Blue");
    c2.setMaterial("Denim");
    c2.displayClothingInfo();


    g1.setProductId("G01");
    g1.setName("Apples");
    g1.setPrice(5000.0);
    g1.setexpiryDate("2026-12-01");
    g1.setWeight(2.0);
    g1.setIsOrganic(true); 
    cout << "--- Grocery ---" << endl;
    g1.displayGroceryInfo();

    g2.setProductId("G02");
    g2.setName("Rice");
    g2.setPrice(150.0);
    g2.setexpiryDate("2027-06-15");
    g2.setWeight(5.0);
    g2.setIsOrganic(false);
    g2.displayGroceryInfo();



    cout << "--- Discount Applied 10% to all Product Price ---" << endl;
    cout << e1.getName() << ": " << e1.getPrice() * 0.90 << endl;
    cout << e2.getName() << ": " << e2.getPrice() * 0.90 << endl;
    cout << c1.getName() << ": " << c1.getPrice() * 0.90 << endl;
    cout << c2.getName() << ": " << c2.getPrice() * 0.90 << endl;
    cout << g1.getName() << ": " << g1.getPrice() * 0.90 << endl;
    cout << g2.getName() << ": " << g2.getPrice() * 0.90 << endl;
    
    return 0;
}