#pragma once
#include <bits/stdc++.h>
#include "Komputer.cpp"
#include "Portable.cpp"
using namespace std;

class Smartphone : public Komputer, public Portable {
    // Attributes
    private:
        int cameraMP;
        string osPhone;
    
    // Constructor
    public:
        // Default constructor
        Smartphone() {
            this->cameraMP = 0;
            this->osPhone = "";
        }
        
        // Parameterized constructor
        Smartphone(string nama, Cpu cpu, GPU gpu, Harddrive storage, int cameraMP, string osPhone, int batteryCapacity = 0, float weight = 0.0) 
            : Komputer(nama, cpu, gpu, storage), Portable(batteryCapacity, weight) {
            this->cameraMP = cameraMP;
            this->osPhone = osPhone;
        }
        
        // Getters
        int getCameraMP() {
            return this->cameraMP;
        }
        
        string getOsPhone() {
            return this->osPhone;
        }
        
        // Setters
        void setCameraMP(int cameraMP) {
            this->cameraMP = cameraMP;
        }
        
        void setOsPhone(string osPhone) {
            this->osPhone = osPhone;
        }
        
        // Destructor
        ~Smartphone() {
        }
};