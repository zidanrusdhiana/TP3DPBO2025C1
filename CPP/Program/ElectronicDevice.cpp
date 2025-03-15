#pragma once
#include <iostream>
#include <string>

using namespace std;

// Base class untuk semua perangkat elektronik
class ElectronicDevice {
private:
    string powerSource; // AC, DC, USB, etc.
    int powerConsumptionWatt;

public:
    ElectronicDevice() {
    }

    ElectronicDevice(string powerSource, int powerConsumptionWatt) {
        this->powerSource = powerSource;
        this->powerConsumptionWatt = powerConsumptionWatt;
    }

    void setPowerSource(string powerSource) {
        this->powerSource = powerSource;
    }

    void setPowerConsumptionWatt(int powerConsumptionWatt) {
        this->powerConsumptionWatt = powerConsumptionWatt;
    }

    string getPowerSource() {
        return this->powerSource;
    }

    int getPowerConsumptionWatt() {
        return this->powerConsumptionWatt;
    }


    ~ElectronicDevice() {
    }
};