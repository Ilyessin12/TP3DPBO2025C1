from Komponen import Komponen

class Cpu(Komponen):
    # Constructor
    def __init__(self, merk="", nama="", jumlah_core=0, kecepatan_GHz=0.0):
        super().__init__(merk, nama)
        self.jumlah_core = jumlah_core
        self.kecepatan_GHz = kecepatan_GHz
    
    # Getters
    def get_jumlah_core(self):
        return self.jumlah_core
    
    def get_kecepatan_GHz(self):
        return self.kecepatan_GHz
    
    # Setters
    def set_jumlah_core(self, jumlah_core):
        self.jumlah_core = jumlah_core
    
    def set_kecepatan_GHz(self, kecepatan_GHz):
        self.kecepatan_GHz = kecepatan_GHz
