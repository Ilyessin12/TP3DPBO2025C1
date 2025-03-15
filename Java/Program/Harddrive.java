public class Harddrive extends Komponen {
    // Attributes
    private int kapasitasGB;
    private String tipeDrive;
    
    // Constructors
    public Harddrive() {
        this.kapasitasGB = 0;
        this.tipeDrive = "";
    }
    
    public Harddrive(String merk, String nama, int kapasitasGB, String tipeDrive) {
        super(merk, nama);
        this.kapasitasGB = kapasitasGB;
        this.tipeDrive = tipeDrive;
    }
    
    // Getters
    public int getKapasitasGB() {
        return this.kapasitasGB;
    }
    
    public String getTipeDrive() {
        return this.tipeDrive;
    }
    
    // Setters
    public void setKapasitasGB(int kapasitasGB) {
        this.kapasitasGB = kapasitasGB;
    }
    
    public void setTipeDrive(String tipeDrive) {
        this.tipeDrive = tipeDrive;
    }
}
