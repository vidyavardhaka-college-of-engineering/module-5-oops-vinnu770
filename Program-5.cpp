//Find the missing parts in the given C++ program to check person is eligible to vote or not

//Expected input and output
//Input: Enter the age: 18
//Output: eligible to vote

#include<iostream>
using namespace std;
int main()
{
int age;//declare the variable
std::cout<<"Enter the age";
std::cin>>age;
if(age>=18)//complete the missing part to check the condition
	{
		std::cout<<"person is eligible for voting";
	}
	else
	{
		std::cout<<"person is not eligible for voting";
	}
	return 0; //correct the output
}
