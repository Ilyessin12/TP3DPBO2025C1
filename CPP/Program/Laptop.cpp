#pragma once
#include <bits/stdc++.h>
#include "Komputer.cpp"
#include "Portable.cpp"
using namespace std;

class Laptop : public Komputer, public Portable {
    // Attributes
    private:
        string tipeLaptop;
        string osLaptop;
    
    // Constructor
    public:
        // Default constructor
        Laptop() {
            this->tipeLaptop = "";
            this->osLaptop = "";
        }
        
        // Parameterized constructor
        Laptop(string nama, Cpu cpu, GPU gpu, Harddrive storage, int batteryCapacity, float weight, string tipeLaptop, string osLaptop) 
            : Komputer(nama, cpu, gpu, storage), Portable(batteryCapacity, weight) {
            this->tipeLaptop = tipeLaptop;
            this->osLaptop = osLaptop;
        }
        
        // Getters
        string getTipeLaptop() {
            return this->tipeLaptop;
        }
        
        string getOsLaptop() {
            return this->osLaptop;
        }
        
        // Setters
        void setTipeLaptop(string tipeLaptop) {
            this->tipeLaptop = tipeLaptop;
        }
        
        void setOsLaptop(string osLaptop) {
            this->osLaptop = osLaptop;
        }
        
        // Destructor
        ~Laptop() {
        }
};