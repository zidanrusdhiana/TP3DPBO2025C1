#pragma once
#include <iostream>
#include <string>
#include "Peripheral.cpp"

using namespace std;

// Mouse adalah turunan dari Peripheral
class Mouse : public Peripheral {
private:
    string mouseType; // Optical, Laser, etc.
    int dpi;
    int buttonCount;
    bool isWireless;
    bool hasRGB;

public:
    Mouse() : Peripheral() {
    }

    Mouse(string mouseType, int dpi, int buttonCount, bool isWireless,
          string merk, string nama, string interface = "USB") 
        : Peripheral("Mouse", interface, merk, nama, "Battery", 5) {
        this->mouseType = mouseType;
        this->dpi = dpi;
        this->buttonCount = buttonCount;
        this->isWireless = isWireless;
        this->hasRGB = false;
    }

    void setMouseType(string mouseType) {
        this->mouseType = mouseType;
    }

    string getMouseType() {
        return this->mouseType;
    }

    void setDpi(int dpi) {
        this->dpi = dpi;
    }

    int getDpi() {
        return this->dpi;
    }

    void setButtonCount(int buttonCount) {
        this->buttonCount = buttonCount;
    }

    int getButtonCount() {
        return this->buttonCount;
    }

    void setIsWireless(bool isWireless) {
        this->isWireless = isWireless;
    }

    bool getIsWireless() {
        return this->isWireless;
    }

    void setHasRGB(bool hasRGB) {
        this->hasRGB = hasRGB;
    }

    bool getHasRGB() {
        return this->hasRGB;
    }

    void displayPeripheralInfo() override {
        cout << "   - Mouse Type            : " << mouseType << endl;
        cout << "   - DPI                   : " << dpi << endl;
        cout << "   - Button Count          : " << buttonCount << endl;
        cout << "   - Wireless              : " << (isWireless ? "Yes" : "No") << endl;
        cout << "   - RGB                   : " << (hasRGB ? "Yes" : "No") << endl;
    }

    ~Mouse() {
    }
};