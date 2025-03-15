from Komponen import Komponen

class PowerSupply(Komponen):
    def __init__(self, wattage=0, certification="", modular=False, merk="", nama=""):
        super().__init__(merk, nama)
        self.wattage = wattage
        self.certification = certification
        self.modular = modular
        self.efficiency = self.calculate_efficiency(certification)

    def set_wattage(self, wattage):
        self.wattage = wattage

    def get_wattage(self):
        return self.wattage

    def set_certification(self, certification):
        self.certification = certification
        self.efficiency = self.calculate_efficiency(certification)

    def get_certification(self):
        return self.certification

    def set_modular(self, modular):
        self.modular = modular

    def is_modular(self):
        return self.modular

    def get_efficiency(self):
        return self.efficiency

    def calculate_efficiency(self, certification):
        if certification == "80+ Titanium":
            return 0.94
        elif certification == "80+ Platinum":
            return 0.92
        elif certification == "80+ Gold":
            return 0.90
        elif certification == "80+ Silver":
            return 0.88
        elif certification == "80+ Bronze":
            return 0.85
        else:
            return 0.80

    def calculate_actual_power_output(self, required_wattage):
        return int(required_wattage / self.efficiency)