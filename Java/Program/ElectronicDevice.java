public class ElectronicDevice {
    private String powerSource;
    private int powerConsumptionWatt;

    public ElectronicDevice() {
    }

    public ElectronicDevice(String powerSource, int powerConsumptionWatt) {
        this.powerSource = powerSource;
        this.powerConsumptionWatt = powerConsumptionWatt;
    }

    public void setPowerSource(String powerSource) {
        this.powerSource = powerSource;
    }

    public String getPowerSource() {
        return this.powerSource;
    }

    public void setPowerConsumptionWatt(int powerConsumptionWatt) {
        this.powerConsumptionWatt = powerConsumptionWatt;
    }

    public int getPowerConsumptionWatt() {
        return this.powerConsumptionWatt;
    }
}