from ElectronicDevice import ElectronicDevice
from abc import ABC, abstractmethod

class Peripheral(ElectronicDevice, ABC):
    def __init__(self, type="", interface="", merk="", nama="", power_source="", power_consumption_watt=0):
        super().__init__(power_source, power_consumption_watt)
        self.merk = merk
        self.nama = nama
        self.type = type
        self.interface = interface

    def set_merk(self, merk):
        self.merk = merk

    def get_merk(self):
        return self.merk

    def set_nama(self, nama):
        self.nama = nama

    def get_nama(self):
        return self.nama

    def set_type(self, type):
        self.type = type

    def get_type(self):
        return self.type

    def set_interface(self, interface):
        self.interface = interface

    def get_interface(self):
        return self.interface

    @abstractmethod
    def display_peripheral_info(self):
        pass

    def __del__(self):
        pass