from Komponen import Komponen

class Motherboard(Komponen):
    def __init__(self, chipset="", socket_type="", form_factor="", max_ram_gb=0, ram_slots=0, pci_slots=0, sata_connectors=0, has_wifi=False, has_bluetooth=False, merk="", nama=""):
        super().__init__(merk, nama)
        self.chipset = chipset
        self.socket_type = socket_type
        self.form_factor = form_factor
        self.max_ram_gb = max_ram_gb
        self.ram_slots = ram_slots
        self.pci_slots = pci_slots
        self.sata_connectors = sata_connectors
        self.has_wifi = has_wifi
        self.has_bluetooth = has_bluetooth

    def set_chipset(self, chipset):
        self.chipset = chipset

    def get_chipset(self):
        return self.chipset

    def set_socket_type(self, socket_type):
        self.socket_type = socket_type

    def get_socket_type(self):
        return self.socket_type

    def set_form_factor(self, form_factor):
        self.form_factor = form_factor

    def get_form_factor(self):
        return self.form_factor

    def set_max_ram_gb(self, max_ram_gb):
        self.max_ram_gb = max_ram_gb

    def get_max_ram_gb(self):
        return self.max_ram_gb

    def set_ram_slots(self, ram_slots):
        self.ram_slots = ram_slots

    def get_ram_slots(self):
        return self.ram_slots

    def set_pci_slots(self, pci_slots):
        self.pci_slots = pci_slots

    def get_pci_slots(self):
        return self.pci_slots

    def set_sata_connectors(self, sata_connectors):
        self.sata_connectors = sata_connectors

    def get_sata_connectors(self):
        return self.sata_connectors

    def set_has_wifi(self, has_wifi):
        self.has_wifi = has_wifi

    def get_has_wifi(self):
        return self.has_wifi

    def set_has_bluetooth(self, has_bluetooth):
        self.has_bluetooth = has_bluetooth

    def get_has_bluetooth(self):
        return self.has_bluetooth