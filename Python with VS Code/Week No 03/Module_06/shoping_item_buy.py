# class Shope:

#     def __init__(self,name):
#         self.name = name
#         self.cart = []

#     def add_to_cart(self,item,price,quantity):
#         self.cart.append({
#             'item' : item,
#             'price' : price,
#             'quantity': quantity
#         }) 

#     def chack_out(self,amount):
#        price = 0
#        for item in self.cart:
#             print(item)
#             price +=item['price'] * item['quantity']
#        print(f'Your net bill : {price}')

#        if amount<price:
#             return f'Plese give more money : {price - amount}'
#        elif amount>price:
#             return f'You give me more money : {amount - price}. Plese Give adjact : {price}'
#        else:
#             return f'Thanks. You give : {price}.'

# shopping = Shope("Sikder Stor")

# shopping.add_to_cart("T-shir",500,3)
# shopping.add_to_cart("Panjabi",800,5)
# shopping.add_to_cart("Shows",900,3)

# reply = shopping.chack_out(8200)

# print(reply)




class Shope:

    def __init__(self,name):
        self.name = name
        self.cart = []

    
    def add_to_chart(self,item,price,quantity):
        self.cart.append({
            'item' : item, 
            'price': price,
            'quantity':quantity
              })

    def chack_out(self,amount):
        price = 0

        for item in self.cart:
            print(item)

            price += item['price'] * item['quantity']

        print(f'Your net bill is : {price}')


        if amount<price:
            return f'Plese give me more monye : {price - amount}'
        elif amount>price:
            return f'You give me more money : {amount - price}'
        else:
            return f'Thanks you give me adjact taka : {price}'



market = Shope("Handy Shope")

market.add_to_chart("Panjabi",500,4)
market.add_to_chart("Paijama",300,2)
market.add_to_chart("Show",800,3)


reply = market.chack_out(5000)

print(reply)