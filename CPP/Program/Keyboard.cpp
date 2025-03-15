#pragma once
#include <iostream>
#include <string>
#include "Peripheral.cpp"

using namespace std;

// Keyboard adalah turunan dari Peripheral
class Keyboard : public Peripheral {
private:
    string keyboardType; // Mechanical, Membrane, etc.
    string layout; // QWERTY, DVORAK, etc.
    bool hasBacklight;
    bool hasMacro;
    string switchType; // Cherry MX, etc.

public:
    Keyboard() : Peripheral() {
    }

    Keyboard(string keyboardType, string layout, bool hasBacklight, 
             string merk, string nama, string interface = "USB") 
        : Peripheral("Keyboard", interface, merk, nama, "Internal", 5) {
        this->keyboardType = keyboardType;
        this->layout = layout;
        this->hasBacklight = hasBacklight;
        this->hasMacro = false;
        this->switchType = keyboardType == "Mechanical" ? "Cherry MX Red" : "N/A";
    }

    void setKeyboardType(string keyboardType) {
        this->keyboardType = keyboardType;
        if (keyboardType != "Mechanical") {
            this->switchType = "N/A";
        }
    }

    string getKeyboardType() {
        return this->keyboardType;
    }

    void setLayout(string layout) {
        this->layout = layout;
    }

    string getLayout() {
        return this->layout;
    }

    void setHasBacklight(bool hasBacklight) {
        this->hasBacklight = hasBacklight;
    }

    bool getHasBacklight() {
        return this->hasBacklight;
    }

    void setHasMacro(bool hasMacro) {
        this->hasMacro = hasMacro;
    }

    bool getHasMacro() {
        return this->hasMacro;
    }

    void setSwitchType(string switchType) {
        if (this->keyboardType == "Mechanical") {
            this->switchType = switchType;
        }
    }

    string getSwitchType() {
        return this->switchType;
    }

    void displayPeripheralInfo() override {
        cout << "   - Keyboard Type         : " << keyboardType << endl;
        cout << "   - Layout                : " << layout << endl;
        cout << "   - Backlight             : " << (hasBacklight ? "Yes" : "No") << endl;
        cout << "   - Macro Keys            : " << (hasMacro ? "Yes" : "No") << endl;
        if (keyboardType == "Mechanical") {
            cout << "   - Switch Type           : " << switchType << endl;
        }
    }

    ~Keyboard() {
    }
};