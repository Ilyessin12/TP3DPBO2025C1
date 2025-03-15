// main.cpp
#include <bits/stdc++.h>
#include "FlagshipPhone.cpp"
#include "Laptop.cpp"
using namespace std;

// Function to create a line of a specific character and length
string createLine(char c, int length) {
    return string(length, c);
}

// Function to format table row
void printRow(string label, string value) {
    cout << "| " << setw(20) << left << label << " | " << setw(50) << left << value << " |" << endl;
}

// Function to display RAM information
void displayRamInfo(const Komputer& komputer, int width) {
    vector<Ram> ramList = komputer.getListRam();
    
    if (ramList.size() > 0) {
        printRow("RAM Modules", to_string(ramList.size()));
        int totalRam = 0;
        
        for (int i = 0; i < ramList.size(); i++) {
            string ramLabel = "RAM " + to_string(i + 1);
            string ramInfo = ramList[i].getMerk() + " " + ramList[i].getNama() + 
                            " (" + to_string(ramList[i].getKapasitasGB()) + " GB, " + 
                            ramList[i].getDdr() + ")";
            printRow(ramLabel, ramInfo);
            totalRam += ramList[i].getKapasitasGB();
        }
        
        printRow("Total RAM", to_string(totalRam) + " GB");
    } else {
        printRow("RAM Modules", "None");
    }
}

