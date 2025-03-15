from Komputer import Komputer

class Laptop(Komputer):
    def __init__(self, nama="", cpu=None, motherboard=None, ram_list=None, harddrive_list=None, power_supply=None, gpu_list=None, peripherals=None, connection_type="", cooling_type="", screen_size=0.0, resolution="", battery_capacity=0, weight=0.0, has_webcam=False, has_touchscreen=False, has_backlight=False, power_source="Battery/AC", power_consumption_watt=65):
        super().__init__(nama, cpu, motherboard, ram_list, harddrive_list, power_supply, gpu_list, peripherals, connection_type, cooling_type, power_source, power_consumption_watt)
        self.screen_size = screen_size
        self.resolution = resolution
        self.battery_capacity = battery_capacity
        self.battery_life = self.calculate_battery_life()
        self.weight = weight
        self.has_webcam = has_webcam
        self.has_touchscreen = has_touchscreen
        self.has_backlight = has_backlight

    def set_screen_size(self, screen_size):
        self.screen_size = screen_size

    def get_screen_size(self):
        return self.screen_size

    def set_resolution(self, resolution):
        self.resolution = resolution

    def get_resolution(self):
        return self.resolution

    def set_battery_capacity(self, battery_capacity):
        self.battery_capacity = battery_capacity
        self.battery_life = self.calculate_battery_life()

    def get_battery_capacity(self):
        return self.battery_capacity

    def get_battery_life(self):
        return self.battery_life

    def set_weight(self, weight):
        self.weight = weight

    def get_weight(self):
        return self.weight

    def set_has_webcam(self, has_webcam):
        self.has_webcam = has_webcam

    def get_has_webcam(self):
        return self.has_webcam

    def set_has_touchscreen(self, has_touchscreen):
        self.has_touchscreen = has_touchscreen

    def get_has_touchscreen(self):
        return self.has_touchscreen

    def set_has_backlight(self, has_backlight):
        self.has_backlight = has_backlight

    def get_has_backlight(self):
        return self.has_backlight

    def calculate_battery_life(self):
        return self.battery_capacity / self.power_supply.get_wattage()

    def __del__(self):
        pass