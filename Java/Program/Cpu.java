public class Cpu extends Komponen {
    private int jumlahCore;
    private float kecepatanGHz;
    private String coolingType;
    private int cacheSize; // in MB
    private String socketType;

    public Cpu() {
        super();
    }

    public Cpu(int jumlahCore, float kecepatanGHz, String merk, String nama) {
        super(merk, nama);
        this.jumlahCore = jumlahCore;
        this.kecepatanGHz = kecepatanGHz;
        this.coolingType = "Stock";
        this.cacheSize = 16;
        this.socketType = "AM4";
    }

    public void setJumlahCore(int jumlahCore) {
        this.jumlahCore = jumlahCore;
    }

    public int getJumlahCore() {
        return this.jumlahCore;
    }

    public void setKecepatanGHz(float kecepatanGHz) {
        this.kecepatanGHz = kecepatanGHz;
    }

    public float getKecepatanGHz() {
        return this.kecepatanGHz;
    }

    public void setCacheSize(int cacheSize) {
        this.cacheSize = cacheSize;
    }

    public int getCacheSize() {
        return this.cacheSize;
    }

    public void setSocketType(String socketType) {
        this.socketType = socketType;
    }

    public String getSocketType() {
        return this.socketType;
    }

    public void setCoolingType(String coolingType) {
        this.coolingType = coolingType;
    }

    public String getCoolingType() {
        return this.coolingType;
    }
}