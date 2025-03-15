from Peripheral import Peripheral

class Keyboard(Peripheral):
    def __init__(self, keyboard_type="", layout="", has_backlight=False, merk="", nama="", interface="USB"):
        super().__init__("Keyboard", interface, merk, nama, "Internal", 5)
        self.keyboard_type = keyboard_type
        self.layout = layout
        self.has_backlight = has_backlight
        self.has_macro = False
        self.switch_type = "Cherry MX Red" if keyboard_type == "Mechanical" else "N/A"

    def set_keyboard_type(self, keyboard_type):
        self.keyboard_type = keyboard_type
        if keyboard_type != "Mechanical":
            self.switch_type = "N/A"

    def get_keyboard_type(self):
        return self.keyboard_type

    def set_layout(self, layout):
        self.layout = layout

    def get_layout(self):
        return self.layout

    def set_has_backlight(self, has_backlight):
        self.has_backlight = has_backlight

    def get_has_backlight(self):
        return self.has_backlight

    def set_has_macro(self, has_macro):
        self.has_macro = has_macro

    def get_has_macro(self):
        return self.has_macro

    def set_switch_type(self, switch_type):
        if self.keyboard_type == "Mechanical":
            self.switch_type = switch_type

    def get_switch_type(self):
        return self.switch_type

    def display_peripheral_info(self):
        print(f"   - Keyboard Type         : {self.keyboard_type}")
        print(f"   - Layout                : {self.layout}")
        print(f"   - Backlight             : {'Yes' if self.has_backlight else 'No'}")
        print(f"   - Macro Keys            : {'Yes' if self.has_macro else 'No'}")
        if self.keyboard_type == "Mechanical":
            print(f"   - Switch Type           : {self.switch_type}")