class RideManager:
    def __init__(self):
        print('Ride manager activated')
        self.__available_cars = []
        self.__available_bikes = []
        self.__available_cng = []
        
        
    def add_a_vehicle(self,vehicle_type,vehicle):
        if vehicle_type == 'car':
            self.__available_cars.append(vehicle)
        elif vehicle_type == 'bike':
            self.__available_bikes.append(vehicle)
        else:
            self.__available_cng.append(vehicle)
            
    def get_avilable_cars(self):
        return self.__available_cars
    
    def get_avilable_bike(self):
        return self.__available_bikes
    
    def get_avilable_cng(self):
        return self.__available_cng
            
    def find_a_vehicle(self,rider,vehicle_type,destination):
        print('Looking for a car')
        if vehicle_type == 'car':
            if len(self.__available_cars) == 0:
                print('sorry no cars is available')
                return False
            for car in self.__available_cars:
                print('Potential',rider.location,car.driver.location)
     
uber = RideManager()    


            
