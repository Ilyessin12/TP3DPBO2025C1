class Portable:
    # Constructor
    def __init__(self, battery_capacity=0, weight=0.0):
        self.battery_capacity = battery_capacity
        self.weight = weight
    
    # Getters
    def get_battery_capacity(self):
        return self.battery_capacity
    
    def get_weight(self):
        return self.weight
    
    # Setters
    def set_battery_capacity(self, battery_capacity):
        self.battery_capacity = battery_capacity
    
    def set_weight(self, weight):
        self.weight = weight
