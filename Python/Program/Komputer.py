from Cpu import Cpu
from GPU import GPU
from Harddrive import Harddrive

class Komputer:
    # Constructor
    def __init__(self, nama="", cpu=None, gpu=None, storage=None):
        self.nama = nama
        self.cpu = cpu if cpu is not None else Cpu()
        self.list_ram = []
        self.gpu = gpu if gpu is not None else GPU()
        self.storage = storage if storage is not None else Harddrive()
    
    # Getters
    def get_nama(self):
        return self.nama
    
    def get_cpu(self):
        return self.cpu
    
    def get_list_ram(self):
        return self.list_ram
    
    def get_gpu(self):
        return self.gpu
    
    def get_storage(self):
        return self.storage
    
    # Setters
    def set_nama(self, nama):
        self.nama = nama
    
    def set_cpu(self, cpu):
        self.cpu = cpu
    
    def set_gpu(self, gpu):
        self.gpu = gpu
    
    def set_storage(self, storage):
        self.storage = storage
    
    # Methods
    def add_ram(self, ram):
        self.list_ram.append(ram)
