import hashlib
from va import Abc
from vehicles import Car,Cng,Bike
from ride_manager import uber
from random import randint

license_authority = Abc()

class User:
    def __init__(self,name,email,password):
        self.name = name
        self.email = email
        pws_encrypted = hashlib.md5(password.encode()).hexdigest()
        
        with open('user_3.txt','w') as record:
            record.write(f'Name: {name} Email:  {email} Tar encrypted password {pws_encrypted}')
        record.close()
        print(self.name,'User Created')
        
    
    @staticmethod
    def log_in(email,password):
        stored_pass =''
        with open('user_3.txt','r') as  record:
            lines = record.readlines()
            
            for line in lines:
                if email in line:
                    stored_pass = line.split(' ')[8]
                         # print('Your password',stored_pass)                
        record.close()
        
        hased_pass = hashlib.md5(password.encode()).hexdigest()
        
        if hased_pass == stored_pass:
            print('Valid User')
        else:
            print('Invalid User')
            
            
class Rider(User):
    def __init__(self, name, email, password,location,balance):
        super().__init__(name, email, password)
        self.location = location
        self.balance = balance
        
    def set_location(self,location):
        self.location = location
        
    def get_location(self):
        return self.location
    
    def request_trip(self,destination):
        pass
    
    def start_a_trip(self,fare):
        self.balance -= fare
    
    
class Driver(User):
    def __init__(self, name, email, password,location,balance):
        super().__init__(name, email, password)
        self.location = location
        self.balance = balance
        self.valid_driver = license_authority.validate_license(email,license)
        self.earning = 0
        
    def take_driving_test(self):
        result = license_authority.take_driving_test(self.email)
        if result == False:
            print('Sorry you failed, try  again')
        else:
            self.license = result
            self.valid_driver = True
        
    def start_a_trip(self,destination,fare):
        self.earning += fare
        self.location = destination
        
    def register_a_vehicle(self,vehicle_type,license_plate,rate):
        if self.valid_driver is True:
            if vehicle_type == 'car':
                new_vehicle  = Car(vehicle_type,license_plate,rate,self)
                uber.add_a_vehicle(vehicle_type,new_vehicle)
            elif vehicle_type == 'cng':
                new_vehicle  = Cng(vehicle_type,license_plate,rate,self)
                uber.add_a_vehicle(vehicle_type,new_vehicle)
            else:
                new_vehicle  = Bike(vehicle_type,license_plate,rate,self)
                uber.add_a_vehicle(vehicle_type,new_vehicle)
        else:
            print('Your are not valid driver')  
                
    
            

rider1 =  Rider('rider1','rider1@gmail.com','rider1',randint(0,100),5000)
print('*'*10 + ' '*10 + '*'*10)
rider2 =  Rider('rider2','rider2@gmail.com','rider2',randint(0,100),5000)
print('*'*10 + ' '*10 + '*'*10)
rider3 =  Rider('rider3','rider3@gmail.com','rider3',randint(0,100),5000)
print('\n')


driver1 = Driver('driver1','deriver1@gmail.com','driver1',randint(0,100),2500)
driver1.take_driving_test()
driver1.register_a_vehicle('car',1250,20)
print('*'*10 + ' '*10 + '*'*10)

driver2 = Driver('driver2','deriver2@gmail.com','driver2',randint(0,100),2500)
driver2.take_driving_test()
driver2.register_a_vehicle('car',1250,20)
print('*'*10 + ' '*10 + '*'*10)

driver3 = Driver('driver3','deriver3@gmail.com','driver3',randint(0,100),2500)
driver3.take_driving_test()
driver3.register_a_vehicle('car',1250,20)
print('*'*10 + ' '*10 + '*'*10)

driver4 = Driver('driver4','deriver4@gmail.com','driver4',randint(0,100),2500)
driver4.take_driving_test()
driver4.register_a_vehicle('car',1250,20)

print(uber.get_avilable_cars())
print(uber.find_a_vehicle(rider1,'car',90))