int main() {
    int width = 77;
    
    cout << createLine('=', width) << endl;
    cout << "|" << setw(width-2) << setiosflags(ios::right) << "SETUP GACOR" << "|" << endl;
    cout << createLine('=', width) << endl;
    
    
    Cpu intelCpu("Intel", "Core i7-12700K", 12, 3.6);
    Ram corsairRam1("Corsair", "Vengeance LPX", 16, "DDR4");
    Ram corsairRam2("Corsair", "Vengeance LPX", 16, "DDR4");
    GPU nvidiaGpu("NVIDIA", "RTX 3080", 10, "GDDR6X");
    Harddrive samsungSsd("Samsung", "980 Pro", 1000, "NVMe SSD");
    Komputer desktopPC("Gaming PC", intelCpu, nvidiaGpu, samsungSsd);
    desktopPC.addRam(corsairRam1);
    desktopPC.addRam(corsairRam2);
    cout << "\n" << createLine('=', width) << endl;
    cout << "|" << setw(width-2) << setiosflags(ios::right) << "DESKTOP PC" << "|" << endl;
    cout << createLine('=', width) << endl;
    printRow("Nama", desktopPC.getNama());
    printRow("CPU", desktopPC.getCpu().getMerk() + " " + desktopPC.getCpu().getNama());
    printRow("CPU Cores", to_string(desktopPC.getCpu().getJumlahCore()));
    printRow("CPU Speed", to_string(desktopPC.getCpu().getKecepahanGHz()) + " GHz");
    printRow("GPU", desktopPC.getGpu().getMerk() + " " + desktopPC.getGpu().getNama());
    printRow("GPU VRAM", to_string(desktopPC.getGpu().getVramGB()) + " GB " + desktopPC.getGpu().getMemoryType());
    printRow("Storage", desktopPC.getStorage().getMerk() + " " + desktopPC.getStorage().getNama());
    printRow("Storage Capacity", to_string(desktopPC.getStorage().getKapasitasGB()) + " GB " + desktopPC.getStorage().getTipeDrive());
    displayRamInfo(desktopPC, width);
    cout << createLine('=', width) << endl;
    
    // Create a laptop
    Cpu laptopCpu("AMD", "Ryzen 7 5800H", 8, 3.2);
    GPU laptopGpu("AMD", "Radeon RX 6700M", 8, "GDDR6");
    Harddrive laptopSsd("Western Digital", "SN750", 512, "NVMe SSD");
    
    Laptop gamingLaptop("ROG Strix G15", laptopCpu, laptopGpu, laptopSsd, 90, 2.3, "Gaming", "Windows 11");
    gamingLaptop.addRam(Ram("Kingston", "HyperX Impact", 16, "DDR4"));
    
    cout << "\n" << createLine('=', width) << endl;
    cout << "|" << setw(width-2) << setiosflags(ios::right) << "LAPTOP" << "|" << endl;
    cout << createLine('=', width) << endl;
    printRow("Nama", gamingLaptop.getNama());
    printRow("Tipe", gamingLaptop.getTipeLaptop());
    printRow("OS", gamingLaptop.getOsLaptop());
    printRow("CPU", gamingLaptop.getCpu().getMerk() + " " + gamingLaptop.getCpu().getNama());
    printRow("CPU Cores", to_string(gamingLaptop.getCpu().getJumlahCore()));
    printRow("CPU Speed", to_string(gamingLaptop.getCpu().getKecepahanGHz()) + " GHz");
    printRow("GPU", gamingLaptop.getGpu().getMerk() + " " + gamingLaptop.getGpu().getNama());
    printRow("GPU VRAM", to_string(gamingLaptop.getGpu().getVramGB()) + " GB " + gamingLaptop.getGpu().getMemoryType());
    printRow("Storage", gamingLaptop.getStorage().getMerk() + " " + gamingLaptop.getStorage().getNama());
    printRow("Storage Capacity", to_string(gamingLaptop.getStorage().getKapasitasGB()) + " GB " + gamingLaptop.getStorage().getTipeDrive());
    displayRamInfo(gamingLaptop, width);
    printRow("Baterai", to_string(gamingLaptop.getBatteryCapacity()) + " Wh");
    printRow("Berat", to_string(gamingLaptop.getWeight()) + " kg");
    cout << createLine('=', width) << endl;
    
    // Create a smartphone
    Cpu phoneCpu("Qualcomm", "Snapdragon 888", 8, 2.84);
    GPU phoneGpu("Adreno", "660", 4, "LPDDR5");
    Harddrive phoneStorage("Samsung", "UFS 3.1", 256, "Flash");
    
    Smartphone androidPhone("Samsung Galaxy S21", phoneCpu, phoneGpu, phoneStorage, 108, "Android 12");
    androidPhone.addRam(Ram("Samsung", "LPDDR5", 12, "LPDDR5"));
    
    cout << "\n" << createLine('=', width) << endl;
    cout << "|" << setw(width-2) << setiosflags(ios::right) << "SMARTPHONE" << "|" << endl;
    cout << createLine('=', width) << endl;
    printRow("Nama", androidPhone.getNama());
    printRow("OS", androidPhone.getOsPhone());
    printRow("CPU", androidPhone.getCpu().getMerk() + " " + androidPhone.getCpu().getNama());
    printRow("CPU Cores", to_string(androidPhone.getCpu().getJumlahCore()));
    printRow("CPU Speed", to_string(androidPhone.getCpu().getKecepahanGHz()) + " GHz");
    printRow("GPU", androidPhone.getGpu().getMerk() + " " + androidPhone.getGpu().getNama());
    printRow("GPU VRAM", to_string(androidPhone.getGpu().getVramGB()) + " GB " + androidPhone.getGpu().getMemoryType());
    printRow("Storage", androidPhone.getStorage().getMerk() + " " + androidPhone.getStorage().getNama());
    printRow("Storage Capacity", to_string(androidPhone.getStorage().getKapasitasGB()) + " GB " + androidPhone.getStorage().getTipeDrive());
    displayRamInfo(androidPhone, width);
    printRow("Kamera", to_string(androidPhone.getCameraMP()) + " MP");
    cout << createLine('=', width) << endl;
    
    // Create a flagship phone
    Cpu flagshipCpu("Apple", "A15 Bionic", 6, 3.23);
    GPU flagshipGpu("Apple", "A15 GPU", 5, "Unified Memory");
    Harddrive flagshipStorage("Apple", "NAND", 512, "Flash");
    
    FlagshipPhone iphone("iPhone 13 Pro Max", flagshipCpu, flagshipGpu, flagshipStorage, 12, "iOS 15", 2021, "ProMotion Display");
    iphone.addRam(Ram("Apple", "LPDDR4X", 6, "LPDDR4X"));
    
    cout << "\n" << createLine('=', width) << endl;
    cout << "|" << setw(width-2) << setiosflags(ios::right) << "FLAGSHIP PHONE" << "|" << endl;
    cout << createLine('=', width) << endl;
    printRow("Nama", iphone.getNama());
    printRow("OS", iphone.getOsPhone());
    printRow("CPU", iphone.getCpu().getMerk() + " " + iphone.getCpu().getNama());
    printRow("CPU Cores", to_string(iphone.getCpu().getJumlahCore()));
    printRow("CPU Speed", to_string(iphone.getCpu().getKecepahanGHz()) + " GHz");
    printRow("GPU", iphone.getGpu().getMerk() + " " + iphone.getGpu().getNama());
    printRow("GPU VRAM", to_string(iphone.getGpu().getVramGB()) + " GB " + iphone.getGpu().getMemoryType());
    printRow("Storage", iphone.getStorage().getMerk() + " " + iphone.getStorage().getNama());
    printRow("Storage Capacity", to_string(iphone.getStorage().getKapasitasGB()) + " GB " + iphone.getStorage().getTipeDrive());
    displayRamInfo(iphone, width);
    printRow("Kamera", to_string(iphone.getCameraMP()) + " MP");
    printRow("Tahun Keluar", to_string(iphone.getTahunKeluar()));
    printRow("Fitur Unggulan", iphone.getFiturUnggulan());
    cout << createLine('=', width) << endl;
    
    return 0;
}