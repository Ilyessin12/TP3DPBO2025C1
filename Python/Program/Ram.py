from Komponen import Komponen

class Ram(Komponen):
    # Constructor
    def __init__(self, merk="", nama="", kapasitas_GB=0, ddr=""):
        super().__init__(merk, nama)
        self.kapasitas_GB = kapasitas_GB
        self.ddr = ddr
    
    # Getters
    def get_kapasitas_GB(self):
        return self.kapasitas_GB
    
    def get_ddr(self):
        return self.ddr
    
    # Setters
    def set_kapasitas_GB(self, kapasitas_GB):
        self.kapasitas_GB = kapasitas_GB
    
    def set_ddr(self, ddr):
        self.ddr = ddr
