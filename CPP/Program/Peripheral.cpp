#pragma once
#include <iostream>
#include <string>
#include "ElectronicDevice.cpp"

using namespace std;

// Base class for peripherals
class Peripheral : public ElectronicDevice{
private:
    string merk;
    string nama;
    string type;
    string interface; // USB, Bluetooth, etc.

public:
    Peripheral() : ElectronicDevice() {
    }

    Peripheral(string type, string interface, string merk, string nama, string powerSource, int powerConsumptionWatt) 
        : ElectronicDevice(powerSource, powerConsumptionWatt) {
        this->merk = merk;
        this->nama = nama;
        this->type = type;
        this->interface = interface;
    }

    void setMerk(string merk) {
        this->merk = merk;
    }

    string getMerk() {
        return this->merk;
    }

    void setNama(string nama) {
        this->nama = nama;
    }

    string getNama() {
        return this->nama;
    }

    void setType(string type) {
        this->type = type;
    }

    string getType() {
        return this->type;
    }

    void setInterface(string interface) {
        this->interface = interface;
    }

    string getInterface() {
        return this->interface;
    }

    // Pure virtual method untuk info khusus tiap peripheral
    virtual void displayPeripheralInfo() = 0;

    ~Peripheral() {
    }
};