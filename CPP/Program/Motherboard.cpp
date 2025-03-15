#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"

using namespace std;

class Motherboard : public Komponen {
private:
    string chipset;
    string socketType;
    string formFactor;
    int maxRamGB;
    int ramSlots;
    int pciSlots;
    int sataConnectors;
    bool hasWifi;
    bool hasBluetooth;

public:
    Motherboard() : Komponen() {
    }

    Motherboard(string chipset, string socketType, string formFactor, int maxRamGB, int ramSlots, int pciSlots, int sataConnectors, bool hasWifi, bool hasBluetooth,
                string merk, string nama) 
        : Komponen(merk, nama) {
        this->chipset = chipset;
        this->socketType = socketType;
        this->formFactor = formFactor;
        this->maxRamGB = maxRamGB;
        this->ramSlots = ramSlots;
        this->pciSlots = pciSlots;
        this->sataConnectors = sataConnectors;
        this->hasWifi = hasWifi;
        this->hasBluetooth = hasBluetooth;
    }

    void setChipset(string chipset) {
        this->chipset = chipset;
    }

    string getChipset() {
        return this->chipset;
    }

    void setSocketType(string socketType) {
        this->socketType = socketType;
    }

    string getSocketType() {
        return this->socketType;
    }

    void setFormFactor(string formFactor) {
        this->formFactor = formFactor;
    }

    string getFormFactor() {
        return this->formFactor;
    }

    void setMaxRamGB(int maxRamGB) {
        this->maxRamGB = maxRamGB;
    }

    int getMaxRamGB() {
        return this->maxRamGB;
    }

    void setRamSlots(int ramSlots) {
        this->ramSlots = ramSlots;
    }

    int getRamSlots() {
        return this->ramSlots;
    }

    void setPciSlots(int pciSlots) {
        this->pciSlots = pciSlots;
    }

    int getPciSlots() {
        return this->pciSlots;
    }

    void setSataConnectors(int sataConnectors) {
        this->sataConnectors = sataConnectors;
    }

    int getSataConnectors() {
        return this->sataConnectors;
    }

    void setHasWifi(bool hasWifi) {
        this->hasWifi = hasWifi;
    }

    bool getHasWifi() {
        return this->hasWifi;
    }

    void setHasBluetooth(bool hasBluetooth) {
        this->hasBluetooth = hasBluetooth;
    }

    bool getHasBluetooth() {
        return this->hasBluetooth;
    }

    ~Motherboard() {
    }
};