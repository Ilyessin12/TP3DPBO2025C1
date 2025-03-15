from Komputer import Komputer
from Portable import Portable

class Laptop(Komputer, Portable):
    # Constructor
    def __init__(self, nama="", cpu=None, gpu=None, storage=None, battery_capacity=0, weight=0.0, tipe_laptop="", os_laptop=""):
        Komputer.__init__(self, nama, cpu, gpu, storage)
        Portable.__init__(self, battery_capacity, weight)
        self.tipe_laptop = tipe_laptop
        self.os_laptop = os_laptop
    
    # Getters
    def get_tipe_laptop(self):
        return self.tipe_laptop
    
    def get_os_laptop(self):
        return self.os_laptop
    
    # Setters
    def set_tipe_laptop(self, tipe_laptop):
        self.tipe_laptop = tipe_laptop
    
    def set_os_laptop(self, os_laptop):
        self.os_laptop = os_laptop
