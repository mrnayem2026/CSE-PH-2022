from subprocess import check_output


class Shop:
    def __init__(self,naem):
        self.naem = naem
        self.cart = []


    def add_to_cart(self,item,price,quantity):
        self.cart.append({
            'item':item,
            'price': price,
            'quantity': quantity
        })

    def check_out(self,amount):
        price = 0
        for item in self.cart:
            # price += item['price'] * item['quantity']
            price += item["price"] * item["quantity"]
            print(item)
            
        print(f'Your net bill is : {price}')

        if amount<price:
            return f'Plese give more monye : {price - amount}'
        elif amount > price:
            return f"You give me more money than price and your more money is : {amount - price}"
        else:
            return f'You give me adjact money thanks you for buying item.' 
    



sp = Shop('Sikder stor')
sp.add_to_cart('7up',20,5)
sp.add_to_cart('Con Ice Cream',50,3)

rp = sp.check_out(250)
print(rp)