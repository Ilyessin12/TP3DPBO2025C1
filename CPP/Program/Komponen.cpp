#pragma once
#include <bits/stdc++.h>
using namespace std;

class Komponen {
    // Attributes
    private:
        string merk;
        string nama;
    
    // Constructor
    public:
        // Default constructor
        Komponen() {
            this->merk = "";
            this->nama = "";
        }
        
        // Parameterized constructor
        Komponen(string merk, string nama) {
            this->merk = merk;
            this->nama = nama;
        }
        
        // Getters
        string getMerk() {
            return this->merk;
        }
        
        string getNama() {
            return this->nama;
        }
        
        // Setters
        void setMerk(string merk) {
            this->merk = merk;
        }
        
        void setNama(string nama) {
            this->nama = nama;
        }
        
        // Destructor
        ~Komponen() {
        }
};