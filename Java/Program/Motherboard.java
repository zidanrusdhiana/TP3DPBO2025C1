public class Motherboard extends Komponen {
    private String chipset;
    private String socketType;
    private String formFactor;
    private int maxRamGB;
    private int ramSlots;
    private int pciSlots;
    private int sataConnectors;
    private boolean hasWifi;
    private boolean hasBluetooth;

    public Motherboard() {
        super();
    }

    public Motherboard(String chipset, String socketType, String formFactor, int maxRamGB, int ramSlots, int pciSlots, int sataConnectors, boolean hasWifi, boolean hasBluetooth,
                       String merk, String nama) {
        super(merk, nama);
        this.chipset = chipset;
        this.socketType = socketType;
        this.formFactor = formFactor;
        this.maxRamGB = maxRamGB;
        this.ramSlots = ramSlots;
        this.pciSlots = pciSlots;
        this.sataConnectors = sataConnectors;
        this.hasWifi = hasWifi;
        this.hasBluetooth = hasBluetooth;
    }

    public void setChipset(String chipset) {
        this.chipset = chipset;
    }

    public String getChipset() {
        return this.chipset;
    }

    public void setSocketType(String socketType) {
        this.socketType = socketType;
    }

    public String getSocketType() {
        return this.socketType;
    }

    public void setFormFactor(String formFactor) {
        this.formFactor = formFactor;
    }

    public String getFormFactor() {
        return this.formFactor;
    }

    public void setMaxRamGB(int maxRamGB) {
        this.maxRamGB = maxRamGB;
    }

    public int getMaxRamGB() {
        return this.maxRamGB;
    }

    public void setRamSlots(int ramSlots) {
        this.ramSlots = ramSlots;
    }

    public int getRamSlots() {
        return this.ramSlots;
    }

    public void setPciSlots(int pciSlots) {
        this.pciSlots = pciSlots;
    }

    public int getPciSlots() {
        return this.pciSlots;
    }

    public void setSataConnectors(int sataConnectors) {
        this.sataConnectors = sataConnectors;
    }

    public int getSataConnectors() {
        return this.sataConnectors;
    }

    public void setHasWifi(boolean hasWifi) {
        this.hasWifi = hasWifi;
    }

    public boolean getHasWifi() {
        return this.hasWifi;
    }

    public void setHasBluetooth(boolean hasBluetooth) {
        this.hasBluetooth = hasBluetooth;
    }

    public boolean getHasBluetooth() {
        return this.hasBluetooth;
    }
}