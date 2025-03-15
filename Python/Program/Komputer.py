from ElectronicDevice import ElectronicDevice
from Cpu import Cpu
from Harddrive import Harddrive
from Ram import Ram
from Motherboard import Motherboard
from PowerSupply import PowerSupply
from GraphicsCard import GraphicsCard
from Peripheral import Peripheral

class Komputer(ElectronicDevice):
    def __init__(self, nama="", cpu=None, motherboard=None, ram_list=None, harddrive_list=None, power_supply=None, gpu_list=None, peripherals=None, connection_type="", cooling_type="", power_source="", power_consumption_watt=0):
        super().__init__(power_source, power_consumption_watt)
        self.nama = nama
        self.cpu = cpu if cpu is not None else Cpu()
        self.motherboard = motherboard if motherboard is not None else Motherboard()
        self.ram_list = ram_list if ram_list is not None else []
        self.harddrive_list = harddrive_list if harddrive_list is not None else []
        self.power_supply = power_supply if power_supply is not None else PowerSupply()
        self.gpu_list = gpu_list if gpu_list is not None else []
        self.peripherals = peripherals if peripherals is not None else []
        self.connection_type = connection_type
        self.cooling_type = cooling_type

    def set_nama(self, nama):
        self.nama = nama

    def get_nama(self):
        return self.nama

    def set_cpu(self, cpu):
        self.cpu = cpu

    def get_cpu(self):
        return self.cpu

    def set_motherboard(self, motherboard):
        self.motherboard = motherboard

    def get_motherboard(self):
        return self.motherboard

    def set_ram_list(self, ram_list):
        self.ram_list = ram_list

    def get_ram_list(self):
        return self.ram_list

    def set_harddrive_list(self, harddrive_list):
        self.harddrive_list = harddrive_list

    def get_harddrive_list(self):
        return self.harddrive_list

    def set_power_supply(self, power_supply):
        self.power_supply = power_supply

    def get_power_supply(self):
        return self.power_supply

    def set_gpu_list(self, gpu_list):
        self.gpu_list = gpu_list

    def get_gpu_list(self):
        return self.gpu_list

    def add_ram(self, ram):
        self.ram_list.append(ram)

    def add_harddrive(self, harddrive):
        self.harddrive_list.append(harddrive)

    def add_graphics_card(self, gpu):
        self.gpu_list.append(gpu)

    def add_peripheral(self, peripheral):
        self.peripherals.append(peripheral)

    def get_peripherals(self):
        return self.peripherals

    def get_total_ram_capacity(self):
        return sum(ram.get_kapasitas_gb() for ram in self.ram_list)

    def get_total_storage_capacity(self):
        return sum(hd.get_kapasitas_gb() for hd in self.harddrive_list)

    def set_connection_type(self, connection_type):
        self.connection_type = connection_type

    def get_connection_type(self):
        return self.connection_type

    def set_cooling_type(self, cooling_type):
        self.cooling_type = cooling_type

    def get_cooling_type(self):
        return self.cooling_type