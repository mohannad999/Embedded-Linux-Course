#include <iomanip>
#include <iostream>


void printAscllTableHeader()
{
    std::cout<< "+------+-------+"<<std::endl; 
    std::cout <<"| Char | Ascll |"<<std::endl;
    std::cout<< "+------+-------+"<<std::endl; 
}

void PrintAscllTable()
{
    printAscllTableHeader();
    for(int i=33; i<127;i++)
    {
        if(i<100)
        std::cout<<"|  "<<(char)i <<std::setw(5)<<" | "<<i<<std::setw(5) <<" |"<<std::endl;
    else
        std::cout<<"|  "<<(char)i <<std::setw(5)<<" | "<<i<<std::setw(4) <<" |"<<std::endl;

    }
}
int main(){
PrintAscllTable();


    return 0;
}