public class Ram extends Komponen {
    private int kapasitasGB;
    private String ddr;
    private int speedMHz;
    private boolean dualChannel;

    public Ram() {
        super();
    }

    public Ram(int kapasitasGB, String ddr, int speedMHz, boolean dualChannel, String merk, String nama) {
        super(merk, nama);
        this.kapasitasGB = kapasitasGB;
        this.ddr = ddr;
        this.speedMHz = speedMHz;
        this.dualChannel = dualChannel;
    }

    public void setKapasitasGB(int kapasitasGB) {
        this.kapasitasGB = kapasitasGB;
    }

    public int getKapasitasGB() {
        return this.kapasitasGB;
    }

    public void setDdr(String ddr) {
        this.ddr = ddr;
    }

    public String getDdr() {
        return this.ddr;
    }

    public void setSpeedMHz(int speedMHz) {
        this.speedMHz = speedMHz;
    }

    public int getSpeedMHz() {
        return this.speedMHz;
    }

    public void setDualChannel(boolean dualChannel) {
        this.dualChannel = dualChannel;
    }

    public boolean isDualChannel() {
        return this.dualChannel;
    }
}