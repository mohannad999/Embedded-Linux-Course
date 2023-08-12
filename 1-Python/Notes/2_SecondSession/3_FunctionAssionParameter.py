def myfuction(*kids):
    print("The youngest child is " + kids[2])

myfuction('Ali',"Rama","Sami")

def test(*ls):
    print(ls[0])
    print(ls[1])

test("Mohannad","Ahmad")

def test2(*ls):
    ln=len(ls)
    for i in range(0,ln):
        print(ls[i],end=" ")
    print(" ")

test2("Mohannad","Fadi","Sari","Ali")

print(40*'-')
#####################################
#key and value dictionary
def my_Fuction(**kid):
    print("His last name is "+kid["lname"])

my_Fuction(fname="Mohammad",lname="Ali")


def test3(**args):
    ls =[]
    print(f'length of args : {len(args)}')
    for i in args.keys():
        ls.append(i)

    for i in ls :
        print(args[i])    


test3(Frist="red",second="blue")
test3(Frist="red",second="blue",third="yallow")
            