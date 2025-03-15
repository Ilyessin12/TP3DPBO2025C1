package Java.Program;

public class FlagshipPhone extends Smartphone {
    // Attributes
    private int tahunKeluar;
    private String fiturUnggulan;
    
    // Constructors
    public FlagshipPhone() {
        this.tahunKeluar = 0;
        this.fiturUnggulan = "";
    }
    
    public FlagshipPhone(String nama, Cpu cpu, GPU gpu, Harddrive storage, int cameraMP, String osPhone, int tahunKeluar, String fiturUnggulan, int batteryCapacity, float weight) {
        super(nama, cpu, gpu, storage, cameraMP, osPhone, batteryCapacity, weight);
        this.tahunKeluar = tahunKeluar;
        this.fiturUnggulan = fiturUnggulan;
    }
    
    // Getters
    public int getTahunKeluar() {
        return this.tahunKeluar;
    }
    
    public String getFiturUnggulan() {
        return this.fiturUnggulan;
    }
    
    // Setters
    public void setTahunKeluar(int tahunKeluar) {
        this.tahunKeluar = tahunKeluar;
    }
    
    public void setFiturUnggulan(String fiturUnggulan) {
        this.fiturUnggulan = fiturUnggulan;
    }
}
