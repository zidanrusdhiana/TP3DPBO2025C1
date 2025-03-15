public class Monitor extends Peripheral {
    private float sizeInch;
    private String resolution;
    private int refreshRate;
    private String panelType; // IPS, TN, VA, etc.
    private boolean hasHDR;
    private int brightness; // in nits

    public Monitor() {
        super();
    }

    public Monitor(float sizeInch, String resolution, int refreshRate, String panelType,
                   String merk, String nama, String interfaceType) {
        super("Monitor", interfaceType, merk, nama, "Internal", 50);
        this.sizeInch = sizeInch;
        this.resolution = resolution;
        this.refreshRate = refreshRate;
        this.panelType = panelType;
        this.hasHDR = false;
        this.brightness = 300;
    }

    public void setSizeInch(float sizeInch) {
        this.sizeInch = sizeInch;
    }

    public float getSizeInch() {
        return this.sizeInch;
    }

    public void setResolution(String resolution) {
        this.resolution = resolution;
    }

    public String getResolution() {
        return this.resolution;
    }

    public void setRefreshRate(int refreshRate) {
        this.refreshRate = refreshRate;
    }

    public int getRefreshRate() {
        return this.refreshRate;
    }

    public void setPanelType(String panelType) {
        this.panelType = panelType;
    }

    public String getPanelType() {
        return this.panelType;
    }

    public void setHasHDR(boolean hasHDR) {
        this.hasHDR = hasHDR;
    }

    public boolean getHasHDR() {
        return this.hasHDR;
    }

    public void setBrightness(int brightness) {
        this.brightness = brightness;
    }

    public int getBrightness() {
        return this.brightness;
    }

    @Override
    public void displayPeripheralInfo() {
        System.out.println("   - Size                  : " + sizeInch + " inch");
        System.out.println("   - Resolution            : " + resolution);
        System.out.println("   - Refresh Rate          : " + refreshRate + " Hz");
        System.out.println("   - Panel Type            : " + panelType);
        System.out.println("   - HDR                   : " + (hasHDR ? "Yes" : "No"));
        System.out.println("   - Brightness            : " + brightness + " nits");
    }
}