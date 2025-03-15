class Komponen:
    def __init__(self, merk="", nama=""):
        self.merk = merk
        self.nama = nama

    def set_merk(self, merk):
        self.merk = merk

    def get_merk(self):
        return self.merk

    def set_nama(self, nama):
        self.nama = nama

    def get_nama(self):
        return self.nama