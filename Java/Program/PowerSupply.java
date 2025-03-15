public class PowerSupply extends Komponen {
    private int wattage;
    private String certification; // 80+ Bronze, Gold, Platinum, etc.
    private boolean modular;
    private float efficiency;

    public PowerSupply() {
        super();
    }

    public PowerSupply(int wattage, String certification, boolean modular, String merk, String nama) {
        super(merk, nama);
        this.wattage = wattage;
        this.certification = certification;
        this.modular = modular;

        switch (certification) {
            case "80+ Titanium":
                this.efficiency = 0.94f;
                break;
            case "80+ Platinum":
                this.efficiency = 0.92f;
                break;
            case "80+ Gold":
                this.efficiency = 0.90f;
                break;
            case "80+ Silver":
                this.efficiency = 0.88f;
                break;
            case "80+ Bronze":
                this.efficiency = 0.85f;
                break;
            default:
                this.efficiency = 0.80f;
                break;
        }
    }

    public void setWattage(int wattage) {
        this.wattage = wattage;
    }

    public int getWattage() {
        return this.wattage;
    }

    public void setCertification(String certification) {
        this.certification = certification;

        switch (certification) {
            case "80+ Titanium":
                this.efficiency = 0.94f;
                break;
            case "80+ Platinum":
                this.efficiency = 0.92f;
                break;
            case "80+ Gold":
                this.efficiency = 0.90f;
                break;
            case "80+ Silver":
                this.efficiency = 0.88f;
                break;
            case "80+ Bronze":
                this.efficiency = 0.85f;
                break;
            default:
                this.efficiency = 0.80f;
                break;
        }
    }

    public String getCertification() {
        return this.certification;
    }

    public void setModular(boolean modular) {
        this.modular = modular;
    }

    public boolean isModular() {
        return this.modular;
    }

    public float getEfficiency() {
        return this.efficiency;
    }

    public int calculateActualPowerOutput(int requiredWattage) {
        return (int) (requiredWattage / this.efficiency);
    }
}