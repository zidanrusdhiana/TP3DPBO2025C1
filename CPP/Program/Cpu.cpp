#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"

using namespace std;

class Cpu : public Komponen{
private:
    int jumlahCore;
    float kecepatanGHz;
    string coolingType;
    int cacheSize; // in MB
    string socketType;

public:
    Cpu() : Komponen() {
    }

    Cpu(int jumlahCore, float kecepatanGHz, string merk, string nama) 
        : Komponen(merk, nama) {
        this->jumlahCore = jumlahCore;
        this->kecepatanGHz = kecepatanGHz;
        this->coolingType = "Stock";
        this->cacheSize = 16;
        this->socketType = "AM4";
    }

    void setJumlahCore(int jumlahCore) {
        this->jumlahCore = jumlahCore;
    }

    void setKecepatanGHz(float kecepatanGHz) {
        this->kecepatanGHz = kecepatanGHz;
    }

    int getJumlahCore() {
        return this->jumlahCore;
    }

    float getKecepatanGHz() {
        return this->kecepatanGHz;
    }

    void setCacheSize(int cacheSize) {
        this->cacheSize = cacheSize;
    }

    int getCacheSize() {
        return this->cacheSize;
    }

    void setSocketType(string socketType) {
        this->socketType = socketType;
    }

    string getSocketType() {
        return this->socketType;
    }
    
    void setCoolingType(string coolingType) {
        this->coolingType = coolingType;
    }

    string getCoolingType() {
        return this->coolingType;
    }
    

    ~Cpu() {
    }
};