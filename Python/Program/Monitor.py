from Peripheral import Peripheral

class Monitor(Peripheral):
    def __init__(self, size_inch=0.0, resolution="", refresh_rate=0, panel_type="", merk="", nama="", interface="HDMI"):
        super().__init__("Monitor", interface, merk, nama, "Internal", 50)
        self.size_inch = size_inch
        self.resolution = resolution
        self.refresh_rate = refresh_rate
        self.panel_type = panel_type
        self.has_hdr = False
        self.brightness = 300

    def set_size_inch(self, size_inch):
        self.size_inch = size_inch

    def get_size_inch(self):
        return self.size_inch

    def set_resolution(self, resolution):
        self.resolution = resolution

    def get_resolution(self):
        return self.resolution

    def set_refresh_rate(self, refresh_rate):
        self.refresh_rate = refresh_rate

    def get_refresh_rate(self):
        return self.refresh_rate

    def set_panel_type(self, panel_type):
        self.panel_type = panel_type

    def get_panel_type(self):
        return self.panel_type

    def set_has_hdr(self, has_hdr):
        self.has_hdr = has_hdr

    def get_has_hdr(self):
        return self.has_hdr

    def set_brightness(self, brightness):
        self.brightness = brightness

    def get_brightness(self):
        return self.brightness

    def display_peripheral_info(self):
        print(f"   - Size                  : {self.size_inch} inch")
        print(f"   - Resolution            : {self.resolution}")
        print(f"   - Refresh Rate          : {self.refresh_rate} Hz")
        print(f"   - Panel Type            : {self.panel_type}")
        print(f"   - HDR                   : {'Yes' if self.has_hdr else 'No'}")
        print(f"   - Brightness            : {self.brightness} nits")