class User:
    def __init__(self,f_name,l_name,t):
        self.first = f_name
        self.last = l_name
        self.theard = t
        self.email = f'{self.first}.{self.last}@user.com'


    @property
    def full_name(self):
        return f'{self.first} {self.last} {self.theard}'

    @full_name.setter 
    def full_name(self,value):
        self.first  = value.split(' ')[0]
        self.last = value.split(' ')[1]
        self.theard = value.split(' ')[2]


    @property
    def get_email(self):
        return self.email



tom = User('md','nayem','ahmed')

print(tom.first)
print(tom.last)
print(tom.email)
print(tom.get_email)
print(tom.full_name)

tom.full_name = 'md najim sikder '
print(tom.full_name)
