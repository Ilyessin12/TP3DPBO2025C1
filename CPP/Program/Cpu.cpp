#pragma once
#include <bits/stdc++.h>
#include "Komponen.cpp"
using namespace std;

class Cpu : public Komponen {
    // Attributes
    private:
        int jumlahCore;
        float kecepahanGHz;
    
    // Constructor
    public:
        // Default constructor
        Cpu() {
            this->jumlahCore = 0;
            this->kecepahanGHz = 0.0;
        }
        
        // Parameterized constructor
        Cpu(string merk, string nama, int jumlahCore, float kecepahanGHz) : Komponen(merk, nama) {
            this->jumlahCore = jumlahCore;
            this->kecepahanGHz = kecepahanGHz;
        }
        
        // Getters
        int getJumlahCore() {
            return this->jumlahCore;
        }
        
        float getKecepahanGHz() {
            return this->kecepahanGHz;
        }
        
        // Setters
        void setJumlahCore(int jumlahCore) {
            this->jumlahCore = jumlahCore;
        }
        
        void setKecepahanGHz(float kecepahanGHz) {
            this->kecepahanGHz = kecepahanGHz;
        }
        
        // Destructor
        ~Cpu() {
        }
};