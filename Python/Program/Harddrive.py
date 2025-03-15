from Komponen import Komponen

class Harddrive(Komponen):
    def __init__(self, kapasitas_gb=0, tipe_drive="", merk="", nama=""):
        super().__init__(merk, nama)
        self.kapasitas_gb = kapasitas_gb
        self.tipe_drive = tipe_drive
        self.read_speed_mbps = 550 if tipe_drive == "SSD" else 120
        self.write_speed_mbps = 520 if tipe_drive == "SSD" else 100
        self.form_factor = "2.5 inch" if tipe_drive == "SSD" else "3.5 inch"
        self.interface = "SATA III"

    def set_kapasitas_gb(self, kapasitas_gb):
        self.kapasitas_gb = kapasitas_gb

    def get_kapasitas_gb(self):
        return self.kapasitas_gb

    def set_tipe_drive(self, tipe_drive):
        self.tipe_drive = tipe_drive

    def get_tipe_drive(self):
        return self.tipe_drive

    def set_read_speed_mbps(self, read_speed_mbps):
        self.read_speed_mbps = read_speed_mbps

    def get_read_speed_mbps(self):
        return self.read_speed_mbps

    def set_write_speed_mbps(self, write_speed_mbps):
        self.write_speed_mbps = write_speed_mbps

    def get_write_speed_mbps(self):
        return self.write_speed_mbps

    def set_form_factor(self, form_factor):
        self.form_factor = form_factor

    def get_form_factor(self):
        return self.form_factor

    def set_interface(self, interface):
        self.interface = interface

    def get_interface(self):
        return self.interface