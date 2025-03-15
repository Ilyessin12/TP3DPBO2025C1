#pragma once
#include <bits/stdc++.h>
#include "Komponen.cpp"
using namespace std;

class Harddrive : public Komponen {
    // Attributes
    private:
        int kapasitasGB;
        string tipeDrive;
    
    // Constructor
    public:
        // Default constructor
        Harddrive() {
            this->kapasitasGB = 0;
            this->tipeDrive = "";
        }
        
        // Parameterized constructor
        Harddrive(string merk, string nama, int kapasitasGB, string tipeDrive) : Komponen(merk, nama) {
            this->kapasitasGB = kapasitasGB;
            this->tipeDrive = tipeDrive;
        }
        
        // Getters
        int getKapasitasGB() {
            return this->kapasitasGB;
        }
        
        string getTipeDrive() {
            return this->tipeDrive;
        }
        
        // Setters
        void setKapasitasGB(int kapasitasGB) {
            this->kapasitasGB = kapasitasGB;
        }
        
        void setTipeDrive(string tipeDrive) {
            this->tipeDrive = tipeDrive;
        }
        
        // Destructor
        ~Harddrive() {
        }
};