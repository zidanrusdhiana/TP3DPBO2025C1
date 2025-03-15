#include <bits/stdc++.h>
#include "ElectronicDevice.cpp"
#include "Komponen.cpp"
#include "Motherboard.cpp"
#include "PowerSupply.cpp"
#include "GraphicsCard.cpp"
#include "Cpu.cpp"
#include "Ram.cpp"
#include "Harddrive.cpp"
#include "Peripheral.cpp"
#include "Monitor.cpp"
#include "Keyboard.cpp"
#include "Mouse.cpp"
#include "Komputer.cpp"
#include "Laptop.cpp"

using namespace std;

int main() {
    // ios::sync_with_stdio(0); cin.tie();

    Cpu cpu(8, 3.4, "Intel", "Core i7");
    Ram ram1(16, "DDR5", 3200, true, "Corsair", "Vengeance");
    Harddrive harddrive(1024, "SSD", "Samsung", "Evo");
    Motherboard motherboard("B450", "AM4", "ATX", 128, 4, 2, 6, true, true, "Asus", "TUF Gaming");
    PowerSupply powerSupply(750, "80+ Gold", true, "Corsair", "RM750x");
    GraphicsCard gpu(8, "RTX 3070", 5888, 1500, 1725, "GDDR6", 448, "Dual Fan", "Asus", "TUF Gaming");
    Peripheral* peripherals[3] = {
        new Monitor(24.5, "1920x1080", 240, "IPS", "Asus", "VG259QM"),
        new Keyboard("Mechanical", "QWERTY", true, "Logitech", "G Pro X"),
        new Mouse("Optical", 16000, 6, true, "Logitech", "G Pro")
    };

    Laptop laptop("Asus ROG Zephyrus G14", cpu, motherboard, {Ram(8, "DDR4", 1600, false, "Corsair", "Vengeance")}, {harddrive, Harddrive(1024, "SSD", "Samsung", "Evo")}, powerSupply, {}, {}, "Ethernet", "Air Cooling", 14, "2560x1440", 7500, 1.6, true, false, true);

    Komputer komputer("My favorite pc gw", cpu, motherboard, {ram1}, {harddrive}, powerSupply, {gpu}, {peripherals[0], peripherals[1], peripherals[2]}, "Ethernet", "Liquid Cooling", "AC", 1000);
    komputer.addRam(Ram(16, "DDR5", 3200, true, "Kingston", "FURY"));
    komputer.addHarddrive(Harddrive(2048, "HDD", "Seagate", "Barracuda"));
    komputer.addGraphicsCard(GraphicsCard(6, "GTX 1660", 1408, 1530, 1785, "GDDR5", 192, "Dual Fan", "MSI", "Gaming X"));

    // Display information
    cout << "=== INFORMASI KOMPUTER ===" << endl;
    cout << "Nama                : " << komputer.getNama() << endl;
    cout << "Power Source        : " << komputer.getPowerSource() << endl;
    cout << "Power Consumption   : " << komputer.getPowerConsumptionWatt() << " Watt" << endl;

    // CPU Info
    cout << "\n-- CPU --" << endl;
    cout << "Merk                : " << komputer.getCpu().getMerk() << endl;
    cout << "Nama                : " << komputer.getCpu().getNama() << endl;
    cout << "Jumlah Core         : " << komputer.getCpu().getJumlahCore() << endl;
    cout << "Kecepatan           : " << komputer.getCpu().getKecepatanGHz() << " GHz" << endl;
    cout << "Socket Type         : " << komputer.getCpu().getSocketType() << endl;
    cout << "Cache Size          : " << komputer.getCpu().getCacheSize() << " MB" << endl;
    cout << "Cooling Type        : " << komputer.getCpu().getCoolingType() << endl;

    // Motherboard Info
    cout << "\n-- MOTHERBOARD --" << endl;
    cout << "Merk                : " << komputer.getMotherboard().getMerk() << endl;
    cout << "Nama                : " << komputer.getMotherboard().getNama() << endl;
    cout << "Socket Type         : " << komputer.getMotherboard().getSocketType() << endl;
    cout << "Form Factor         : " << komputer.getMotherboard().getFormFactor() << endl;
    cout << "Max RAM Capacity    : " << komputer.getMotherboard().getMaxRamGB() << " GB" << endl;
    cout << "RAM Slot Count      : " << komputer.getMotherboard().getRamSlots() << endl;
    cout << "PCIe Slot Count     : " << komputer.getMotherboard().getPciSlots() << endl;
    cout << "SATA Port Count     : " << komputer.getMotherboard().getSataConnectors() << endl;
    cout << "Has WiFi            : " << (komputer.getMotherboard().getHasWifi() ? "Yes" : "No") << endl;
    cout << "Has Bluetooth       : " << (komputer.getMotherboard().getHasBluetooth() ? "Yes" : "No") << endl;

    // RAM Info
    cout << "\n-- RAM (Total: " << komputer.getTotalRamCapacity() << " GB) --" << endl;
    for (int i = 0; i < komputer.getRamList().size(); i++) {
        if(i > 0) cout << endl;
        cout << "RAM #" << (i+1) << endl;
        cout << "Merk                : " << komputer.getRamList()[i].getMerk() << endl;
        cout << "Nama                : " << komputer.getRamList()[i].getNama() << endl;
        cout << "Kapasitas           : " << komputer.getRamList()[i].getKapasitasGB() << " GB" << endl;
        cout << "Tipe                : " << komputer.getRamList()[i].getDdr() << endl;
        cout << "Speed               : " << komputer.getRamList()[i].getSpeedMHz() << " MHz" << endl;
        cout << "Dual Channel        : " << (komputer.getRamList()[i].isDualChannel() ? "Yes" : "No") << endl;
    }

    // Storage Info
    cout << "\n-- STORAGE (Total: " << komputer.getTotalStorageCapacity() << " GB) --" << endl;
    for (int i = 0; i < komputer.getHarddriveList().size(); i++) {
        if(i > 0) cout << endl;
        cout << "Storage #" << (i+1) << endl;
        cout << "Merk                : " << komputer.getHarddriveList()[i].getMerk() << endl;
        cout << "Nama                : " << komputer.getHarddriveList()[i].getNama() << endl;
        cout << "Kapasitas           : " << komputer.getHarddriveList()[i].getKapasitasGB() << " GB" << endl;
        cout << "Tipe                : " << komputer.getHarddriveList()[i].getTipeDrive() << endl;
        cout << "Read Speed          : " << komputer.getHarddriveList()[i].getReadSpeedMBps() << " MBps" << endl;
        cout << "Write Speed         : " << komputer.getHarddriveList()[i].getWriteSpeedMBps() << " MBps" << endl;
        cout << "Form Factor         : " << komputer.getHarddriveList()[i].getFormFactor() << endl;
        cout << "Interface           : " << komputer.getHarddriveList()[i].getInterface() << endl;
    }

    // GPU Info
    if (komputer.getGpuList().size() > 0) {
        cout << "\n-- GPU --" << endl;
        for (int i = 0; i < komputer.getGpuList().size(); i++) {
            if(i > 0) cout << endl;
            cout << "GPU #" << (i+1) << endl;
            cout << "Merk                : " << komputer.getGpuList()[i].getMerk() << endl;
            cout << "Nama                : " << komputer.getGpuList()[i].getNama() << endl;
            cout << "VRAM                : " << komputer.getGpuList()[i].getVramGB() << " GB" << endl;
            cout << "Cuda Cores          : " << komputer.getGpuList()[i].getCudaCores() << endl;
            cout << "Base Clock          : " << komputer.getGpuList()[i].getBaseClock() << " MHz" << endl;
            cout << "Boost Clock         : " << komputer.getGpuList()[i].getBoostClock() << " MHz" << endl;
            cout << "Memory Type         : " << komputer.getGpuList()[i].getMemoryType() << endl;
            cout << "Memory Bandwidth    : " << komputer.getGpuList()[i].getMemoryBandwidth() << " GBps" << endl;
            cout << "Cooling Type        : " << komputer.getGpuList()[i].getCoolingType() << endl;
        }
    }

    // Power Supply Info
    cout << "\n-- POWER SUPPLY --" << endl;
    cout << "Merk                : " << komputer.getPowerSupply().getMerk() << endl;
    cout << "Nama                : " << komputer.getPowerSupply().getNama() << endl;
    cout << "Wattage             : " << komputer.getPowerSupply().getWattage() << " Watt" << endl;
    cout << "Certification       : " << komputer.getPowerSupply().getCertification() << endl;
    cout << "Power Output        : " << komputer.getPowerSupply().calculateActualPowerOutput(komputer.getPowerSupply().getWattage()) << " Watt" << endl;

    // Peripheral Info
    if (komputer.getPeripherals().size() > 0) {
        cout << "\n-- PERIPHERALS --" << endl;
        for (int i = 0; i < komputer.getPeripherals().size(); i++) {
            cout << "Peripheral #" << (i+1) << endl;
            cout << "Tipe                : " << komputer.getPeripherals()[i]->getType() << endl;
            cout << "Merk                : " << komputer.getPeripherals()[i]->getMerk() << endl;
            cout << "Nama                : " << komputer.getPeripherals()[i]->getNama() << endl;
            komputer.getPeripherals()[i]->displayPeripheralInfo(); cout << endl;
        }
    }

    // Cooling Info
    cout << "\n-- COOLING SYSTEM --" << endl;
    cout << "Cooling Type        : " << komputer.getCoolingType() << endl;

    // Networking Info
    cout << "\n-- NETWORK CONNECTION --" << endl;
    cout << "Connection Type     : " << komputer.getConnectionType() << endl;


    cout << "\n##############################################" << endl;

    // Display information
    cout << "\n=== INFORMASI LAPTOP ===" << endl;
    cout << "Nama                : " << laptop.getNama() << endl;
    cout << "Power Source        : " << laptop.getPowerSource() << endl;
    cout << "Power Consumption   : " << laptop.getPowerConsumptionWatt() << " Watt" << endl;

    // CPU Info
    cout << "\n-- CPU --" << endl;
    cout << "Merk                : " << laptop.getCpu().getMerk() << endl;
    cout << "Nama                : " << laptop.getCpu().getNama() << endl;
    cout << "Jumlah Core         : " << laptop.getCpu().getJumlahCore() << endl;
    cout << "Kecepatan           : " << laptop.getCpu().getKecepatanGHz() << " GHz" << endl;
    cout << "Socket Type         : " << laptop.getCpu().getSocketType() << endl;
    cout << "Cache Size          : " << laptop.getCpu().getCacheSize() << " MB" << endl;
    cout << "Cooling Type        : " << laptop.getCpu().getCoolingType() << endl;

    // Motherboard Info
    cout << "\n-- MOTHERBOARD --" << endl;
    cout << "Merk                : " << laptop.getMotherboard().getMerk() << endl;
    cout << "Nama                : " << laptop.getMotherboard().getNama() << endl;
    cout << "Socket Type         : " << laptop.getMotherboard().getSocketType() << endl;
    cout << "Form Factor         : " << laptop.getMotherboard().getFormFactor() << endl;
    cout << "Max RAM Capacity    : " << laptop.getMotherboard().getMaxRamGB() << " GB" << endl;
    cout << "RAM Slot Count      : " << laptop.getMotherboard().getRamSlots() << endl;
    cout << "PCIe Slot Count     : " << laptop.getMotherboard().getPciSlots() << endl;
    cout << "SATA Port Count     : " << laptop.getMotherboard().getSataConnectors() << endl;
    cout << "Has WiFi            : " << (laptop.getMotherboard().getHasWifi() ? "Yes" : "No") << endl;
    cout << "Has Bluetooth       : " << (laptop.getMotherboard().getHasBluetooth() ? "Yes" : "No") << endl;

    // RAM Info
    cout << "\n-- RAM (Total: " << laptop.getTotalRamCapacity() << " GB) --" << endl;
    for (int i = 0; i < laptop.getRamList().size(); i++) {
        if(i > 0) cout << endl;
        cout << "RAM #" << (i+1) << endl;
        cout << "Merk                : " << laptop.getRamList()[i].getMerk() << endl;
        cout << "Nama                : " << laptop.getRamList()[i].getNama() << endl;
        cout << "Kapasitas           : " << laptop.getRamList()[i].getKapasitasGB() << " GB" << endl;
        cout << "Tipe                : " << laptop.getRamList()[i].getDdr() << endl;
        cout << "Speed               : " << laptop.getRamList()[i].getSpeedMHz() << " MHz" << endl;
        cout << "Dual Channel        : " << (laptop.getRamList()[i].isDualChannel() ? "Yes" : "No") << endl;
    }

    // Storage Info
    cout << "\n-- STORAGE (Total: " << laptop.getTotalStorageCapacity() << " GB) --" << endl;
    for (int i = 0; i < laptop.getHarddriveList().size(); i++) {
        if(i > 0) cout << endl;
        cout << "Storage #" << (i+1) << endl;
        cout << "Merk                : " << laptop.getHarddriveList()[i].getMerk() << endl;
        cout << "Nama                : " << laptop.getHarddriveList()[i].getNama() << endl;
        cout << "Kapasitas           : " << laptop.getHarddriveList()[i].getKapasitasGB() << " GB" << endl;
        cout << "Tipe                : " << laptop.getHarddriveList()[i].getTipeDrive() << endl;
        cout << "Read Speed          : " << laptop.getHarddriveList()[i].getReadSpeedMBps() << " MBps" << endl;
        cout << "Write Speed         : " << laptop.getHarddriveList()[i].getWriteSpeedMBps() << " MBps" << endl;
        cout << "Form Factor         : " << laptop.getHarddriveList()[i].getFormFactor() << endl;
        cout << "Interface           : " << laptop.getHarddriveList()[i].getInterface() << endl;
    }

    // Power Supply Info
    cout << "\n-- POWER SUPPLY --" << endl;
    cout << "Merk                : " << laptop.getPowerSupply().getMerk() << endl;
    cout << "Nama                : " << laptop.getPowerSupply().getNama() << endl;
    cout << "Wattage             : " << laptop.getPowerSupply().getWattage() << " Watt" << endl;
    cout << "Certification       : " << laptop.getPowerSupply().getCertification() << endl;
    cout << "Power Output        : " << laptop.getPowerSupply().calculateActualPowerOutput(laptop.getPowerSupply().getWattage()) << " Watt" << endl;

    // Peripheral Info
    if (laptop.getPeripherals().size() > 0) {
        cout << "\n-- PERIPHERALS --" << endl;
        for (int i = 0; i < laptop.getPeripherals().size(); i++) {
            cout << "Peripheral #" << (i+1) << endl;
            cout << "Tipe                : " << laptop.getPeripherals()[i]->getType() << endl;
            cout << "Merk                : " << laptop.getPeripherals()[i]->getMerk() << endl;
            cout << "Nama                : " << laptop.getPeripherals()[i]->getNama() << endl;
            laptop.getPeripherals()[i]->displayPeripheralInfo(); cout << endl;
        }
    }

    // Cooling Info
    cout << "\n-- COOLING SYSTEM --" << endl;
    cout << "Cooling Type        : " << laptop.getCoolingType() << endl;

    // Networking Info
    cout << "\n-- NETWORK CONNECTION --" << endl;
    cout << "Connection Type     : " << laptop.getConnectionType() << endl;

    cout << "\n-- Spesifikasi Tambahan Laptop --" << endl;
    cout << "Ukuran Layar        : " << laptop.getScreenSize() << " inch" << endl;
    cout << "Resolusi            : " << laptop.getResolution() << endl;
    cout << "Touchscreen         : " << (laptop.getHasTouchscreen() ? "Yes" : "No") << endl;
    cout << "Backlight Keyboard  : " << (laptop.getHasBacklight() ? "Yes" : "No") << endl;
    cout << "Kapasitas Baterai   : " << laptop.getBatteryCapacity() << " mAh" << endl;
    cout << "Battery Life        : " << laptop.getBatteryLife() << " jam" << endl;
    cout << "Berat               : " << laptop.getWeight() << " kg" << endl;
    cout << "Webcam              : " << (laptop.getHasWebcam() ? "Yes" : "No") << endl;



    return 0;
}
