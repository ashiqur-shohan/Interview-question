class Calculator:

    # contructor
    def __init__(self, name):
        self.name = name

    def add(self, x1, x2):
        print(f'Inputed digit are {x1}, {x2}')
        return f'sum : {x1+x2}'
        


calc = Calculator("casio 991-fx")
addition = calc.add(10, 12)

print(addition)

