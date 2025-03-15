package Java.Program;

public class Ram extends Komponen {
    // Attributes
    private int kapasitasGB;
    private String ddr;
    
    // Constructors
    public Ram() {
        this.kapasitasGB = 0;
        this.ddr = "";
    }
    
    public Ram(String merk, String nama, int kapasitasGB, String ddr) {
        super(merk, nama);
        this.kapasitasGB = kapasitasGB;
        this.ddr = ddr;
    }
    
    // Getters
    public int getKapasitasGB() {
        return this.kapasitasGB;
    }
    
    public String getDdr() {
        return this.ddr;
    }
    
    // Setters
    public void setKapasitasGB(int kapasitasGB) {
        this.kapasitasGB = kapasitasGB;
    }
    
    public void setDdr(String ddr) {
        this.ddr = ddr;
    }
}
