public class Cpu extends Komponen {
    // Attributes
    private int jumlahCore;
    private float kecepatanGHz;
    
    // Constructors
    public Cpu() {
        this.jumlahCore = 0;
        this.kecepatanGHz = 0.0f;
    }
    
    public Cpu(String merk, String nama, int jumlahCore, float kecepatanGHz) {
        super(merk, nama);
        this.jumlahCore = jumlahCore;
        this.kecepatanGHz = kecepatanGHz;
    }
    
    // Getters
    public int getJumlahCore() {
        return this.jumlahCore;
    }
    
    public float getKecepatanGHz() {
        return this.kecepatanGHz;
    }
    
    // Setters
    public void setJumlahCore(int jumlahCore) {
        this.jumlahCore = jumlahCore;
    }
    
    public void setKecepatanGHz(float kecepatanGHz) {
        this.kecepatanGHz = kecepatanGHz;
    }
}
