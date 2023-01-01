from abc import ABC,abstractclassmethod


class Vehicle:
    speed = {
        'car' : 30,
        'bike': 50,
        'cng' : 15
    }
    def __init__(self,vehicle_type,license_plate,rate,driver) -> None:
        self.vehicle_type = vehicle_type
        self.rate = rate
        self.driver =  driver
        self.status = 'available'
        self.license_plate = license_plate
        self.speed = self.speed[vehicle_type]
     
    @abstractclassmethod   
    def start_driving(self):
        pass
        
    @abstractclassmethod
    def trip_finished(self):
        pass
    
    
class Car(Vehicle):
    def __init__(self, vehicle_type,license_plate, rate, driver) -> None:
        super().__init__(vehicle_type,license_plate, rate, driver)
    
    
    def start_driving(self):
        self.status = 'unavailable'
        print(f'Car name : {self.vehicle_type} and License Plate : {self.license_plate} Start Driving')
        
    def trip_finished(self):
        self.status = 'available'
        print(f'Car name : {self.vehicle_type} and License Plate : {self.license_plate} Completed your jurney')
        
class Cng(Vehicle):
    def __init__(self, vehicle_type,license_plate, rate, driver) -> None:
        super().__init__(vehicle_type,license_plate, rate, driver)
    
    
    def start_driving(self):
        self.status = 'unavailable'
        print(f'Car name : {self.vehicle_type} and License Plate : {self.license_plate} Start Driving')
        
    def trip_finishe(self):
        self.status = 'available'
        print(f'Car name : {self.vehicle_type} and License Plate : {self.license_plate} Completed your jurney')
        
class Bike(Vehicle):
    def __init__(self, vehicle_type,license_plate, rate, driver) -> None:
        super().__init__(vehicle_type,license_plate, rate, driver)
    
    
    def start_driving(self):
        self.status = 'unavailable'
        print(f'Car name : {self.vehicle_type} and License Plate : {self.license_plate} Start Driving')
        
    def trip_finishe(self):
        self.status = 'available'
        print(f'Car name : {self.vehicle_type} and License Plate : {self.license_plate} Completed your jurney')
        
        
BMW = Car('bike',1520,50,'Najim')

