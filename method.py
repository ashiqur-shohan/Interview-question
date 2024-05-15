class Bank:
    def __init__(self,name,amount) :
        self.name = name
        self.amount = amount
    def loan(self,tk):
        if tk>self.amount:
            print("You can not take loan more than your money")
        else:
            print("Loan Granted")

padma = Bank('padma',500)
padma.loan(1000)