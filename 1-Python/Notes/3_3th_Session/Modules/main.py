#import utils #this can work if this fils in the same folder 

import util.utils #if it's in another folder we use dot .
import util.tools as MYtools   #as this keyword like Alise 

#print(utils.__name__) # it's work if the file utils is in the same folder
print(util.utils.__name__)
print(util.utils.sum(2,29))
print(util.utils.sub(10,2))

# util.tools.greeting() if I don't want to use as 
MYtools.greeting()
 

print(__name__) #print the current file name
print(__file__) #print the  path of the current file