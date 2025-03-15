from Cpu import Cpu
from Ram import Ram
from Harddrive import Harddrive
from Motherboard import Motherboard
from PowerSupply import PowerSupply
from GraphicsCard import GraphicsCard
from Monitor import Monitor
from Keyboard import Keyboard
from Mouse import Mouse
from Komputer import Komputer
from Laptop import Laptop

def main():
    cpu = Cpu(8, 3.4, "Intel", "Core i7")
    ram1 = Ram(16, "DDR5", 3200, True, "Corsair", "Vengeance")
    harddrive = Harddrive(1024, "SSD", "Samsung", "Evo")
    motherboard = Motherboard("B450", "AM4", "ATX", 128, 4, 2, 6, True, True, "Asus", "TUF Gaming")
    power_supply = PowerSupply(750, "80+ Gold", True, "Corsair", "RM750x")
    gpu = GraphicsCard(8, "RTX 3070", 5888, 1500, 1725, "GDDR6", 448, "Dual Fan", "Asus", "TUF Gaming")
    peripherals = [
        Monitor(24.5, "1920x1080", 240, "IPS", "Asus", "VG259QM"),
        Keyboard("Mechanical", "QWERTY", True, "Logitech", "G Pro X"),
        Mouse("Optical", 16000, 6, True, "Logitech", "G Pro")
    ]

    laptop = Laptop("Asus ROG Zephyrus G14", cpu, motherboard, [Ram(8, "DDR4", 1600, False, "Corsair", "Vengeance")], [harddrive, Harddrive(1024, "SSD", "Samsung", "Evo")], power_supply, [], [], "Ethernet", "Air Cooling", 14, "2560x1440", 6000, 1.6, True, False, True)

    komputer = Komputer("My favorite pc gw", cpu, motherboard, [ram1], [harddrive], power_supply, [gpu], peripherals, "Ethernet", "Liquid Cooling", "AC", 1000)
    komputer.add_ram(Ram(16, "DDR5", 3200, True, "Kingston", "FURY"))
    komputer.add_harddrive(Harddrive(2048, "HDD", "Seagate", "Barracuda"))
    komputer.add_graphics_card(GraphicsCard(6, "GTX 1660", 1408, 1530, 1785, "GDDR5", 192, "Dual Fan", "MSI", "Gaming X"))

    # Display information
    print("=== INFORMASI KOMPUTER ===")
    print(f"Nama                : {komputer.get_nama()}")
    print(f"Power Source        : {komputer.get_power_source()}")
    print(f"Power Consumption   : {komputer.get_power_consumption_watt()} Watt")

    # CPU Info
    print("\n-- CPU --")
    print(f"Merk                : {komputer.get_cpu().get_merk()}")
    print(f"Nama                : {komputer.get_cpu().get_nama()}")
    print(f"Jumlah Core         : {komputer.get_cpu().get_jumlah_core()}")
    print(f"Kecepatan           : {komputer.get_cpu().get_kecepatan_ghz()} GHz")
    print(f"Socket Type         : {komputer.get_cpu().get_socket_type()}")
    print(f"Cache Size          : {komputer.get_cpu().get_cache_size()} MB")
    print(f"Cooling Type        : {komputer.get_cpu().get_cooling_type()}")

    # Motherboard Info
    print("\n-- MOTHERBOARD --")
    print(f"Merk                : {komputer.get_motherboard().get_merk()}")
    print(f"Nama                : {komputer.get_motherboard().get_nama()}")
    print(f"Socket Type         : {komputer.get_motherboard().get_socket_type()}")
    print(f"Form Factor         : {komputer.get_motherboard().get_form_factor()}")
    print(f"Max RAM Capacity    : {komputer.get_motherboard().get_max_ram_gb()} GB")
    print(f"RAM Slot Count      : {komputer.get_motherboard().get_ram_slots()}")
    print(f"PCIe Slot Count     : {komputer.get_motherboard().get_pci_slots()}")
    print(f"SATA Port Count     : {komputer.get_motherboard().get_sata_connectors()}")
    print(f"Has WiFi            : {'Yes' if komputer.get_motherboard().get_has_wifi() else 'No'}")
    print(f"Has Bluetooth       : {'Yes' if komputer.get_motherboard().get_has_bluetooth() else 'No'}")

    # RAM Info
    print(f"\n-- RAM (Total: {komputer.get_total_ram_capacity()} GB) --")
    for i, ram in enumerate(komputer.get_ram_list()):
        if i > 0:
            print()
        print(f"RAM #{i+1}")
        print(f"Merk                : {ram.get_merk()}")
        print(f"Nama                : {ram.get_nama()}")
        print(f"Kapasitas           : {ram.get_kapasitas_gb()} GB")
        print(f"Tipe                : {ram.get_ddr()}")
        print(f"Speed               : {ram.get_speed_mhz()} MHz")
        print(f"Dual Channel        : {'Yes' if ram.is_dual_channel() else 'No'}")

    # Storage Info
    print(f"\n-- STORAGE (Total: {komputer.get_total_storage_capacity()} GB) --")
    for i, hd in enumerate(komputer.get_harddrive_list()):
        if i > 0:
            print()
        print(f"Storage #{i+1}")
        print(f"Merk                : {hd.get_merk()}")
        print(f"Nama                : {hd.get_nama()}")
        print(f"Kapasitas           : {hd.get_kapasitas_gb()} GB")
        print(f"Tipe                : {hd.get_tipe_drive()}")
        print(f"Read Speed          : {hd.get_read_speed_mbps()} MBps")
        print(f"Write Speed         : {hd.get_write_speed_mbps()} MBps")
        print(f"Form Factor         : {hd.get_form_factor()}")
        print(f"Interface           : {hd.get_interface()}")

    # GPU Info
    if komputer.get_gpu_list():
        print("\n-- GPU --")
        for i, gpu in enumerate(komputer.get_gpu_list()):
            if i > 0:
                print()
            print(f"GPU #{i+1}")
            print(f"Merk                : {gpu.get_merk()}")
            print(f"Nama                : {gpu.get_nama()}")
            print(f"VRAM                : {gpu.get_vram_gb()} GB")
            print(f"Cuda Cores          : {gpu.get_cuda_cores()}")
            print(f"Base Clock          : {gpu.get_base_clock()} MHz")
            print(f"Boost Clock         : {gpu.get_boost_clock()} MHz")
            print(f"Memory Type         : {gpu.get_memory_type()}")
            print(f"Memory Bandwidth    : {gpu.get_memory_bandwidth()} GBps")
            print(f"Cooling Type        : {gpu.get_cooling_type()}")

    # Power Supply Info
    print("\n-- POWER SUPPLY --")
    print(f"Merk                : {komputer.get_power_supply().get_merk()}")
    print(f"Nama                : {komputer.get_power_supply().get_nama()}")
    print(f"Wattage             : {komputer.get_power_supply().get_wattage()} Watt")
    print(f"Certification       : {komputer.get_power_supply().get_certification()}")
    print(f"Power Output        : {komputer.get_power_supply().calculate_actual_power_output(komputer.get_power_supply().get_wattage())} Watt")

    # Peripheral Info
    if komputer.get_peripherals():
        print("\n-- PERIPHERALS --")
        for i, peripheral in enumerate(komputer.get_peripherals()):
            print(f"Peripheral #{i+1}")
            print(f"Tipe                : {peripheral.get_type()}")
            print(f"Merk                : {peripheral.get_merk()}")
            print(f"Nama                : {peripheral.get_nama()}")
            peripheral.display_peripheral_info()
            print()

    # Cooling Info
    print("\n-- COOLING SYSTEM --")
    print(f"Cooling Type        : {komputer.get_cooling_type()}")

    # Networking Info
    print("\n-- NETWORK CONNECTION --")
    print(f"Connection Type     : {komputer.get_connection_type()}")

    print("\n##############################################")

    # Display information
    print("\n=== INFORMASI LAPTOP ===")
    print(f"Nama                : {laptop.get_nama()}")
    print(f"Power Source        : {laptop.get_power_source()}")
    print(f"Power Consumption   : {laptop.get_power_consumption_watt()} Watt")

    # CPU Info
    print("\n-- CPU --")
    print(f"Merk                : {laptop.get_cpu().get_merk()}")
    print(f"Nama                : {laptop.get_cpu().get_nama()}")
    print(f"Jumlah Core         : {laptop.get_cpu().get_jumlah_core()}")
    print(f"Kecepatan           : {laptop.get_cpu().get_kecepatan_ghz()} GHz")
    print(f"Socket Type         : {laptop.get_cpu().get_socket_type()}")
    print(f"Cache Size          : {laptop.get_cpu().get_cache_size()} MB")
    print(f"Cooling Type        : {laptop.get_cpu().get_cooling_type()}")

    # Motherboard Info
    print("\n-- MOTHERBOARD --")
    print(f"Merk                : {laptop.get_motherboard().get_merk()}")
    print(f"Nama                : {laptop.get_motherboard().get_nama()}")
    print(f"Socket Type         : {laptop.get_motherboard().get_socket_type()}")
    print(f"Form Factor         : {laptop.get_motherboard().get_form_factor()}")
    print(f"Max RAM Capacity    : {laptop.get_motherboard().get_max_ram_gb()} GB")
    print(f"RAM Slot Count      : {laptop.get_motherboard().get_ram_slots()}")
    print(f"PCIe Slot Count     : {laptop.get_motherboard().get_pci_slots()}")
    print(f"SATA Port Count     : {laptop.get_motherboard().get_sata_connectors()}")
    print(f"Has WiFi            : {'Yes' if laptop.get_motherboard().get_has_wifi() else 'No'}")
    print(f"Has Bluetooth       : {'Yes' if laptop.get_motherboard().get_has_bluetooth() else 'No'}")

    # RAM Info
    print(f"\n-- RAM (Total: {laptop.get_total_ram_capacity()} GB) --")
    for i, ram in enumerate(laptop.get_ram_list()):
        if i > 0:
            print()
        print(f"RAM #{i+1}")
        print(f"Merk                : {ram.get_merk()}")
        print(f"Nama                : {ram.get_nama()}")
        print(f"Kapasitas           : {ram.get_kapasitas_gb()} GB")
        print(f"Tipe                : {ram.get_ddr()}")
        print(f"Speed               : {ram.get_speed_mhz()} MHz")
        print(f"Dual Channel        : {'Yes' if ram.is_dual_channel() else 'No'}")

    # Storage Info
    print(f"\n-- STORAGE (Total: {laptop.get_total_storage_capacity()} GB) --")
    for i, hd in enumerate(laptop.get_harddrive_list()):
        if i > 0:
            print()
        print(f"Storage #{i+1}")
        print(f"Merk                : {hd.get_merk()}")
        print(f"Nama                : {hd.get_nama()}")
        print(f"Kapasitas           : {hd.get_kapasitas_gb()} GB")
        print(f"Tipe                : {hd.get_tipe_drive()}")
        print(f"Read Speed          : {hd.get_read_speed_mbps()} MBps")
        print(f"Write Speed         : {hd.get_write_speed_mbps()} MBps")
        print(f"Form Factor         : {hd.get_form_factor()}")
        print(f"Interface           : {hd.get_interface()}")

    # Power Supply Info
    print("\n-- POWER SUPPLY --")
    print(f"Merk                : {laptop.get_power_supply().get_merk()}")
    print(f"Nama                : {laptop.get_power_supply().get_nama()}")
    print(f"Wattage             : {laptop.get_power_supply().get_wattage()} Watt")
    print(f"Certification       : {laptop.get_power_supply().get_certification()}")
    print(f"Power Output        : {laptop.get_power_supply().calculate_actual_power_output(laptop.get_power_supply().get_wattage())} Watt")

    # Peripheral Info
    if laptop.get_peripherals():
        print("\n-- PERIPHERALS --")
        for i, peripheral in enumerate(laptop.get_peripherals()):
            print(f"Peripheral #{i+1}")
            print(f"Tipe                : {peripheral.get_type()}")
            print(f"Merk                : {peripheral.get_merk()}")
            print(f"Nama                : {peripheral.get_nama()}")
            peripheral.display_peripheral_info()
            print()

    # Cooling Info
    print("\n-- COOLING SYSTEM --")
    print(f"Cooling Type        : {laptop.get_cooling_type()}")

    # Networking Info
    print("\n-- NETWORK CONNECTION --")
    print(f"Connection Type     : {laptop.get_connection_type()}")

    print("\n-- Spesifikasi Tambahan Laptop --")
    print(f"Ukuran Layar        : {laptop.get_screen_size()} inch")
    print(f"Resolusi            : {laptop.get_resolution()}")
    print(f"Touchscreen         : {'Yes' if laptop.get_has_touchscreen() else 'No'}")
    print(f"Backlight Keyboard  : {'Yes' if laptop.get_has_backlight() else 'No'}")
    print(f"Kapasitas Baterai   : {laptop.get_battery_capacity()} Wh")
    print(f"Battery Life        : {laptop.get_battery_life()} jam")
    print(f"Berat               : {laptop.get_weight()} kg")
    print(f"Webcam              : {'Yes' if laptop.get_has_webcam() else 'No'}")

if __name__ == "__main__":
    main()