//Q.3. Write a C++ program to take two numbers from the command line argument and sum both 
//these numbers and display the output. [Hint: use atoi() function to convert a char array to integer].
//Muhit Khan

#include <iostream>
using namespace std;

int main(int argc, char* argv[]) 
{ 
    if(argc != 3)
    {
        cout << "Invalid number of operands" << endl;
        return 1;
    }
    int n1, n2;
    n1 = atoi(argv[1]);
    n2 = atoi(argv[2]);
    int sum = n1 + n2;  

    return 0;
}