public class Keyboard extends Peripheral {
    private String keyboardType;
    private String layout;
    private boolean hasBacklight;
    private boolean hasMacro;
    private String switchType;

    public Keyboard() {
        super();
    }

    public Keyboard(String keyboardType, String layout, boolean hasBacklight, 
                    String merk, String nama, String interfaceType) {
        super("Keyboard", interfaceType, merk, nama, "Internal", 5);
        this.keyboardType = keyboardType;
        this.layout = layout;
        this.hasBacklight = hasBacklight;
        this.hasMacro = false;
        this.switchType = keyboardType.equals("Mechanical") ? "Cherry MX Red" : "N/A";
    }

    public void setKeyboardType(String keyboardType) {
        this.keyboardType = keyboardType;
        if (!keyboardType.equals("Mechanical")) {
            this.switchType = "N/A";
        }
    }

    public String getKeyboardType() {
        return this.keyboardType;
    }

    public void setLayout(String layout) {
        this.layout = layout;
    }

    public String getLayout() {
        return this.layout;
    }

    public void setHasBacklight(boolean hasBacklight) {
        this.hasBacklight = hasBacklight;
    }

    public boolean getHasBacklight() {
        return this.hasBacklight;
    }

    public void setHasMacro(boolean hasMacro) {
        this.hasMacro = hasMacro;
    }

    public boolean getHasMacro() {
        return this.hasMacro;
    }

    public void setSwitchType(String switchType) {
        if (this.keyboardType.equals("Mechanical")) {
            this.switchType = switchType;
        }
    }

    public String getSwitchType() {
        return this.switchType;
    }

    @Override
    public void displayPeripheralInfo() {
        System.out.println("   - Keyboard Type         : " + keyboardType);
        System.out.println("   - Layout                : " + layout);
        System.out.println("   - Backlight             : " + (hasBacklight ? "Yes" : "No"));
        System.out.println("   - Macro Keys            : " + (hasMacro ? "Yes" : "No"));
        if (keyboardType.equals("Mechanical")) {
            System.out.println("   - Switch Type           : " + switchType);
        }
    }
}