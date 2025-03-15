from Komponen import Komponen

class Harddrive(Komponen):
    # Constructor
    def __init__(self, merk="", nama="", kapasitas_GB=0, tipe_drive=""):
        super().__init__(merk, nama)
        self.kapasitas_GB = kapasitas_GB
        self.tipe_drive = tipe_drive
    
    # Getters
    def get_kapasitas_GB(self):
        return self.kapasitas_GB
    
    def get_tipe_drive(self):
        return self.tipe_drive
    
    # Setters
    def set_kapasitas_GB(self, kapasitas_GB):
        self.kapasitas_GB = kapasitas_GB
    
    def set_tipe_drive(self, tipe_drive):
        self.tipe_drive = tipe_drive
