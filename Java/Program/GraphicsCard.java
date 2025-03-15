public class GraphicsCard extends Komponen {
    private int vramGB;
    private String gpuModel;
    private int cudaCores;
    private int baseClock;
    private int boostClock;
    private String memoryType;
    private int memoryBandwidth;
    private String coolingType;

    public GraphicsCard() {
        super();
    }

    public GraphicsCard(int vramGB, String gpuModel, int cudaCores, int baseClock, int boostClock, String memoryType, int memoryBandwidth, String coolingType, String merk, String nama) {
        super(merk, nama);
        this.vramGB = vramGB;
        this.gpuModel = gpuModel;
        this.cudaCores = cudaCores;
        this.baseClock = baseClock;
        this.boostClock = boostClock;
        this.memoryType = memoryType;
        this.memoryBandwidth = memoryBandwidth;
        this.coolingType = coolingType;
    }

    public void setVramGB(int vramGB) {
        this.vramGB = vramGB;
    }

    public int getVramGB() {
        return this.vramGB;
    }

    public void setGpuModel(String gpuModel) {
        this.gpuModel = gpuModel;
    }

    public String getGpuModel() {
        return this.gpuModel;
    }

    public void setCudaCores(int cudaCores) {
        this.cudaCores = cudaCores;
    }

    public int getCudaCores() {
        return this.cudaCores;
    }

    public void setBaseClock(int baseClock) {
        this.baseClock = baseClock;
    }

    public int getBaseClock() {
        return this.baseClock;
    }

    public void setBoostClock(int boostClock) {
        this.boostClock = boostClock;
    }

    public int getBoostClock() {
        return this.boostClock;
    }

    public void setMemoryType(String memoryType) {
        this.memoryType = memoryType;
    }

    public String getMemoryType() {
        return this.memoryType;
    }

    public void setMemoryBandwidth(int memoryBandwidth) {
        this.memoryBandwidth = memoryBandwidth;
    }

    public int getMemoryBandwidth() {
        return this.memoryBandwidth;
    }

    public void setCoolingType(String coolingType) {
        this.coolingType = coolingType;
    }

    public String getCoolingType() {
        return this.coolingType;
    }
}