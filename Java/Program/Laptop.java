import java.util.List;

public class Laptop extends Komputer {
    private float screenSize;
    private String resolution;
    private int batteryCapacity;
    private int batteryLife;
    private float weight; 
    private boolean hasWebcam;
    private boolean hasTouchscreen;
    private boolean hasBacklight;

    public Laptop() {
        super();
    }

    public Laptop(String nama, Cpu cpu, Motherboard motherboard, List<Ram> ramList, 
                  List<Harddrive> harddriveList, PowerSupply powerSupply, List<GraphicsCard> gpuList, List<Peripheral> peripherals, String connectionType, String coolingType,
                  float screenSize, String resolution, int batteryCapacity, float weight, boolean hasWebcam, boolean hasTouchscreen, boolean hasBacklight,
                  String powerSource, int powerConsumptionWatt) {
        super(nama, cpu, motherboard, ramList, harddriveList, powerSupply, gpuList, peripherals, connectionType, coolingType, powerSource, powerConsumptionWatt);
        this.screenSize = screenSize;
        this.resolution = resolution;
        this.batteryCapacity = batteryCapacity;
        this.batteryLife = calculateBatteryLife();
        this.weight = weight;
        this.hasWebcam = hasWebcam;
        this.hasTouchscreen = hasTouchscreen;
        this.hasBacklight = hasBacklight;
    }

    public void setScreenSize(float screenSize) {
        this.screenSize = screenSize;
    }

    public float getScreenSize() {
        return this.screenSize;
    }

    public void setResolution(String resolution) {
        this.resolution = resolution;
    }

    public String getResolution() {
        return this.resolution;
    }

    public void setBatteryCapacity(int batteryCapacity) {
        this.batteryCapacity = batteryCapacity;
        this.batteryLife = calculateBatteryLife();
    }

    public int getBatteryCapacity() {
        return this.batteryCapacity;
    }

    public int getBatteryLife() {
        return this.batteryLife;
    }

    public void setWeight(float weight) {
        this.weight = weight;
    }

    public float getWeight() {
        return this.weight;
    }

    public void setHasWebcam(boolean hasWebcam) {
        this.hasWebcam = hasWebcam;
    }

    public boolean getHasWebcam() {
        return this.hasWebcam;
    }

    public void setHasTouchscreen(boolean hasTouchscreen) {
        this.hasTouchscreen = hasTouchscreen;
    }

    public boolean getHasTouchscreen() {
        return this.hasTouchscreen;
    }

    public void setHasBacklight(boolean hasBacklight) {
        this.hasBacklight = hasBacklight;
    }

    public boolean getHasBacklight() {
        return this.hasBacklight;
    }

    // Menghitung estimasi waktu pemakaian baterai dalam jam
    public int calculateBatteryLife() {
        return batteryCapacity / powerSupply.getWattage();
    }
}