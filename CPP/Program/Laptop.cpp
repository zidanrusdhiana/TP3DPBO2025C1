#pragma once
#include <iostream>
#include <string>
#include "Komputer.cpp"

using namespace std;

// Laptop adalah turunan dari Komputer - menambahkan fitur khusus laptop
class Laptop : public Komputer {
private:
    float screenSize;
    string resolution;
    int batteryCapacity; // in mAh
    int batteryLife; // in hours
    float weight; // in kg
    bool hasWebcam;
    bool hasTouchscreen;
    bool hasBacklight;

public:
    Laptop() : Komputer() {
    }

    Laptop(string nama, Cpu cpu, Motherboard motherboard, vector<Ram> ramList, 
           vector<Harddrive> harddriveList, PowerSupply powerSupply, vector <GraphicsCard> gpuList, vector<Peripheral*> peripherals, string connectionType, string coolingType,
           float screenSize, string resolution, int batteryCapacity, float weight, bool hasWebcam, bool hasTouchscreen, bool hasBacklight,
           string powerSource = "Battery/AC", int powerConsumptionWatt = 65) 
        : Komputer(nama, cpu, motherboard, ramList, harddriveList, powerSupply, gpuList, peripherals, connectionType, coolingType,
                  powerSource, powerConsumptionWatt) {
        this->screenSize = screenSize;
        this->resolution = resolution;
        this->batteryCapacity = batteryCapacity;
        this->batteryLife = calculateBatteryLife();
        this->weight = weight;
        this->hasWebcam = hasWebcam;
        this->hasTouchscreen = hasTouchscreen;
        this->hasBacklight = hasBacklight;
    }

    void setScreenSize(float screenSize) {
        this->screenSize = screenSize;
    }

    float getScreenSize() {
        return this->screenSize;
    }

    void setResolution(string resolution) {
        this->resolution = resolution;
    }

    string getResolution() {
        return this->resolution;
    }

    void setBatteryCapacity(int batteryCapacity) {
        this->batteryCapacity = batteryCapacity;
        this->batteryLife = calculateBatteryLife();
    }

    int getBatteryCapacity() {
        return this->batteryCapacity;
    }

    int getBatteryLife() {
        return this->batteryLife;
    }

    void setWeight(float weight) {
        this->weight = weight;
    }

    float getWeight() {
        return this->weight;
    }

    void setHasWebcam(bool hasWebcam) {
        this->hasWebcam = hasWebcam;
    }

    bool getHasWebcam() {
        return this->hasWebcam;
    }

    void setHasTouchscreen(bool hasTouchscreen) {
        this->hasTouchscreen = hasTouchscreen;
    }

    bool getHasTouchscreen() {
        return this->hasTouchscreen;
    }

    void setHasBacklight(bool hasBacklight) {
        this->hasBacklight = hasBacklight;
    }

    bool getHasBacklight() {
        return this->hasBacklight;
    }

    // Menghitung estimasi waktu pemakaian baterai dalam jam
    int calculateBatteryLife() {
        return batteryCapacity / powerSupply.getWattage();
    }

    ~Laptop() {
    }

};