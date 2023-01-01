# class Book:
#     name = "Python3"
#     author = "Mateen"
#     outbook = ['Sell me this pen','Deep Work','The 80/20 principle','C','JavaScript','Python',]
#     def seller_ditels(self,name,addres):
#         sd = f"Seller Name : {name} \n Addres of seller : {addres}"
#         return sd
    
# my_book = Book()


# temp =  my_book.seller_ditels("Nayem","Barishal")

# print(temp)

class Calculatro:

    def addetion(self,a,b):
        return a+b
    
    def substract(self,a,b):
        return a-b
    
    def multiply(self,a,b):
        return a*b
    
    def devision(self,a,b):
        return a/b


clac = Calculatro()

temp = clac.addetion(5,5)
print(f'The Answer form Class Method Addetion : {temp}')

temp = clac.substract(50,45)
print(f'The Answer form Class Method Substract : {temp}')

temp = clac
print(f'The Answer form Class Method Addetion : {temp}')

temp = clac.addetion(5,5)
print(f'The Answer form Class Method Addetion : {temp}')