public class Komponen {
    // Attributes
    private String merk;
    private String nama;
    
    // Constructors
    public Komponen() {
        this.merk = "";
        this.nama = "";
    }
    
    public Komponen(String merk, String nama) {
        this.merk = merk;
        this.nama = nama;
    }
    
    // Getters
    public String getMerk() {
        return this.merk;
    }
    
    public String getNama() {
        return this.nama;
    }
    
    // Setters
    public void setMerk(String merk) {
        this.merk = merk;
    }
    
    public void setNama(String nama) {
        this.nama = nama;
    }
}
