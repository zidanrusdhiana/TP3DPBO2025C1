from Peripheral import Peripheral

class Mouse(Peripheral):
    def __init__(self, mouse_type="", dpi=0, button_count=0, is_wireless=False, merk="", nama="", interface="USB"):
        super().__init__("Mouse", interface, merk, nama, "Battery", 5)
        self.mouse_type = mouse_type
        self.dpi = dpi
        self.button_count = button_count
        self.is_wireless = is_wireless
        self.has_rgb = False

    def set_mouse_type(self, mouse_type):
        self.mouse_type = mouse_type

    def get_mouse_type(self):
        return self.mouse_type

    def set_dpi(self, dpi):
        self.dpi = dpi

    def get_dpi(self):
        return self.dpi

    def set_button_count(self, button_count):
        self.button_count = button_count

    def get_button_count(self):
        return self.button_count

    def set_is_wireless(self, is_wireless):
        self.is_wireless = is_wireless

    def get_is_wireless(self):
        return self.is_wireless

    def set_has_rgb(self, has_rgb):
        self.has_rgb = has_rgb

    def get_has_rgb(self):
        return self.has_rgb

    def display_peripheral_info(self):
        print(f"   - Mouse Type            : {self.mouse_type}")
        print(f"   - DPI                   : {self.dpi}")
        print(f"   - Button Count          : {self.button_count}")
        print(f"   - Wireless              : {'Yes' if self.is_wireless else 'No'}")
        print(f"   - RGB                   : {'Yes' if self.has_rgb else 'No'}")