public abstract class Peripheral extends ElectronicDevice {
    private String merk;
    private String nama;
    private String type;
    private String interfaceType; // USB, Bluetooth, etc.

    public Peripheral() {
        super();
    }

    public Peripheral(String type, String interfaceType, String merk, String nama, String powerSource, int powerConsumptionWatt) {
        super(powerSource, powerConsumptionWatt);
        this.merk = merk;
        this.nama = nama;
        this.type = type;
        this.interfaceType = interfaceType;
    }

    public void setMerk(String merk) {
        this.merk = merk;
    }

    public String getMerk() {
        return this.merk;
    }

    public void setNama(String nama) {
        this.nama = nama;
    }

    public String getNama() {
        return this.nama;
    }

    public void setType(String type) {
        this.type = type;
    }

    public String getType() {
        return this.type;
    }

    public void setInterfaceType(String interfaceType) {
        this.interfaceType = interfaceType;
    }

    public String getInterfaceType() {
        return this.interfaceType;
    }

    // Abstract method untuk info khusus tiap peripheral
    public abstract void displayPeripheralInfo();
}