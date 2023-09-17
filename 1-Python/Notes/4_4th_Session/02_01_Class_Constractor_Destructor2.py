class Person : 
    _name=""
    def __init__(self,name):
        self._name =name

    def SayHello(self):
        print(f"Hello {self._name}")

    def __del__(self):
        print('Destructor called, Employee deleted.')


person1=Person("Mohannad")
person1.SayHello()