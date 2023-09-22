#include <iostream>
#include <string> 

int This_X_Data_Section;
int This_X_BSS=10;

int main()
{
    int This_X_Stack=0;
    This_X_Stack++;
    std::cout << "Hello World"<< This_X_Stack<< std::endl;

    return 0;
}

/*
How to debuge

1-  g++ -g DataTypeMemory.cpp
2-  gdb ./a.out
3-  Press Enter 
4-  start
5- disassemble /s main
6- press n //to exicute the next line


*/