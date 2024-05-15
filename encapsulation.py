# Encapsulation is a process of wrapping code and data together into a single unit,

class Rectangle:
    def __init__(self,length,height):
        self.length = length
        self.height = height
    def Area(self):
      return self.length * self.height
    
rect1 = Rectangle(10,20)
area = rect1.Area()
print(area)