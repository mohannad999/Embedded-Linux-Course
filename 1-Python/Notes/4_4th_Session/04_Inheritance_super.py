class animal: 
    _name=""

    def __init__(self,name):
        print("Costructor is called")
        self._name=name

    def eat(self):
        print("eat food")

    def __del__(self):
        print("Destructor is called")


class cat(animal):
    def __init__(self,name):
        super().__init__(name)
        print("Costructor is called")

    def sound(self):
        print("Meaouu")

    def __del__(self):
        super().__del__()
        print("Destructor is called")
    

mycat=cat("caty")
mycat.eat()
mycat.sound()