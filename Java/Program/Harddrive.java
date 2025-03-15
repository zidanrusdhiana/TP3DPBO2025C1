public class Harddrive extends Komponen {
    private int kapasitasGB;
    private String tipeDrive;
    private int readSpeedMBps;
    private int writeSpeedMBps;
    private String formFactor;
    private String interfaceType;

    public Harddrive() {
        super();
    }

    public Harddrive(int kapasitasGB, String tipeDrive, String merk, String nama) {
        super(merk, nama);
        this.kapasitasGB = kapasitasGB;
        this.tipeDrive = tipeDrive;
        this.readSpeedMBps = tipeDrive.equals("SSD") ? 550 : 120;
        this.writeSpeedMBps = tipeDrive.equals("SSD") ? 520 : 100;
        this.formFactor = tipeDrive.equals("SSD") ? "2.5 inch" : "3.5 inch";
        this.interfaceType = "SATA III";
    }

    public void setKapasitasGB(int kapasitasGB) {
        this.kapasitasGB = kapasitasGB;
    }

    public int getKapasitasGB() {
        return this.kapasitasGB;
    }

    public void setTipeDrive(String tipeDrive) {
        this.tipeDrive = tipeDrive;
    }

    public String getTipeDrive() {
        return this.tipeDrive;
    }

    public void setReadSpeedMBps(int readSpeedMBps) {
        this.readSpeedMBps = readSpeedMBps;
    }

    public int getReadSpeedMBps() {
        return this.readSpeedMBps;
    }

    public void setWriteSpeedMBps(int writeSpeedMBps) {
        this.writeSpeedMBps = writeSpeedMBps;
    }

    public int getWriteSpeedMBps() {
        return this.writeSpeedMBps;
    }

    public void setFormFactor(String formFactor) {
        this.formFactor = formFactor;
    }

    public String getFormFactor() {
        return this.formFactor;
    }

    public void setInterfaceType(String interfaceType) {
        this.interfaceType = interfaceType;
    }

    public String getInterfaceType() {
        return this.interfaceType;
    }
}