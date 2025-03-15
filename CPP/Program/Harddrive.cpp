#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"

using namespace std;

class Harddrive : public Komponen{
private:
    int kapasitasGB;
    string tipeDrive;
    int readSpeedMBps;
    int writeSpeedMBps;
    string formFactor; // 2.5 inch, 3.5 inch, etc.
    string interface; // SATA III, NVMe, etc.

public:
    Harddrive() : Komponen() {
    }

    Harddrive(int kapasitasGB, string tipeDrive, string merk, string nama) 
        : Komponen(merk, nama) {
        this->kapasitasGB = kapasitasGB;
        this->tipeDrive = tipeDrive;
        this->readSpeedMBps = tipeDrive == "SSD" ? 550 : 120;
        this->writeSpeedMBps = tipeDrive == "SSD" ? 520 : 100;
        this->formFactor = tipeDrive == "SSD" ? "2.5 inch" : "3.5 inch";
        this->interface = tipeDrive == "SSD" ? "SATA III" : "SATA III";
    }

    void setKapasitasGB(int kapasitasGB) {
        this->kapasitasGB = kapasitasGB;
    }

    void setTipeDrive(string tipeDrive) {
        this->tipeDrive = tipeDrive;
    }

    int getKapasitasGB() {
        return this->kapasitasGB;
    }

    string getTipeDrive() {
        return this->tipeDrive;
    }

    void setReadSpeedMBps(int readSpeedMBps) {
        this->readSpeedMBps = readSpeedMBps;
    }

    int getReadSpeedMBps() {
        return this->readSpeedMBps;
    }

    void setWriteSpeedMBps(int writeSpeedMBps) {
        this->writeSpeedMBps = writeSpeedMBps;
    }

    int getWriteSpeedMBps() {
        return this->writeSpeedMBps;
    }

    void setFormFactor(string formFactor) {
        this->formFactor = formFactor;
    }

    string getFormFactor() {
        return this->formFactor;
    }

    void setInterface(string interface) {
        this->interface = interface;
    }

    string getInterface() {
        return this->interface;
    }

    ~Harddrive() {
    }
};