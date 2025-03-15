import java.util.ArrayList;
import java.util.List;

public class Komputer extends ElectronicDevice {
    protected String nama;
    protected Cpu cpu;
    protected Motherboard motherboard;
    protected List<Ram> ramList;
    protected List<Harddrive> harddriveList;
    protected PowerSupply powerSupply;
    protected List<GraphicsCard> gpuList;
    protected List<Peripheral> peripherals;
    protected String connectionType;
    protected String coolingType;

    public Komputer() {
        super();
        this.ramList = new ArrayList<>();
        this.harddriveList = new ArrayList<>();
        this.gpuList = new ArrayList<>();
        this.peripherals = new ArrayList<>();
    }

    public Komputer(String nama, Cpu cpu, Motherboard motherboard, List<Ram> ramList, 
                    List<Harddrive> harddriveList, PowerSupply powerSupply, List<GraphicsCard> gpuList, List<Peripheral> peripherals, String connectionType, String coolingType,
                    String powerSource, int powerConsumptionWatt) {
        super(powerSource, powerConsumptionWatt);
        this.nama = nama;
        this.cpu = cpu;
        this.motherboard = motherboard;
        this.ramList = ramList;
        this.harddriveList = harddriveList;
        this.powerSupply = powerSupply;
        this.gpuList = gpuList;
        this.peripherals = peripherals;
        this.connectionType = connectionType;
        this.coolingType = coolingType;
    }

    public void setNama(String nama) {
        this.nama = nama;
    }

    public String getNama() {
        return this.nama;
    }

    public void setCpu(Cpu cpu) {
        this.cpu = cpu;
    }

    public Cpu getCpu() {
        return this.cpu;
    }

    public void setMotherboard(Motherboard motherboard) {
        this.motherboard = motherboard;
    }

    public Motherboard getMotherboard() {
        return this.motherboard;
    }

    public void setRamList(List<Ram> ramList) {
        this.ramList = ramList;
    }

    public List<Ram> getRamList() {
        return this.ramList;
    }

    public void setHarddriveList(List<Harddrive> harddriveList) {
        this.harddriveList = harddriveList;
    }

    public List<Harddrive> getHarddriveList() {
        return this.harddriveList;
    }

    public void setPowerSupply(PowerSupply powerSupply) {
        this.powerSupply = powerSupply;
    }

    public PowerSupply getPowerSupply() {
        return this.powerSupply;
    }

    public void setGpuList(List<GraphicsCard> gpuList) {
        this.gpuList = gpuList;
    }

    public List<GraphicsCard> getGpuList() {
        return this.gpuList;
    }

    public void setPeripherals(List<Peripheral> peripherals) {
        this.peripherals = peripherals;
    }

    public List<Peripheral> getPeripherals() {
        return this.peripherals;
    }

    public void addRam(Ram ram) {
        this.ramList.add(ram);
    }

    public void addHarddrive(Harddrive harddrive) {
        this.harddriveList.add(harddrive);
    }

    public void addGraphicsCard(GraphicsCard gpu) {
        this.gpuList.add(gpu);
    }

    public void addPeripheral(Peripheral peripheral) {
        this.peripherals.add(peripheral);
    }

    public int getTotalRamCapacity() {
        int total = 0;
        for (Ram ram : ramList) {
            total += ram.getKapasitasGB();
        }
        return total;
    }

    public int getTotalStorageCapacity() {
        int total = 0;
        for (Harddrive hd : harddriveList) {
            total += hd.getKapasitasGB();
        }
        return total;
    }

    public void setConnectionType(String connectionType) {
        this.connectionType = connectionType;
    }

    public String getConnectionType() {
        return this.connectionType;
    }

    public void setCoolingType(String coolingType) {
        this.coolingType = coolingType;
    }

    public String getCoolingType() {
        return this.coolingType;
    }
}