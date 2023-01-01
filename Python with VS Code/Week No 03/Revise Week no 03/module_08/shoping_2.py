class Shope:

    def __init__(self,name):
        self.name = name
        self.cart = []
   

    def add_to_cart(self,item,price,quantity):
        self.cart.append({
            'item': item,
            'price': price,
            'quantity': quantity
        })

    def checkOut(self,amount):
        price = 0
        for item in self.cart:
            print(item)

            price += item['price'] * item['quantity']
        
        
        print(f'Your net bill is :  {price}')
        
        if amount < price:
            return f'Plese give me more monye : {price - amount}'
        elif amount > price:
            return f'You give me more monye than price : {amount - price}'
        else:
            return f'You give me adjact money : {price}'
       






handy = Shope("Sikder Stor")

handy.add_to_cart("7 Up",25,10)
handy.add_to_cart("Clemon",15,150)
handy.add_to_cart("Mojo",15,155)
r =  handy.checkOut(125 + 4700)
print(r)
# print(handy.cart)

