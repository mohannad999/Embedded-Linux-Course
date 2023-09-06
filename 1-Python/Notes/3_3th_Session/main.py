ls=  [1,2,3,4,5,6]

ls2 = ls  #shallow Clone (copy)

ls2[0]=100
print(ls)
print(40*'-')
print(ls2)
print(40*'#')

ls3=ls.copy() #Deep Clone (Copy)
ls3[0]=1
print(ls)
print(40*'-')
print(ls3)

print(40*'#')

#################################
dic1={'key':'value',
      'key2': 'value'}

dic2=dic1  #shallow Clone (copy)

dic2['key']='value 100'
print(dic1)
print(dic2)

###########################
x=list((1,2,3,4,5,6,7,8))
print(x)
x=tuple((1,2,3,4,5,6,7,8))
print(x)
x=set((1,2,3,4,5,6,7,8))
print(x)