class Bank:

    def __init__(self,name,phone,blance):
        self.name = name
        self.phone = phone
        self.blance = blance
        self.minDeposit = 100
        self.minWithDraw = 150
        self.maxWithDraw = 5000

    def chack_out(self):
        return f'Your Blance is : {self.blance}'
     
    def with_draw(self,amount):
        if amount < self.minWithDraw:
            return f'You can withdraw minimum : {self.minWithDraw}'
        elif amount > self.maxWithDraw:
            return f'You can withdraw maximum : {self.maxWithDraw}'
        else:
            self.blance = self.blance - amount
            return f'Your withdraw amount: {amount}'

    def takaRak(self,amount):
        if amount<self.minDeposit:
            return f'Hey Bro ! are you fokir? You can do minmum deposit {self.minDeposit} '
        else:
            self.blance += amount
            return amount





asia = Bank('Nayem','012475456',4000)
print(f'User naem : {asia.name}')
print(f'User Phone number : {asia.phone}')
print(f'Your current blance is : {asia.blance}')
final_result = asia.with_draw(400)
print(final_result)
print(f'Your current blance is : {asia.blance}')

second_time_withdraw = asia.with_draw(3000)
print(second_time_withdraw)
print(f'Your current blance is : {asia.blance}')
print(asia.takaRak(500))
print(f'Your current blance is : {asia.blance}')