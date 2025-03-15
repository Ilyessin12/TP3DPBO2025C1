from Komponen import Komponen

class GPU(Komponen):
    # Constructor
    def __init__(self, merk="", nama="", vram_GB=0, memory_type=""):
        super().__init__(merk, nama)
        self.vram_GB = vram_GB
        self.memory_type = memory_type
    
    # Getters
    def get_vram_GB(self):
        return self.vram_GB
    
    def get_memory_type(self):
        return self.memory_type
    
    # Setters
    def set_vram_GB(self, vram_GB):
        self.vram_GB = vram_GB
    
    def set_memory_type(self, memory_type):
        self.memory_type = memory_type
