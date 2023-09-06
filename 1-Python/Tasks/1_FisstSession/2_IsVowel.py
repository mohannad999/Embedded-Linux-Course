#write a program to test whether a passed letter is a vowel or not

VowelCharacters={'e','o','u','i','a'}

inputchar=input('pls Enter character :')

if inputchar in VowelCharacters :
    print(f'{inputchar} is a Vowel')
else:
    print(f'{inputchar} is not a Vowel') 
        