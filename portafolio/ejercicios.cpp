#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cctype>
using namespace std;
int main()
{
char bloques[3] = {'A','B','C'}; char *ptr = &bloques[0]; char temp;

//temp = bloques[0]; //   			                  
//temp = *(bloques + 2);  //   				                  
//temp = *(ptr + 1);  //   		                  
//temp = *ptr;  //   	
//	
//ptr = bloques + 1;  //   		                 
//temp = *ptr; //   	
//temp = *(ptr + 1); //   	

ptr = bloques; cout << temp;//   		                  
temp = *++ptr; //   				                  
temp = ++*ptr; //   			                  
temp = *ptr++; //   			                  
temp = *ptr; cout << temp;//   	

return 0;
}

