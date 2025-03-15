#pragma once
#include <bits/stdc++.h>
#include "Cpu.cpp"
#include "Ram.cpp"
#include "GPU.cpp"
#include "Harddrive.cpp"
using namespace std;

class Komputer {
    // Attributes
    private:
        string nama;
        Cpu cpu;
        vector<Ram> listRam;
        GPU gpu;
        Harddrive storage;
    
    // Constructor
    public:
        // Default constructor
        Komputer() {
            this->nama = "";
        }
        
        // Parameterized constructor
        Komputer(string nama, Cpu cpu, GPU gpu, Harddrive storage) {
            this->nama = nama;
            this->cpu = cpu;
            this->gpu = gpu;
            this->storage = storage;
        }
        
        // Getters
        string getNama() {
            return this->nama;
        }
        
        Cpu getCpu() {
            return this->cpu;
        }
        
        const vector<Ram>& getListRam () const{
            return this->listRam;
        }
        
        GPU getGpu() {
            return this->gpu;
        }
        
        Harddrive getStorage() {
            return this->storage;
        }
        
        // Setters
        void setNama(string nama) {
            this->nama = nama;
        }
        
        void setCpu(Cpu cpu) {
            this->cpu = cpu;
        }
        
        void setGpu(GPU gpu) {
            this->gpu = gpu;
        }
        
        void setStorage(Harddrive storage) {
            this->storage = storage;
        }
        
        // Methods
        void addRam(Ram ram) {
            this->listRam.push_back(ram);
        }
        
        // Destructor
        ~Komputer() {
        }
};