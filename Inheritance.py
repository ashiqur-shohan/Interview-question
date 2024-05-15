class Vechicle:
    def __init__(self,name) -> None:
        self.name = name
    def display_name(self):
        print("Vehicle name",self.name)

class Car(Vechicle):
    def __init__(self, name) -> None:
        Vechicle.__init__(self,name)
        self.tire = 4

porche = Car('porche')
print(porche.tire)
porche.display_name()