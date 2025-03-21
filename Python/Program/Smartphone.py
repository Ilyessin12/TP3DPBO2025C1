from Komputer import Komputer
from Portable import Portable

class Smartphone(Komputer, Portable):
    # Constructor
    def __init__(self, nama="", cpu=None, gpu=None, storage=None, camera_MP=0, os_phone="", battery_capacity=0, weight=0.0):
        Komputer.__init__(self, nama, cpu, gpu, storage)
        Portable.__init__(self, battery_capacity, weight)
        self.camera_MP = camera_MP
        self.os_phone = os_phone
    
    # Getters
    def get_camera_MP(self):
        return self.camera_MP
    
    def get_os_phone(self):
        return self.os_phone
    
    # Setters
    def set_camera_MP(self, camera_MP):
        self.camera_MP = camera_MP
    
    def set_os_phone(self, os_phone):
        self.os_phone = os_phone
