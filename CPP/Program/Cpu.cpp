#pragma once
#include <bits/stdc++.h>
#include "Komponen.cpp"
using namespace std;

class Cpu : public Komponen {
    // Attributes
    private:
        int jumlahCore;
        float kecepatanGHz;
    
    // Constructor
    public:
        // Default constructor
        Cpu() {
            this->jumlahCore = 0;
            this->kecepatanGHz = 0.0;
        }
        
        // Parameterized constructor
        Cpu(string merk, string nama, int jumlahCore, float kecepatanGHz) : Komponen(merk, nama) {
            this->jumlahCore = jumlahCore;
            this->kecepatanGHz = kecepatanGHz;
        }
        
        // Getters
        int getJumlahCore() {
            return this->jumlahCore;
        }
        
        float getKecepatanGHz() {
            return this->kecepatanGHz;
        }
        
        // Setters
        void setJumlahCore(int jumlahCore) {
            this->jumlahCore = jumlahCore;
        }
        
        void setKecepatanGHz(float kecepatanGHz) {
            this->kecepatanGHz = kecepatanGHz;
        }
        
        // Destructor
        ~Cpu() {
        }
};