import java.util.List;

public class main {

    // Function to create a line of a specific character and length
    public static String createLine(char c, int length) {
        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < length; i++) {
            sb.append(c);
        }
        return sb.toString();
    }

    // Function to format table row (matches the main.cpp formatting)
    public static void printRow(String label, String value) {
        System.out.printf("| %-20s | %-50s |%n", label, value);
    }

    // Function to display RAM information
    public static void displayRamInfo(Komputer komputer, int width) {
        List<Ram> ramList = komputer.getListRam();

        if (ramList.size() > 0) {
            printRow("RAM Modules", Integer.toString(ramList.size()));
            int totalRam = 0;

            for (int i = 0; i < ramList.size(); i++) {
                String ramLabel = "RAM " + (i + 1);
                String ramInfo = ramList.get(i).getMerk() + " " + ramList.get(i).getNama() +
                                " (" + ramList.get(i).getKapasitasGB() + " GB, " +
                                ramList.get(i).getDdr() + ")";
                printRow(ramLabel, ramInfo);
                totalRam += ramList.get(i).getKapasitasGB();
            }

            printRow("Total RAM", totalRam + " GB");
        } else {
            printRow("RAM Modules", "None");
        }
    }

    public static void main(String[] args) {
        int width = 77;

        System.out.println(createLine('=', width));
        // Right-align header text similar to main.cpp: using String.format with a padded field.
        System.out.println("|" + String.format("%" + (width - 2) + "s", "SETUP GACOR") + "|");
        System.out.println(createLine('=', width));

        // Create a desktop PC
        Cpu intelCpu = new Cpu("Intel", "Core i7-12700K", 12, 3.6f);
        Ram corsairRam1 = new Ram("Corsair", "Vengeance LPX", 16, "DDR4");
        Ram corsairRam2 = new Ram("Corsair", "Vengeance LPX", 16, "DDR4");
        GPU nvidiaGpu = new GPU("NVIDIA", "RTX 3080", 10, "GDDR6X");
        Harddrive samsungSsd = new Harddrive("Samsung", "980 Pro", 1000, "NVMe SSD");
        Komputer desktopPC = new Komputer("Gaming PC", intelCpu, nvidiaGpu, samsungSsd);
        desktopPC.addRam(corsairRam1);
        desktopPC.addRam(corsairRam2);

        System.out.println("\n" + createLine('=', width));
        System.out.println("|" + String.format("%" + (width - 2) + "s", "DESKTOP PC") + "|");
        System.out.println(createLine('=', width));
        printRow("Nama", desktopPC.getNama());
        printRow("CPU", desktopPC.getCpu().getMerk() + " " + desktopPC.getCpu().getNama());
        printRow("CPU Cores", Integer.toString(desktopPC.getCpu().getJumlahCore()));
        printRow("CPU Speed", desktopPC.getCpu().getKecepatanGHz() + " GHz");
        printRow("GPU", desktopPC.getGpu().getMerk() + " " + desktopPC.getGpu().getNama());
        printRow("GPU VRAM", desktopPC.getGpu().getVramGB() + " GB " + desktopPC.getGpu().getMemoryType());
        printRow("Storage", desktopPC.getStorage().getMerk() + " " + desktopPC.getStorage().getNama());
        printRow("Storage Capacity", desktopPC.getStorage().getKapasitasGB() + " GB " + desktopPC.getStorage().getTipeDrive());
        displayRamInfo(desktopPC, width);
        System.out.println(createLine('=', width));

        // Create a laptop
        Cpu laptopCpu = new Cpu("AMD", "Ryzen 7 5800H", 8, 3.2f);
        GPU laptopGpu = new GPU("AMD", "Radeon RX 6700M", 8, "GDDR6");
        Harddrive laptopSsd = new Harddrive("Western Digital", "SN750", 512, "NVMe SSD");

        Laptop gamingLaptop = new Laptop("ROG Strix G15", laptopCpu, laptopGpu, laptopSsd, 90, 2.3f, "Gaming", "Windows 11");
        gamingLaptop.addRam(new Ram("Kingston", "HyperX Impact", 16, "DDR4"));

        System.out.println("\n" + createLine('=', width));
        System.out.println("|" + String.format("%" + (width - 2) + "s", "LAPTOP") + "|");
        System.out.println(createLine('=', width));
        printRow("Nama", gamingLaptop.getNama());
        printRow("Tipe", gamingLaptop.getTipeLaptop());
        printRow("OS", gamingLaptop.getOsLaptop());
        printRow("CPU", gamingLaptop.getCpu().getMerk() + " " + gamingLaptop.getCpu().getNama());
        printRow("CPU Cores", Integer.toString(gamingLaptop.getCpu().getJumlahCore()));
        printRow("CPU Speed", gamingLaptop.getCpu().getKecepatanGHz() + " GHz");
        printRow("GPU", gamingLaptop.getGpu().getMerk() + " " + gamingLaptop.getGpu().getNama());
        printRow("GPU VRAM", gamingLaptop.getGpu().getVramGB() + " GB " + gamingLaptop.getGpu().getMemoryType());
        printRow("Storage", gamingLaptop.getStorage().getMerk() + " " + gamingLaptop.getStorage().getNama());
        printRow("Storage Capacity", gamingLaptop.getStorage().getKapasitasGB() + " GB " + gamingLaptop.getStorage().getTipeDrive());
        displayRamInfo(gamingLaptop, width);
        printRow("Baterai", gamingLaptop.getBatteryCapacity() + " Wh");
        printRow("Berat", gamingLaptop.getWeight() + " kg");
        System.out.println(createLine('=', width));

        // Create a smartphone
        Cpu phoneCpu = new Cpu("Qualcomm", "Snapdragon 888", 8, 2.84f);
        GPU phoneGpu = new GPU("Adreno", "660", 4, "LPDDR5");
        Harddrive phoneStorage = new Harddrive("Samsung", "UFS 3.1", 256, "Flash");

        Smartphone androidPhone = new Smartphone("Samsung Galaxy S21", phoneCpu, phoneGpu, phoneStorage, 108, "Android 12", 4000, 0.169f);
        androidPhone.addRam(new Ram("Samsung", "LPDDR5", 12, "LPDDR5"));

        System.out.println("\n" + createLine('=', width));
        System.out.println("|" + String.format("%" + (width - 2) + "s", "SMARTPHONE") + "|");
        System.out.println(createLine('=', width));
        printRow("Nama", androidPhone.getNama());
        printRow("OS", androidPhone.getOsPhone());
        printRow("CPU", androidPhone.getCpu().getMerk() + " " + androidPhone.getCpu().getNama());
        printRow("CPU Cores", Integer.toString(androidPhone.getCpu().getJumlahCore()));
        printRow("CPU Speed", androidPhone.getCpu().getKecepatanGHz() + " GHz");
        printRow("GPU", androidPhone.getGpu().getMerk() + " " + androidPhone.getGpu().getNama());
        printRow("GPU VRAM", androidPhone.getGpu().getVramGB() + " GB " + androidPhone.getGpu().getMemoryType());
        printRow("Storage", androidPhone.getStorage().getMerk() + " " + androidPhone.getStorage().getNama());
        printRow("Storage Capacity", androidPhone.getStorage().getKapasitasGB() + " GB " + androidPhone.getStorage().getTipeDrive());
        displayRamInfo(androidPhone, width);
        printRow("Kamera", androidPhone.getCameraMP() + " MP");
        printRow("Baterai", androidPhone.getBatteryCapacity() + " mAh");
        printRow("Berat", androidPhone.getWeight() + " kg");
        System.out.println(createLine('=', width));

        // Create a flagship phone
        Cpu flagshipCpu = new Cpu("Apple", "A15 Bionic", 6, 3.23f);
        GPU flagshipGpu = new GPU("Apple", "A15 GPU", 5, "Unified Memory");
        Harddrive flagshipStorage = new Harddrive("Apple", "NAND", 512, "Flash");

        FlagshipPhone iphone = new FlagshipPhone("iPhone 13 Pro Max", flagshipCpu, flagshipGpu, flagshipStorage, 12, "iOS 15", 2021, "ProMotion Display", 4352, 0.238f);
        iphone.addRam(new Ram("Apple", "LPDDR4X", 6, "LPDDR4X"));

        System.out.println("\n" + createLine('=', width));
        System.out.println("|" + String.format("%" + (width - 2) + "s", "FLAGSHIP PHONE") + "|");
        System.out.println(createLine('=', width));
        printRow("Nama", iphone.getNama());
        printRow("OS", iphone.getOsPhone());
        printRow("CPU", iphone.getCpu().getMerk() + " " + iphone.getCpu().getNama());
        printRow("CPU Cores", Integer.toString(iphone.getCpu().getJumlahCore()));
        printRow("CPU Speed", iphone.getCpu().getKecepatanGHz() + " GHz");
        printRow("GPU", iphone.getGpu().getMerk() + " " + iphone.getGpu().getNama());
        printRow("GPU VRAM", iphone.getGpu().getVramGB() + " GB " + iphone.getGpu().getMemoryType());
        printRow("Storage", iphone.getStorage().getMerk() + " " + iphone.getStorage().getNama());
        printRow("Storage Capacity", iphone.getStorage().getKapasitasGB() + " GB " + iphone.getStorage().getTipeDrive());
        displayRamInfo(iphone, width);
        printRow("Kamera", iphone.getCameraMP() + " MP");
        printRow("Tahun Keluar", Integer.toString(iphone.getTahunKeluar()));
        printRow("Fitur Unggulan", iphone.getFiturUnggulan());
        printRow("Baterai", iphone.getBatteryCapacity() + " mAh");
        printRow("Berat", iphone.getWeight() + " kg");
        System.out.println(createLine('=', width));
    }
}