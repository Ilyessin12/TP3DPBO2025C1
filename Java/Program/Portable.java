public class Portable {
    // Attributes
    private int batteryCapacity;
    private float weight;
    
    // Constructors
    public Portable() {
        this.batteryCapacity = 0;
        this.weight = 0.0f;
    }
    
    public Portable(int batteryCapacity, float weight) {
        this.batteryCapacity = batteryCapacity;
        this.weight = weight;
    }
    
    // Getters
    public int getBatteryCapacity() {
        return this.batteryCapacity;
    }
    
    public float getWeight() {
        return this.weight;
    }
    
    // Setters
    public void setBatteryCapacity(int batteryCapacity) {
        this.batteryCapacity = batteryCapacity;
    }
    
    public void setWeight(float weight) {
        this.weight = weight;
    }
}
