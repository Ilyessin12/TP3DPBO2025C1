#pragma once
#include <bits/stdc++.h>
#include "Komputer.cpp"
using namespace std;

class Smartphone : public Komputer {
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
        Smartphone(string nama, Cpu cpu, GPU gpu, Harddrive storage, int cameraMP, string osPhone) 
            : Komputer(nama, cpu, gpu, storage) {
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