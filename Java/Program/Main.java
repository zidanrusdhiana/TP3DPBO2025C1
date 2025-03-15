import java.util.ArrayList;
import java.util.List;

public class Main {
    public static void main(String[] args) {
        Cpu cpu = new Cpu(8, 3.4f, "Intel", "Core i7");
        Ram ram1 = new Ram(16, "DDR5", 3200, true, "Corsair", "Vengeance");
        Harddrive harddrive = new Harddrive(1024, "SSD", "Samsung", "Evo");
        Motherboard motherboard = new Motherboard("B450", "AM4", "ATX", 128, 4, 2, 6, true, true, "Asus", "TUF Gaming");
        PowerSupply powerSupply = new PowerSupply(750, "80+ Gold", true, "Corsair", "RM750x");
        GraphicsCard gpu = new GraphicsCard(8, "RTX 3070", 5888, 1500, 1725, "GDDR6", 448, "Dual Fan", "Asus", "TUF Gaming");
        List<Peripheral> peripherals = new ArrayList<>();
        peripherals.add(new Monitor(24.5f, "1920x1080", 240, "IPS", "Asus", "VG259QM", "HDMI"));
        peripherals.add(new Keyboard("Mechanical", "QWERTY", true, "Logitech", "G Pro X", "RGB"));
        peripherals.add(new Mouse("Optical", 16000, 6, true, "Logitech", "G Pro", "Wired"));

        List<Ram> laptopRamList = new ArrayList<>();
        laptopRamList.add(new Ram(8, "DDR4", 1600, false, "Corsair", "Vengeance"));
        List<Harddrive> laptopHarddriveList = new ArrayList<>();
        laptopHarddriveList.add(harddrive);
        laptopHarddriveList.add(new Harddrive(1024, "SSD", "Samsung", "Evo"));
        Laptop laptop = new Laptop("Asus ROG Flow X13", cpu, motherboard, laptopRamList, laptopHarddriveList, powerSupply, new ArrayList<>(), new ArrayList<>(), "Ethernet", "Air Cooling", 14f, "2560x1440", 7500, 1.6f, true, false, true, "Battery/AC", 65);

        List<Ram> komputerRamList = new ArrayList<>();
        komputerRamList.add(ram1);
        List<Harddrive> komputerHarddriveList = new ArrayList<>();
        komputerHarddriveList.add(harddrive);
        List<GraphicsCard> komputerGpuList = new ArrayList<>();
        komputerGpuList.add(gpu);
        Komputer komputer = new Komputer("Oh my PCCCC!", cpu, motherboard, komputerRamList, komputerHarddriveList, powerSupply, komputerGpuList, peripherals, "Ethernet", "Liquid Cooling", "AC", 1000);
        komputer.addRam(new Ram(16, "DDR5", 3200, true, "Kingston", "FURY"));
        komputer.addHarddrive(new Harddrive(2048, "HDD", "Seagate", "Barracuda"));
        komputer.addGraphicsCard(new GraphicsCard(6, "GTX 1660", 1408, 1530, 1785, "GDDR5", 192, "Dual Fan", "MSI", "Gaming X"));

        // Display information
        System.out.println("=== INFORMASI KOMPUTER ===");
        System.out.println("Nama                : " + komputer.getNama());
        System.out.println("Power Source        : " + komputer.getPowerSource());
        System.out.println("Power Consumption   : " + komputer.getPowerConsumptionWatt() + " Watt");

        // CPU Info
        System.out.println("\n-- CPU --");
        System.out.println("Merk                : " + komputer.getCpu().getMerk());
        System.out.println("Nama                : " + komputer.getCpu().getNama());
        System.out.println("Jumlah Core         : " + komputer.getCpu().getJumlahCore());
        System.out.println("Kecepatan           : " + komputer.getCpu().getKecepatanGHz() + " GHz");
        System.out.println("Socket Type         : " + komputer.getCpu().getSocketType());
        System.out.println("Cache Size          : " + komputer.getCpu().getCacheSize() + " MB");
        System.out.println("Cooling Type        : " + komputer.getCpu().getCoolingType());

        // Motherboard Info
        System.out.println("\n-- MOTHERBOARD --");
        System.out.println("Merk                : " + komputer.getMotherboard().getMerk());
        System.out.println("Nama                : " + komputer.getMotherboard().getNama());
        System.out.println("Socket Type         : " + komputer.getMotherboard().getSocketType());
        System.out.println("Form Factor         : " + komputer.getMotherboard().getFormFactor());
        System.out.println("Max RAM Capacity    : " + komputer.getMotherboard().getMaxRamGB() + " GB");
        System.out.println("RAM Slot Count      : " + komputer.getMotherboard().getRamSlots());
        System.out.println("PCIe Slot Count     : " + komputer.getMotherboard().getPciSlots());
        System.out.println("SATA Port Count     : " + komputer.getMotherboard().getSataConnectors());
        System.out.println("Has WiFi            : " + (komputer.getMotherboard().getHasWifi() ? "Yes" : "No"));
        System.out.println("Has Bluetooth       : " + (komputer.getMotherboard().getHasBluetooth() ? "Yes" : "No"));

        // RAM Info
        System.out.println("\n-- RAM (Total: " + komputer.getTotalRamCapacity() + " GB) --");
        for (int i = 0; i < komputer.getRamList().size(); i++) {
            if (i > 0) System.out.println();
            System.out.println("RAM #" + (i + 1));
            System.out.println("Merk                : " + komputer.getRamList().get(i).getMerk());
            System.out.println("Nama                : " + komputer.getRamList().get(i).getNama());
            System.out.println("Kapasitas           : " + komputer.getRamList().get(i).getKapasitasGB() + " GB");
            System.out.println("Tipe                : " + komputer.getRamList().get(i).getDdr());
            System.out.println("Speed               : " + komputer.getRamList().get(i).getSpeedMHz() + " MHz");
            System.out.println("Dual Channel        : " + (komputer.getRamList().get(i).isDualChannel() ? "Yes" : "No"));
        }

        // Storage Info
        System.out.println("\n-- STORAGE (Total: " + komputer.getTotalStorageCapacity() + " GB) --");
        for (int i = 0; i < komputer.getHarddriveList().size(); i++) {
            if (i > 0) System.out.println();
            System.out.println("Storage #" + (i + 1));
            System.out.println("Merk                : " + komputer.getHarddriveList().get(i).getMerk());
            System.out.println("Nama                : " + komputer.getHarddriveList().get(i).getNama());
            System.out.println("Kapasitas           : " + komputer.getHarddriveList().get(i).getKapasitasGB() + " GB");
            System.out.println("Tipe                : " + komputer.getHarddriveList().get(i).getTipeDrive());
            System.out.println("Read Speed          : " + komputer.getHarddriveList().get(i).getReadSpeedMBps() + " MBps");
            System.out.println("Write Speed         : " + komputer.getHarddriveList().get(i).getWriteSpeedMBps() + " MBps");
            System.out.println("Form Factor         : " + komputer.getHarddriveList().get(i).getFormFactor());
            System.out.println("Interface           : " + komputer.getHarddriveList().get(i).getInterfaceType());
        }

        // GPU Info
        if (komputer.getGpuList().size() > 0) {
            System.out.println("\n-- GPU --");
            for (int i = 0; i < komputer.getGpuList().size(); i++) {
                if (i > 0) System.out.println();
                System.out.println("GPU #" + (i + 1));
                System.out.println("Merk                : " + komputer.getGpuList().get(i).getMerk());
                System.out.println("Nama                : " + komputer.getGpuList().get(i).getNama());
                System.out.println("VRAM                : " + komputer.getGpuList().get(i).getVramGB() + " GB");
                System.out.println("Cuda Cores          : " + komputer.getGpuList().get(i).getCudaCores());
                System.out.println("Base Clock          : " + komputer.getGpuList().get(i).getBaseClock() + " MHz");
                System.out.println("Boost Clock         : " + komputer.getGpuList().get(i).getBoostClock() + " MHz");
                System.out.println("Memory Type         : " + komputer.getGpuList().get(i).getMemoryType());
                System.out.println("Memory Bandwidth    : " + komputer.getGpuList().get(i).getMemoryBandwidth() + " GBps");
                System.out.println("Cooling Type        : " + komputer.getGpuList().get(i).getCoolingType());
            }
        }

        // Power Supply Info
        System.out.println("\n-- POWER SUPPLY --");
        System.out.println("Merk                : " + komputer.getPowerSupply().getMerk());
        System.out.println("Nama                : " + komputer.getPowerSupply().getNama());
        System.out.println("Wattage             : " + komputer.getPowerSupply().getWattage() + " Watt");
        System.out.println("Certification       : " + komputer.getPowerSupply().getCertification());
        System.out.println("Power Output        : " + komputer.getPowerSupply().calculateActualPowerOutput(komputer.getPowerSupply().getWattage()) + " Watt");

        // Peripheral Info
        if (komputer.getPeripherals().size() > 0) {
            System.out.println("\n-- PERIPHERALS --");
            for (int i = 0; i < komputer.getPeripherals().size(); i++) {
                System.out.println("Peripheral #" + (i + 1));
                System.out.println("Tipe                : " + komputer.getPeripherals().get(i).getType());
                System.out.println("Merk                : " + komputer.getPeripherals().get(i).getMerk());
                System.out.println("Nama                : " + komputer.getPeripherals().get(i).getNama());
                komputer.getPeripherals().get(i).displayPeripheralInfo();
                System.out.println();
            }
        }

        // Cooling Info
        System.out.println("\n-- COOLING SYSTEM --");
        System.out.println("Cooling Type        : " + komputer.getCoolingType());

        // Networking Info
        System.out.println("\n-- NETWORK CONNECTION --");
        System.out.println("Connection Type     : " + komputer.getConnectionType());

        System.out.println("\n##############################################");

        // Display information
        System.out.println("\n=== INFORMASI LAPTOP ===");
        System.out.println("Nama                : " + laptop.getNama());
        System.out.println("Power Source        : " + laptop.getPowerSource());
        System.out.println("Power Consumption   : " + laptop.getPowerConsumptionWatt() + " Watt");

        // CPU Info
        System.out.println("\n-- CPU --");
        System.out.println("Merk                : " + laptop.getCpu().getMerk());
        System.out.println("Nama                : " + laptop.getCpu().getNama());
        System.out.println("Jumlah Core         : " + laptop.getCpu().getJumlahCore());
        System.out.println("Kecepatan           : " + laptop.getCpu().getKecepatanGHz() + " GHz");
        System.out.println("Socket Type         : " + laptop.getCpu().getSocketType());
        System.out.println("Cache Size          : " + laptop.getCpu().getCacheSize() + " MB");
        System.out.println("Cooling Type        : " + laptop.getCpu().getCoolingType());

        // Motherboard Info
        System.out.println("\n-- MOTHERBOARD --");
        System.out.println("Merk                : " + laptop.getMotherboard().getMerk());
        System.out.println("Nama                : " + laptop.getMotherboard().getNama());
        System.out.println("Socket Type         : " + laptop.getMotherboard().getSocketType());
        System.out.println("Form Factor         : " + laptop.getMotherboard().getFormFactor());
        System.out.println("Max RAM Capacity    : " + laptop.getMotherboard().getMaxRamGB() + " GB");
        System.out.println("RAM Slot Count      : " + laptop.getMotherboard().getRamSlots());
        System.out.println("PCIe Slot Count     : " + laptop.getMotherboard().getPciSlots());
        System.out.println("SATA Port Count     : " + laptop.getMotherboard().getSataConnectors());
        System.out.println("Has WiFi            : " + (laptop.getMotherboard().getHasWifi() ? "Yes" : "No"));
        System.out.println("Has Bluetooth       : " + (laptop.getMotherboard().getHasBluetooth() ? "Yes" : "No"));

        // RAM Info
        System.out.println("\n-- RAM (Total: " + laptop.getTotalRamCapacity() + " GB) --");
        for (int i = 0; i < laptop.getRamList().size(); i++) {
            if (i > 0) System.out.println();
            System.out.println("RAM #" + (i + 1));
            System.out.println("Merk                : " + laptop.getRamList().get(i).getMerk());
            System.out.println("Nama                : " + laptop.getRamList().get(i).getNama());
            System.out.println("Kapasitas           : " + laptop.getRamList().get(i).getKapasitasGB() + " GB");
            System.out.println("Tipe                : " + laptop.getRamList().get(i).getDdr());
            System.out.println("Speed               : " + laptop.getRamList().get(i).getSpeedMHz() + " MHz");
            System.out.println("Dual Channel        : " + (laptop.getRamList().get(i).isDualChannel() ? "Yes" : "No"));
        }

        // Storage Info
        System.out.println("\n-- STORAGE (Total: " + laptop.getTotalStorageCapacity() + " GB) --");
        for (int i = 0; i < laptop.getHarddriveList().size(); i++) {
            if (i > 0) System.out.println();
            System.out.println("Storage #" + (i + 1));
            System.out.println("Merk                : " + laptop.getHarddriveList().get(i).getMerk());
            System.out.println("Nama                : " + laptop.getHarddriveList().get(i).getNama());
            System.out.println("Kapasitas           : " + laptop.getHarddriveList().get(i).getKapasitasGB() + " GB");
            System.out.println("Tipe                : " + laptop.getHarddriveList().get(i).getTipeDrive());
            System.out.println("Read Speed          : " + laptop.getHarddriveList().get(i).getReadSpeedMBps() + " MBps");
            System.out.println("Write Speed         : " + laptop.getHarddriveList().get(i).getWriteSpeedMBps() + " MBps");
            System.out.println("Form Factor         : " + laptop.getHarddriveList().get(i).getFormFactor());
            System.out.println("Interface           : " + laptop.getHarddriveList().get(i).getInterfaceType());
        }

        // Power Supply Info
        System.out.println("\n-- POWER SUPPLY --");
        System.out.println("Merk                : " + laptop.getPowerSupply().getMerk());
        System.out.println("Nama                : " + laptop.getPowerSupply().getNama());
        System.out.println("Wattage             : " + laptop.getPowerSupply().getWattage() + " Watt");
        System.out.println("Certification       : " + laptop.getPowerSupply().getCertification());
        System.out.println("Power Output        : " + laptop.getPowerSupply().calculateActualPowerOutput(laptop.getPowerSupply().getWattage()) + " Watt");

        // Peripheral Info
        if (laptop.getPeripherals().size() > 0) {
            System.out.println("\n-- PERIPHERALS --");
            for (int i = 0; i < laptop.getPeripherals().size(); i++) {
                System.out.println("Peripheral #" + (i + 1));
                System.out.println("Tipe                : " + laptop.getPeripherals().get(i).getType());
                System.out.println("Merk                : " + laptop.getPeripherals().get(i).getMerk());
                System.out.println("Nama                : " + laptop.getPeripherals().get(i).getNama());
                laptop.getPeripherals().get(i).displayPeripheralInfo();
                System.out.println();
            }
        }

        // Cooling Info
        System.out.println("\n-- COOLING SYSTEM --");
        System.out.println("Cooling Type        : " + laptop.getCoolingType());

        // Networking Info
        System.out.println("\n-- NETWORK CONNECTION --");
        System.out.println("Connection Type     : " + laptop.getConnectionType());

        System.out.println("\n-- Spesifikasi Tambahan Laptop --");
        System.out.println("Ukuran Layar        : " + laptop.getScreenSize() + " inch");
        System.out.println("Resolusi            : " + laptop.getResolution());
        System.out.println("Touchscreen         : " + (laptop.getHasTouchscreen() ? "Yes" : "No"));
        System.out.println("Backlight Keyboard  : " + (laptop.getHasBacklight() ? "Yes" : "No"));
        System.out.println("Kapasitas Baterai   : " + laptop.getBatteryCapacity() + " mAh");
        System.out.println("Battery Life        : " + laptop.getBatteryLife() + " jam");
        System.out.println("Berat               : " + laptop.getWeight() + " kg");
        System.out.println("Webcam              : " + (laptop.getHasWebcam() ? "Yes" : "No"));
    }
}