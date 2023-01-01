# Play with dunder method 


# 1st __init__

import re
from signal import raise_signal


class Sofrwares:
    names = []
    versions = {}

    # versions['S3'] = 0.2
# init method 
    def __init__(self,names):
        if names:
            self.names = names.copy()
            for name in names:
                self.versions[name] = 1
        else:
            raise Exception ("Please Enter The names:")

            # str method 
    def __str__(self):
        s = "The cuurent sofwares and their versions are listed below: \n"
        for key,value in self.versions.items():
                s += f'{key} : {value} \n'
        return s

    # setitem for dictionary 

    def __setitem__(self,name,version):
        if name in self.versions:
            self.versions[name] = version
        else:
            raise Exception ("Software Name does't exist")

    # getitem for dictionary 

    def __getitem__(self,name):
        if name in self.versions:
            return self.versions[name]
        else:
            raise Exception ("Software Name does't exist")


    # delitem for dictionary 

    def __delitem__(self,name):
        if name in self.versions:
            del self.versions[name]
            self.names.remove(name)
        else:
            raise Exception ("Software Name does't exist")

p = Sofrwares(['S1','S2','S3'])
del p['S1']
# p['S1'] = 2
p['S2'] = 5
print(p['S2'])
print(p)
# p['S3'] = 4
# p1 = Sofrwares()
# print(p1.versions)



