import re


class Liybary:

    def __init__(self,name):
        self.name = name
        self.book_self = []

    def insert_book(self,name,author,dam):
        self.book_self.append({
            'name' : name,
            'author': author,
            'dam' : dam
        })

    def check_out(self,amount):
        price = 0
        for book in self.book_self:
            print(book)

            price += book['dam']    

            print(f'Tor sob milai hoice : {price}')
            if amount<price:
                return f'Bolda da taka de aro {price - amount}'
            elif amount > price:
                return f'aaa! tui taka besi dico {amount - price}'
            else:
                return f'Hoi tik ace toi ja dico : {price}'

hp = Liybary("Handy Liybary")

hp.insert_book('Head first javascript','Danial',500)
hp.insert_book('hate kolome javascript','junaed ahamed', 400)
hp.insert_book('sell me this pen ' , 'Rasel a kwaser',210)

ans = hp.check_out(520)

print(ans)
# print(hp.book_self)