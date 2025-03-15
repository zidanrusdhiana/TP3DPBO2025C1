public class Komponen {
    private String merk;
    private String nama;

    public Komponen() {
    }

    public Komponen(String merk, String nama) {
        this.merk = merk;
        this.nama = nama;
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
}