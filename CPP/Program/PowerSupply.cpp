#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"

using namespace std;

class PowerSupply : public Komponen {
private:
    int wattage;
    string certification; // 80+ Bronze, Gold, Platinum, etc.
    bool modular; 
    float efficiency;

public:
    PowerSupply() : Komponen() {
    }

    PowerSupply(int wattage, string certification, bool modular, string merk, string nama) 
        : Komponen(merk, nama) {
        this->wattage = wattage;
        this->certification = certification;
        this->modular = modular;
        
        if (certification == "80+ Titanium") {
            this->efficiency = 0.94f;
        } else if (certification == "80+ Platinum") {
            this->efficiency = 0.92f;
        } else if (certification == "80+ Gold") {
            this->efficiency = 0.90f;
        } else if (certification == "80+ Silver") {
            this->efficiency = 0.88f;
        } else if (certification == "80+ Bronze") {
            this->efficiency = 0.85f;
        } else {
            this->efficiency = 0.80f;
        }
    }

    void setWattage(int wattage) {
        this->wattage = wattage;
    }

    int getWattage() {
        return this->wattage;
    }

    void setCertification(string certification) {
        this->certification = certification;
        
        if (certification == "80+ Titanium") {
            this->efficiency = 0.94f;
        } else if (certification == "80+ Platinum") {
            this->efficiency = 0.92f;
        } else if (certification == "80+ Gold") {
            this->efficiency = 0.90f;
        } else if (certification == "80+ Silver") {
            this->efficiency = 0.88f;
        } else if (certification == "80+ Bronze") {
            this->efficiency = 0.85f;
        } else {
            this->efficiency = 0.80f;
        }
    }

    string getCertification() {
        return this->certification;
    }

    void setModular(bool modular) {
        this->modular = modular;
    }

    bool isModular() {
        return this->modular;
    }

    float getEfficiency() {
        return this->efficiency;
    }

    int calculateActualPowerOutput(int requiredWattage) {
        return (int)(requiredWattage / this->efficiency);
    }

    ~PowerSupply() {
    }
};