package Java.Program;

import java.util.ArrayList;
import java.util.List;

public class Komputer {
    // Attributes
    private String nama;
    private Cpu cpu;
    private List<Ram> listRam;
    private GPU gpu;
    private Harddrive storage;
    
    // Constructors
    public Komputer() {
        this.nama = "";
        this.listRam = new ArrayList<>();
    }
    
    public Komputer(String nama, Cpu cpu, GPU gpu, Harddrive storage) {
        this.nama = nama;
        this.cpu = cpu;
        this.gpu = gpu;
        this.storage = storage;
        this.listRam = new ArrayList<>();
    }
    
    // Getters
    public String getNama() {
        return this.nama;
    }
    
    public Cpu getCpu() {
        return this.cpu;
    }
    
    public List<Ram> getListRam() {
        return this.listRam;
    }
    
    public GPU getGpu() {
        return this.gpu;
    }
    
    public Harddrive getStorage() {
        return this.storage;
    }
    
    // Setters
    public void setNama(String nama) {
        this.nama = nama;
    }
    
    public void setCpu(Cpu cpu) {
        this.cpu = cpu;
    }
    
    public void setGpu(GPU gpu) {
        this.gpu = gpu;
    }
    
    public void setStorage(Harddrive storage) {
        this.storage = storage;
    }
    
    // Methods
    public void addRam(Ram ram) {
        this.listRam.add(ram);
    }
}
