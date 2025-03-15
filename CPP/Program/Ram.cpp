#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"

using namespace std;

class Ram : public Komponen{
private:
    int kapasitasGB;
    string ddr;
    int speedMHz;
    bool dualChannel;

public:
    Ram() : Komponen() {
    }

    Ram(int kapasitasGB, string ddr, int speedMhz, bool dualChannel, string merk, string nama) 
        : Komponen(merk, nama) {
        this->kapasitasGB = kapasitasGB;
        this->ddr = ddr;
        this->speedMHz = speedMhz;
        this->dualChannel = dualChannel;
    }

    void setKapasitasGB(int kapasitasGB) {
        this->kapasitasGB = kapasitasGB;
    }

    void setDdr(string ddr) {
        this->ddr = ddr;
    }

    int getKapasitasGB() {
        return this->kapasitasGB;
    }

    string getDdr() {
        return this->ddr;
    }

    void setSpeedMHz(int speedMHz) {
        this->speedMHz = speedMHz;
    }

    int getSpeedMHz() {
        return this->speedMHz;
    }

    void setDualChannel(bool dualChannel) {
        this->dualChannel = dualChannel;
    }

    bool isDualChannel() {
        return this->dualChannel;
    }

    ~Ram() {
    }
};