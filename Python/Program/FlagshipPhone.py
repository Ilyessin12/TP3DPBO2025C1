from Smartphone import Smartphone

class FlagshipPhone(Smartphone):
    # Constructor
    def __init__(self, nama="", cpu=None, gpu=None, storage=None, camera_MP=0, os_phone="", tahun_keluar=0, fitur_unggulan="", battery_capacity=0, weight=0.0):
        super().__init__(nama, cpu, gpu, storage, camera_MP, os_phone, battery_capacity, weight)
        self.tahun_keluar = tahun_keluar
        self.fitur_unggulan = fitur_unggulan
    
    # Getters
    def get_tahun_keluar(self):
        return self.tahun_keluar
    
    def get_fitur_unggulan(self):
        return self.fitur_unggulan
    
    # Setters
    def set_tahun_keluar(self, tahun_keluar):
        self.tahun_keluar = tahun_keluar
    
    def set_fitur_unggulan(self, fitur_unggulan):
        self.fitur_unggulan = fitur_unggulan
