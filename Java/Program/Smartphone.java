package Java.Program;

public class Smartphone extends Komputer {
    // Attributes
    private Portable portable;
    private int cameraMP;
    private String osPhone;
    
    // Constructors
    public Smartphone() {
        this.portable = new Portable();
        this.cameraMP = 0;
        this.osPhone = "";
    }
    
    public Smartphone(String nama, Cpu cpu, GPU gpu, Harddrive storage, int cameraMP, String osPhone, int batteryCapacity, float weight) {
        super(nama, cpu, gpu, storage);
        this.portable = new Portable(batteryCapacity, weight);
        this.cameraMP = cameraMP;
        this.osPhone = osPhone;
    }
    
    // Getters
    public int getBatteryCapacity() {
        return this.portable.getBatteryCapacity();
    }
    
    public float getWeight() {
        return this.portable.getWeight();
    }
    
    public int getCameraMP() {
        return this.cameraMP;
    }
    
    public String getOsPhone() {
        return this.osPhone;
    }
    
    // Setters
    public void setBatteryCapacity(int batteryCapacity) {
        this.portable.setBatteryCapacity(batteryCapacity);
    }
    
    public void setWeight(float weight) {
        this.portable.setWeight(weight);
    }
    
    public void setCameraMP(int cameraMP) {
        this.cameraMP = cameraMP;
    }
    
    public void setOsPhone(String osPhone) {
        this.osPhone = osPhone;
    }
}
