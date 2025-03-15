#pragma once
#include <bits/stdc++.h>
#include "Smartphone.cpp"
using namespace std;

class FlagshipPhone : public Smartphone {
    // Attributes
    private:
        int tahunKeluar;
        string fiturUnggulan;
    
    // Constructor
    public:
        // Default constructor
        FlagshipPhone() {
            this->tahunKeluar = 0;
            this->fiturUnggulan = "";
        }
        
        // Parameterized constructor
        FlagshipPhone(string nama, Cpu cpu, GPU gpu, Harddrive storage, int cameraMP, string osPhone, int tahunKeluar, string fiturUnggulan, int batteryCapacity = 0, float weight = 0.0) 
            : Smartphone(nama, cpu, gpu, storage, cameraMP, osPhone, batteryCapacity, weight) {
            this->tahunKeluar = tahunKeluar;
            this->fiturUnggulan = fiturUnggulan;
        }
        
        // Getters
        int getTahunKeluar() {
            return this->tahunKeluar;
        }
        
        string getFiturUnggulan() {
            return this->fiturUnggulan;
        }
        
        // Setters
        void setTahunKeluar(int tahunKeluar) {
            this->tahunKeluar = tahunKeluar;
        }
        
        void setFiturUnggulan(string fiturUnggulan) {
            this->fiturUnggulan = fiturUnggulan;
        }
        
        // Destructor
        ~FlagshipPhone() {
        }
};