package Java.Program;

public class Laptop extends Komputer {
    // Attributes
    private Portable portable;
    private String tipeLaptop;
    private String osLaptop;
    
    // Constructors
    public Laptop() {
        this.portable = new Portable();
        this.tipeLaptop = "";
        this.osLaptop = "";
    }
    
    public Laptop(String nama, Cpu cpu, GPU gpu, Harddrive storage, int batteryCapacity, float weight, String tipeLaptop, String osLaptop) {
        super(nama, cpu, gpu, storage);
        this.portable = new Portable(batteryCapacity, weight);
        this.tipeLaptop = tipeLaptop;
        this.osLaptop = osLaptop;
    }
    
    // Getters
    public int getBatteryCapacity() {
        return this.portable.getBatteryCapacity();
    }
    
    public float getWeight() {
        return this.portable.getWeight();
    }
    
    public String getTipeLaptop() {
        return this.tipeLaptop;
    }
    
    public String getOsLaptop() {
        return this.osLaptop;
    }
    
    // Setters
    public void setBatteryCapacity(int batteryCapacity) {
        this.portable.setBatteryCapacity(batteryCapacity);
    }
    
    public void setWeight(float weight) {
        this.portable.setWeight(weight);
    }
    
    public void setTipeLaptop(String tipeLaptop) {
        this.tipeLaptop = tipeLaptop;
    }
    
    public void setOsLaptop(String osLaptop) {
        this.osLaptop = osLaptop;
    }
}
