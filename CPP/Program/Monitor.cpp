#pragma once
#include <iostream>
#include <string>
#include "Peripheral.cpp"

using namespace std;

// Monitor adalah turunan dari Peripheral
class Monitor : public Peripheral {
private:
    float sizeInch;
    string resolution;
    int refreshRate;
    string panelType; // IPS, TN, VA, etc.
    bool hasHDR;
    int brightness; // in nits

public:
    Monitor() : Peripheral() {
    }

    Monitor(float sizeInch, string resolution, int refreshRate, string panelType,
            string merk, string nama, string interface = "HDMI") 
        : Peripheral("Monitor", interface, merk, nama, "Internal", 50) {
        this->sizeInch = sizeInch;
        this->resolution = resolution;
        this->refreshRate = refreshRate;
        this->panelType = panelType;
        this->hasHDR = false;
        this->brightness = 300;
    }

    void setSizeInch(float sizeInch) {
        this->sizeInch = sizeInch;
    }

    float getSizeInch() {
        return this->sizeInch;
    }

    void setResolution(string resolution) {
        this->resolution = resolution;
    }

    string getResolution() {
        return this->resolution;
    }

    void setRefreshRate(int refreshRate) {
        this->refreshRate = refreshRate;
    }

    int getRefreshRate() {
        return this->refreshRate;
    }

    void setPanelType(string panelType) {
        this->panelType = panelType;
    }

    string getPanelType() {
        return this->panelType;
    }

    void setHasHDR(bool hasHDR) {
        this->hasHDR = hasHDR;
    }

    bool getHasHDR() {
        return this->hasHDR;
    }

    void setBrightness(int brightness) {
        this->brightness = brightness;
    }

    int getBrightness() {
        return this->brightness;
    }

    void displayPeripheralInfo() override {
        cout << "   - Size                  : " << sizeInch << " inch" << endl;
        cout << "   - Resolution            : " << resolution << endl;
        cout << "   - Refresh Rate          : " << refreshRate << " Hz" << endl;
        cout << "   - Panel Type            : " << panelType << endl;
        cout << "   - HDR                   : " << (hasHDR ? "Yes" : "No") << endl;
        cout << "   - Brightness            : " << brightness << " nits" << endl;
    }

    ~Monitor() {
    }
};