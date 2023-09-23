a=10
b=10
num=10

print(id(a))
print(id(b))

name=input('Enter your user name : ')
if name.strip().lower()=='mohannad':
    print (f'welcome {name}')
else:
    print('wrong user name')

print(40*'-')
quantity=4
ItemNumber=4321
price=99.9
myordar="I want {} pieces of item {} for {} dollars."
print(myordar.format(quantity,ItemNumber,price))


print(40*'-')


