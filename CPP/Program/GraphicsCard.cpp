#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"

using namespace std;

class GraphicsCard : public Komponen{
private:
    int vramGB;
    string gpuModel;
    int cudaCores;
    int baseClock;
    int boostClock;
    string memoryType;
    int memoryBandwidth;
    string coolingType;

public:
    GraphicsCard() : Komponen() {
    }

    GraphicsCard(int vramGB, string gpuModel, int cudaCores, int baseClock, int boostClock, string memoryType, int memoryBandwidth, string coolingType, string merk, string nama)
        : Komponen(merk, nama) {
        this->vramGB = vramGB;
        this->gpuModel = gpuModel;
        this->cudaCores = cudaCores;
        this->baseClock = baseClock;
        this->boostClock = boostClock;
        this->memoryType = memoryType;
        this->memoryBandwidth = memoryBandwidth;
        this->coolingType = coolingType;
    }

    void setVramGB(int vramGB) {
        this->vramGB = vramGB;
    }

    int getVramGB() {
        return this->vramGB;
    }

    void setGpuModel(string gpuModel) {
        this->gpuModel = gpuModel;
    }

    string getGpuModel() {
        return this->gpuModel;
    }

    void setCudaCores(int cudaCores) {
        this->cudaCores = cudaCores;
    }

    int getCudaCores() {
        return this->cudaCores;
    }

    void setBaseClock(int baseClock) {
        this->baseClock = baseClock;
    }

    int getBaseClock() {
        return this->baseClock;
    }

    void setBoostClock(int boostClock) {
        this->boostClock = boostClock;
    }

    int getBoostClock() {
        return this->boostClock;
    }

    void setMemoryType(string memoryType) {
        this->memoryType = memoryType;
    }

    string getMemoryType() {
        return this->memoryType;
    }

    void setMemoryBandwidth(int memoryBandwidth) {
        this->memoryBandwidth = memoryBandwidth;
    }

    int getMemoryBandwidth() {
        return this->memoryBandwidth;
    }
    
    void setCoolingType(string coolingType) {
        this->coolingType = coolingType;
    }
    
    string getCoolingType() {
        return this->coolingType;
    }

    ~GraphicsCard() {
    }
};