import hashlib

class User:
    def __init__(self,name,email,password) -> None:
        self.name = name
        self.email = email
        encrypted_pws = hashlib.md5(password.encode()).hexdigest()
        with open('user.txt','w') as file:
            file.write(f'{email} {encrypted_pws}')
        file.close()
        print(f'{self.name} User created')
        
    @staticmethod
    def log_in(email,password):
        stored_password = ''
        with open('user.txt','r') as file:
            lines = file.readlines()
            for line in lines:
                if email in line:
                   stored_password = line.split(' ')[1]
        file.close()
        
        log_password_encrypted = hashlib.md5(password.encode()).hexdigest()
        
        if stored_password == log_password_encrypted:
            print('Valid User')
        else:
            print('Unvalid user')
        

class Rider(User):
    def __init__(self, name, email, password,location,blance) -> None:
        super().__init__(name, email, password)
        self.location = location
        self.blance = blance
               
    def get_location(self):
        return self.location
    
    def set_location(self,destination):
        self.location = destination
        
    def start_a_trip(self,fare):
        self.blance -= fare
    
    
class Driver(User):
    def __init__(self, name, email, password,license_plate,location,blance) -> None:
        super().__init__(name, email, password)
        
        self.license_plate = license_plate
        self.location = location
        self.earning = blance
        
    def take_a_trip(self,destination,fare):
            self.earning += fare
            self.location = destination
            
