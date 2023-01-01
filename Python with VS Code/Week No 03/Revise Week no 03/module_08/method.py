class Shope:
    
    # cart = []

    def __init__(self,name):
        cart = []
        self.name = name
    
    def add_to_cart(self,item,price,quantity):
        
        # self.cart.append(item)
        
        self.price = price
        self.quantity = quantity
        # self.cart = item 

dk = Shope('Sikder')
dk2 = Shope('Sikder2')

dk.add_to_cart('t-shirt',500,3)
dk2.add_to_cart('shirt',400,2)

print(dk.cart)
print(dk2.cart)
