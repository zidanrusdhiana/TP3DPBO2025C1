public class Mouse extends Peripheral {
    private String mouseType;
    private int dpi;
    private int buttonCount;
    private boolean isWireless;
    private boolean hasRGB;

    public Mouse() {
        super();
    }

    public Mouse(String mouseType, int dpi, int buttonCount, boolean isWireless,
                 String merk, String nama, String interfaceType) {
        super("Mouse", interfaceType, merk, nama, "Battery", 5);
        this.mouseType = mouseType;
        this.dpi = dpi;
        this.buttonCount = buttonCount;
        this.isWireless = isWireless;
        this.hasRGB = false;
    }

    public void setMouseType(String mouseType) {
        this.mouseType = mouseType;
    }

    public String getMouseType() {
        return this.mouseType;
    }

    public void setDpi(int dpi) {
        this.dpi = dpi;
    }

    public int getDpi() {
        return this.dpi;
    }

    public void setButtonCount(int buttonCount) {
        this.buttonCount = buttonCount;
    }

    public int getButtonCount() {
        return this.buttonCount;
    }

    public void setIsWireless(boolean isWireless) {
        this.isWireless = isWireless;
    }

    public boolean getIsWireless() {
        return this.isWireless;
    }

    public void setHasRGB(boolean hasRGB) {
        this.hasRGB = hasRGB;
    }

    public boolean getHasRGB() {
        return this.hasRGB;
    }

    @Override
    public void displayPeripheralInfo() {
        System.out.println("   - Mouse Type            : " + mouseType);
        System.out.println("   - DPI                   : " + dpi);
        System.out.println("   - Button Count          : " + buttonCount);
        System.out.println("   - Wireless              : " + (isWireless ? "Yes" : "No"));
        System.out.println("   - RGB                   : " + (hasRGB ? "Yes" : "No"));
    }
}