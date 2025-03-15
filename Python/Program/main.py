from Komputer import Komputer
from Cpu import Cpu
from GPU import GPU
from Ram import Ram
from Harddrive import Harddrive
from Laptop import Laptop
from Smartphone import Smartphone
from FlagshipPhone import FlagshipPhone

# Function to create a line of a specific character and length
def create_line(char, length):
    return char * length

# Function to format table row
def print_row(label, value):
    print(f"| {label:<20} | {value:<50} |")

# Function to display RAM information
def display_ram_info(komputer):
    ram_list = komputer.get_list_ram()
    
    if len(ram_list) > 0:
        print_row("RAM Modules", str(len(ram_list)))
        total_ram = 0
        
        for i in range(len(ram_list)):
            ram_label = f"RAM {i + 1}"
            ram_info = f"{ram_list[i].get_merk()} {ram_list[i].get_nama()} ({ram_list[i].get_kapasitas_GB()} GB, {ram_list[i].get_ddr()})"
            print_row(ram_label, ram_info)
            total_ram += ram_list[i].get_kapasitas_GB()
        
        print_row("Total RAM", f"{total_ram} GB")
    else:
        print_row("RAM Modules", "None")

def main():
    width = 77
    
    print(create_line('=', width))
    print(f"|{'SETUP GACOR':>75}|")
    print(create_line('=', width))
    
    # Create a desktop PC
    intel_cpu = Cpu("Intel", "Core i7-12700K", 12, 3.6)
    corsair_ram1 = Ram("Corsair", "Vengeance LPX", 16, "DDR4")
    corsair_ram2 = Ram("Corsair", "Vengeance LPX", 16, "DDR4")
    nvidia_gpu = GPU("NVIDIA", "RTX 3080", 10, "GDDR6X")
    samsung_ssd = Harddrive("Samsung", "980 Pro", 1000, "NVMe SSD")
    desktop_pc = Komputer("Gaming PC", intel_cpu, nvidia_gpu, samsung_ssd)
    desktop_pc.add_ram(corsair_ram1)
    desktop_pc.add_ram(corsair_ram2)
    
    print("\n" + create_line('=', width))
    print(f"|{'DESKTOP PC':>75}|")
    print(create_line('=', width))
    print_row("Nama", desktop_pc.get_nama())
    print_row("CPU", f"{desktop_pc.get_cpu().get_merk()} {desktop_pc.get_cpu().get_nama()}")
    print_row("CPU Cores", str(desktop_pc.get_cpu().get_jumlah_core()))
    print_row("CPU Speed", f"{desktop_pc.get_cpu().get_kecepatan_GHz()} GHz")
    print_row("GPU", f"{desktop_pc.get_gpu().get_merk()} {desktop_pc.get_gpu().get_nama()}")
    print_row("GPU VRAM", f"{desktop_pc.get_gpu().get_vram_GB()} GB {desktop_pc.get_gpu().get_memory_type()}")
    print_row("Storage", f"{desktop_pc.get_storage().get_merk()} {desktop_pc.get_storage().get_nama()}")
    print_row("Storage Capacity", f"{desktop_pc.get_storage().get_kapasitas_GB()} GB {desktop_pc.get_storage().get_tipe_drive()}")
    display_ram_info(desktop_pc)
    print(create_line('=', width))
    
    # Create a laptop
    laptop_cpu = Cpu("AMD", "Ryzen 7 5800H", 8, 3.2)
    laptop_gpu = GPU("AMD", "Radeon RX 6700M", 8, "GDDR6")
    laptop_ssd = Harddrive("Western Digital", "SN750", 512, "NVMe SSD")
    
    gaming_laptop = Laptop("ROG Strix G15", laptop_cpu, laptop_gpu, laptop_ssd, 90, 2.3, "Gaming", "Windows 11")
    gaming_laptop.add_ram(Ram("Kingston", "HyperX Impact", 16, "DDR4"))
    
    print("\n" + create_line('=', width))
    print(f"|{'LAPTOP':>75}|")
    print(create_line('=', width))
    print_row("Nama", gaming_laptop.get_nama())
    print_row("Tipe", gaming_laptop.get_tipe_laptop())
    print_row("OS", gaming_laptop.get_os_laptop())
    print_row("CPU", f"{gaming_laptop.get_cpu().get_merk()} {gaming_laptop.get_cpu().get_nama()}")
    print_row("CPU Cores", str(gaming_laptop.get_cpu().get_jumlah_core()))
    print_row("CPU Speed", f"{gaming_laptop.get_cpu().get_kecepatan_GHz()} GHz")
    print_row("GPU", f"{gaming_laptop.get_gpu().get_merk()} {gaming_laptop.get_gpu().get_nama()}")
    print_row("GPU VRAM", f"{gaming_laptop.get_gpu().get_vram_GB()} GB {gaming_laptop.get_gpu().get_memory_type()}")
    print_row("Storage", f"{gaming_laptop.get_storage().get_merk()} {gaming_laptop.get_storage().get_nama()}")
    print_row("Storage Capacity", f"{gaming_laptop.get_storage().get_kapasitas_GB()} GB {gaming_laptop.get_storage().get_tipe_drive()}")
    display_ram_info(gaming_laptop)
    print_row("Baterai", f"{gaming_laptop.get_battery_capacity()} Wh")
    print_row("Berat", f"{gaming_laptop.get_weight()} kg")
    print(create_line('=', width))
    
    # Create a smartphone
    phone_cpu = Cpu("Qualcomm", "Snapdragon 888", 8, 2.84)
    phone_gpu = GPU("Adreno", "660", 4, "LPDDR5")
    phone_storage = Harddrive("Samsung", "UFS 3.1", 256, "Flash")
    
    android_phone = Smartphone("Samsung Galaxy S21", phone_cpu, phone_gpu, phone_storage, 108, "Android 12", 4000, 0.169)
    android_phone.add_ram(Ram("Samsung", "LPDDR5", 12, "LPDDR5"))
    
    print("\n" + create_line('=', width))
    print(f"|{'SMARTPHONE':>75}|")
    print(create_line('=', width))
    print_row("Nama", android_phone.get_nama())
    print_row("OS", android_phone.get_os_phone())
    print_row("CPU", f"{android_phone.get_cpu().get_merk()} {android_phone.get_cpu().get_nama()}")
    print_row("CPU Cores", str(android_phone.get_cpu().get_jumlah_core()))
    print_row("CPU Speed", f"{android_phone.get_cpu().get_kecepatan_GHz()} GHz")
    print_row("GPU", f"{android_phone.get_gpu().get_merk()} {android_phone.get_gpu().get_nama()}")
    print_row("GPU VRAM", f"{android_phone.get_gpu().get_vram_GB()} GB {android_phone.get_gpu().get_memory_type()}")
    print_row("Storage", f"{android_phone.get_storage().get_merk()} {android_phone.get_storage().get_nama()}")
    print_row("Storage Capacity", f"{android_phone.get_storage().get_kapasitas_GB()} GB {android_phone.get_storage().get_tipe_drive()}")
    display_ram_info(android_phone)
    print_row("Kamera", f"{android_phone.get_camera_MP()} MP")
    print_row("Baterai", f"{android_phone.get_battery_capacity()} mAh")
    print_row("Berat", f"{android_phone.get_weight()} kg")
    print(create_line('=', width))
    
    # Create a flagship phone
    flagship_cpu = Cpu("Apple", "A15 Bionic", 6, 3.23)
    flagship_gpu = GPU("Apple", "A15 GPU", 5, "Unified Memory")
    flagship_storage = Harddrive("Apple", "NAND", 512, "Flash")
    
    iphone = FlagshipPhone("iPhone 13 Pro Max", flagship_cpu, flagship_gpu, flagship_storage, 12, "iOS 15", 2021, "ProMotion Display", 4352, 0.238)
    iphone.add_ram(Ram("Apple", "LPDDR4X", 6, "LPDDR4X"))
    
    print("\n" + create_line('=', width))
    print(f"|{'FLAGSHIP PHONE':>75}|")
    print(create_line('=', width))
    print_row("Nama", iphone.get_nama())
    print_row("OS", iphone.get_os_phone())
    print_row("CPU", f"{iphone.get_cpu().get_merk()} {iphone.get_cpu().get_nama()}")
    print_row("CPU Cores", str(iphone.get_cpu().get_jumlah_core()))
    print_row("CPU Speed", f"{iphone.get_cpu().get_kecepatan_GHz()} GHz")
    print_row("GPU", f"{iphone.get_gpu().get_merk()} {iphone.get_gpu().get_nama()}")
    print_row("GPU VRAM", f"{iphone.get_gpu().get_vram_GB()} GB {iphone.get_gpu().get_memory_type()}")
    print_row("Storage", f"{iphone.get_storage().get_merk()} {iphone.get_storage().get_nama()}")
    print_row("Storage Capacity", f"{iphone.get_storage().get_kapasitas_GB()} GB {iphone.get_storage().get_tipe_drive()}")
    display_ram_info(iphone)
    print_row("Kamera", f"{iphone.get_camera_MP()} MP")
    print_row("Tahun Keluar", str(iphone.get_tahun_keluar()))
    print_row("Fitur Unggulan", iphone.get_fitur_unggulan())
    print_row("Baterai", f"{iphone.get_battery_capacity()} mAh")
    print_row("Berat", f"{iphone.get_weight()} kg")
    print(create_line('=', width))

if __name__ == "__main__":
    main()
