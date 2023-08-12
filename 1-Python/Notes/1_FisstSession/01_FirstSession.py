#!/usr/bin/python3

print('hello world')
  # python3 HelloWorld.py --> this command to run the code from the terminal 

# which python3 --> locatoin of python  in my case /usr/bin/python3

# python3 -m dis HelloWorld.py --> disassembly  


# Shebang 
# 1- put this in the the First line in your code  -->#!/usr/bin/python3
# 2- in terminal -> chmod u+x filename.py
# 3- in terminal -> ./filename.py   (this shoud run the code without writing python3 filename.py)

################################
print('Name : Mohannd Al Zaatreh ',end =",")
print('Age : 23')
print(40*'-')
print(len('Mohannad'))
print(len([10,77,'Adam','Jordan',('A','B',99)]))

print(40*'-')
x=list(range(0,10))
print(x)
print(40*'-')


for i in range(5):
    print(i,end=",")

print("")

print(40*'-')


#################################
# Create file c++ using python 
# namecpp = input("please enter cpp flie : ")
# helloWorld='//this file had Created from python :) \n\n #include <iostream>\nusing namespace std;\n int main() {\n cout<<"Helloworld"<<endl;\nreturn 0;\n}'  
# fd = open(namecpp,"w+")
# fd.write(helloWorld)
# fd.colse()
################################


