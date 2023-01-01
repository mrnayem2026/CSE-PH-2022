class Bank:

    def __init__(self,blance):
        self.blance = blance
        self.min_withdraw = 150
        self.max_withdraw = 15000
        self.min_deposet = 50



    def get_blance(self):
        return self.blance

    def withdraw(self,amount):
        if amount < self.min_withdraw:
            return f'You can minimum withdraw {self.min_withdraw}'
        elif amount > self.max_withdraw:
            return f'You can miximum withdraw : {self.max_withdraw}'
        elif amount > self.blance:
            return f'Yor are going beyond your blance : {self.blance}'
        else:
            self.blance = self.blance - amount
            return f'Here are your withdraw blance : {amount}'

    def deposet(self,amount):
        if amount < self.min_deposet:
            return f'At last you can deposet : {self.min_deposet}'
        else:
            self.blance += amount
            return amount


islamic_bank = Bank(5000)

# getBlance = islamic_bank.get_blance()
# print(f'Your blance is here : {getBlance} \n' )

# withDraw = islamic_bank.withdraw(4000)
# print(withDraw)

deps = islamic_bank.deposet(500)
print(deps)

getBlance = islamic_bank.get_blance()
print(f'Your blance is here : {getBlance} \n' )