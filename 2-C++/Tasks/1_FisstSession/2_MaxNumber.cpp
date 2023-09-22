#include <iostream>

void ReadThreeNums(int arr[3])
{
    std::cout<<"Enter First Number ";
    std::cin >>arr[0];
    std::cout<<"Enter Second Number ";
    std::cin >>arr[1];
    std::cout<<"Enter Last Number ";
    std::cin >>arr[2];
}

int MaxNum(int arr[3])
{
  
    if(arr[1]>arr[0] && arr[1]>arr[2])
    return arr[1];
    if(arr[2]>arr[0] && arr[2]>arr[1])
    return arr[2];
    return arr[0];



}

int main()
{
    int arr[3]; 
 ReadThreeNums(arr);
std::cout<<"Max Number :" <<MaxNum(arr)<<std::endl;
    return 0;
}