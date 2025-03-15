package Java.Program;

public class GPU extends Komponen {
    // Attributes
    private int vramGB;
    private String memoryType;
    
    // Constructors
    public GPU() {
        this.vramGB = 0;
        this.memoryType = "";
    }
    
    public GPU(String merk, String nama, int vramGB, String memoryType) {
        super(merk, nama);
        this.vramGB = vramGB;
        this.memoryType = memoryType;
    }
    
    // Getters
    public int getVramGB() {
        return this.vramGB;
    }
    
    public String getMemoryType() {
        return this.memoryType;
    }
    
    // Setters
    public void setVramGB(int vramGB) {
        this.vramGB = vramGB;
    }
    
    public void setMemoryType(String memoryType) {
        this.memoryType = memoryType;
    }
}
