#pragma once
#include <bits/stdc++.h>
#include "Komponen.cpp"
using namespace std;

class Ram : public Komponen {
    // Attributes
    private:
        int kapasitasGB;
        string ddr;
    
    // Constructor
    public:
        // Default constructor
        Ram() {
            this->kapasitasGB = 0;
            this->ddr = "";
        }
        
        // Parameterized constructor
        Ram(string merk, string nama, int kapasitasGB, string ddr) : Komponen(merk, nama) {
            this->kapasitasGB = kapasitasGB;
            this->ddr = ddr;
        }
        
        // Getters
        int getKapasitasGB() {
            return this->kapasitasGB;
        }
        
        string getDdr() {
            return this->ddr;
        }
        
        // Setters
        void setKapasitasGB(int kapasitasGB) {
            this->kapasitasGB = kapasitasGB;
        }
        
        void setDdr(string ddr) {
            this->ddr = ddr;
        }
        
        // Destructor
        ~Ram() {
        }
};