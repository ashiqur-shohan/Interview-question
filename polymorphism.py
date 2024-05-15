class Animal:
    def animalSound(self):
        print("Animal Sound")

class Cat(Animal):
    # polymorphism
    def animalSound(self):
        print("Mew Mew")


pimPim = Cat()
pimPim.animalSound()