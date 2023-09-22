#include <iostream>
#include <string>

std::string Vowel="aioue";


bool IsVowel(char x)
{
for(char i :Vowel)
{
if(i==x)
{std::cout<<"\nyes it's Vowel \n\n";
return true;
}
}
std::cout<<"\nNO it's not Vowel \n\n";
return false;

}
int main()
{
IsVowel('e');


return 0;
}