# Write a python program which accepts the radius of a circule from the user and compute the area
# Area of Circule = pi *(r^2)

pi= 3.14159
radius=int(input("Enter the radius of the Circule : "))

Area = float(pi* (radius**2))
print (f"the Area = {Area}")