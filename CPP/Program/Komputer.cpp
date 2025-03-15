#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "ElectronicDevice.cpp"
#include "Cpu.cpp"
#include "Harddrive.cpp"
#include "Ram.cpp"
#include "Motherboard.cpp"
#include "PowerSupply.cpp"
#include "GraphicsCard.cpp"
#include "Peripheral.cpp"

using namespace std;

// Komputer adalah turunan dari ElectronicDevice
class Komputer : public ElectronicDevice{
protected:
    string nama;
    Cpu cpu;
    Motherboard motherboard;
    vector<Ram> ramList;
    vector<Harddrive> harddriveList;
    PowerSupply powerSupply;
    vector<GraphicsCard> gpuList;
    vector<Peripheral*> peripherals;
    string connectionType;
    string coolingType;

public:
    Komputer() : ElectronicDevice() {
    }

    Komputer(string nama, Cpu cpu, Motherboard motherboard, vector<Ram> ramList, 
             vector<Harddrive> harddriveList, PowerSupply powerSupply, vector<GraphicsCard> gpuList, vector<Peripheral*> peripherals, string connectionType, string coolingType,
             string powerSource, int powerConsumptionWatt) 
        : ElectronicDevice(powerSource, powerConsumptionWatt) {
        this->nama = nama;
        this->cpu = cpu;
        this->motherboard = motherboard;
        this->ramList = ramList;
        this->harddriveList = harddriveList;
        this->powerSupply = powerSupply;
        this->gpuList = gpuList;
        this->peripherals = peripherals;
        this->connectionType = connectionType;
        this->coolingType = coolingType;
    }

    void setNama(string nama) {
        this->nama = nama;
    }

    void setCpu(Cpu cpu) {
        this->cpu = cpu;
    }
    
    void setMotherboard(Motherboard motherboard) {
        this->motherboard = motherboard;
    }

    void setRamList(vector<Ram> ramList) {
        this->ramList = ramList;
    }    
   
    void setHarddriveList(vector<Harddrive> harddriveList) {
        this->harddriveList = harddriveList;
    }
    
    void setPowerSupply(PowerSupply powerSupply) {
        this->powerSupply = powerSupply;
    }
    
    void setGpuList(vector<GraphicsCard> gpuList) {
        this->gpuList = gpuList;
    }

    void addRam(Ram ram) {
        this->ramList.push_back(ram);
    }
    
    void addHarddrive(Harddrive harddrive) {
        this->harddriveList.push_back(harddrive);
    }
    
    void addGraphicsCard(GraphicsCard gpu) {
        this->gpuList.push_back(gpu);
    }
    
    void addPeripheral(Peripheral* peripheral) {
        this->peripherals.push_back(peripheral);
    }

    string getNama() {
        return this->nama;
    }

    Cpu getCpu() {
        return this->cpu;
    }
    
    Motherboard getMotherboard() {
        return this->motherboard;
    }

    vector<Ram> getRamList() {
        return this->ramList;
    }

    vector<Harddrive> getHarddriveList() {
        return this->harddriveList;
    }
    
    PowerSupply getPowerSupply() {
        return this->powerSupply;
    }
    
    vector<GraphicsCard> getGpuList() {
        return this->gpuList;
    }
    
    vector<Peripheral*> getPeripherals() {
        return this->peripherals;
    }
    
    int getTotalRamCapacity() {
        int total = 0;
        for (Ram& ram : ramList) {
            total += ram.getKapasitasGB();
        }
        return total;
    }
    
    int getTotalStorageCapacity() {
        int total = 0;
        for (Harddrive& hd : harddriveList) {
            total += hd.getKapasitasGB();
        }
        return total;
    }
    
    void setConnectionType(string connectionType) {
        this->connectionType = connectionType;
    }

    string getConnectionType() {
        return this->connectionType;
    }
    
    void setCoolingType(string coolingType) {
        this->coolingType = coolingType;
    }

    string getCoolingType() {
        return this->coolingType;
    }

    ~Komputer() {
        for (Peripheral* peripheral : peripherals) {
            delete peripheral;
        }
        peripherals.clear();
    }
};