class Shop:

    cart = []


    def __init__(self,buyer):
        self.buyer = buyer

    
    def add_to_cart(self,itme):
        self.cart.append(itme)


shopper_1 = Shop("Mostafiz")

shopper_1.add_to_cart("tea")

print(shopper_1.cart)