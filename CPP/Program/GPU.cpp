#pragma once
#include <bits/stdc++.h>
#include "Komponen.cpp"
using namespace std;

class GPU : public Komponen {
    // Attributes
    private:
        int vramGB;
        string memoryType;
    
    // Constructor
    public:
        // Default constructor
        GPU() {
            this->vramGB = 0;
            this->memoryType = "";
        }
        
        // Parameterized constructor
        GPU(string merk, string nama, int vramGB, string memoryType) : Komponen(merk, nama) {
            this->vramGB = vramGB;
            this->memoryType = memoryType;
        }
        
        // Getters
        int getVramGB() {
            return this->vramGB;
        }
        
        string getMemoryType() {
            return this->memoryType;
        }
        
        // Setters
        void setVramGB(int vramGB) {
            this->vramGB = vramGB;
        }
        
        void setMemoryType(string memoryType) {
            this->memoryType = memoryType;
        }
        
        // Destructor
        ~GPU() {
        }
};