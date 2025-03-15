from Komponen import Komponen

class Cpu(Komponen):
    def __init__(self, jumlah_core=0, kecepatan_ghz=0.0, merk="", nama=""):
        super().__init__(merk, nama)
        self.jumlah_core = jumlah_core
        self.kecepatan_ghz = kecepatan_ghz
        self.cooling_type = "Stock"
        self.cache_size = 32
        self.socket_type = "AM4"

    def set_jumlah_core(self, jumlah_core):
        self.jumlah_core = jumlah_core

    def get_jumlah_core(self):
        return self.jumlah_core

    def set_kecepatan_ghz(self, kecepatan_ghz):
        self.kecepatan_ghz = kecepatan_ghz

    def get_kecepatan_ghz(self):
        return self.kecepatan_ghz

    def set_cache_size(self, cache_size):
        self.cache_size = cache_size

    def get_cache_size(self):
        return self.cache_size

    def set_socket_type(self, socket_type):
        self.socket_type = socket_type

    def get_socket_type(self):
        return self.socket_type

    def set_cooling_type(self, cooling_type):
        self.cooling_type = cooling_type

    def get_cooling_type(self):
        return self.cooling_type