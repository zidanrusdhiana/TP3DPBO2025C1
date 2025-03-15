from Komponen import Komponen

class Ram(Komponen):
    def __init__(self, kapasitas_gb=0, ddr="", speed_mhz=0, dual_channel=False, merk="", nama=""):
        super().__init__(merk, nama)
        self.kapasitas_gb = kapasitas_gb
        self.ddr = ddr
        self.speed_mhz = speed_mhz
        self.dual_channel = dual_channel

    def set_kapasitas_gb(self, kapasitas_gb):
        self.kapasitas_gb = kapasitas_gb

    def get_kapasitas_gb(self):
        return self.kapasitas_gb

    def set_ddr(self, ddr):
        self.ddr = ddr

    def get_ddr(self):
        return self.ddr

    def set_speed_mhz(self, speed_mhz):
        self.speed_mhz = speed_mhz

    def get_speed_mhz(self):
        return self.speed_mhz

    def set_dual_channel(self, dual_channel):
        self.dual_channel = dual_channel

    def is_dual_channel(self):
        return self.dual_channel