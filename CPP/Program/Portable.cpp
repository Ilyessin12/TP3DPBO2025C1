#pragma once
#include <bits/stdc++.h>
using namespace std;

class Portable {
    // Attributes
    private:
        int batteryCapacity;
        float weight;
    
    // Constructor
    public:
        // Default constructor
        Portable() {
            this->batteryCapacity = 0;
            this->weight = 0.0;
        }
        
        // Parameterized constructor
        Portable(int batteryCapacity, float weight) {
            this->batteryCapacity = batteryCapacity;
            this->weight = weight;
        }
        
        // Getters
        int getBatteryCapacity() {
            return this->batteryCapacity;
        }
        
        float getWeight() {
            return this->weight;
        }
        
        // Setters
        void setBatteryCapacity(int batteryCapacity) {
            this->batteryCapacity = batteryCapacity;
        }
        
        void setWeight(float weight) {
            this->weight = weight;
        }
        
        // Destructor
        ~Portable() {
        }
};