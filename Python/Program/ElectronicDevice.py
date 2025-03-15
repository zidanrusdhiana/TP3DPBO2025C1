class ElectronicDevice:
    def __init__(self, power_source="", power_consumption_watt=0):
        self.power_source = power_source
        self.power_consumption_watt = power_consumption_watt

    def set_power_source(self, power_source):
        self.power_source = power_source

    def get_power_source(self):
        return self.power_source

    def set_power_consumption_watt(self, power_consumption_watt):
        self.power_consumption_watt = power_consumption_watt

    def get_power_consumption_watt(self):
        return self.power_consumption_watt