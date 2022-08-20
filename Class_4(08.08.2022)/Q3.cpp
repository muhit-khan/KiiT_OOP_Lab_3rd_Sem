/*3. WAP, which displays a given character, n number of times, using a function. When the n value is not provided, it should print the given character 80 times. When both the character and n value are not provided, it should print ‘*’ character 80 times.
[Write the above program in two ways:-
-using function overloading.
-using default arguments.]*/
//MUHIT KHAN
//Roll: 21052943

#include <iostream>
void displayChar(char x = '*', int n = 80) {
    for (int i = 0; i < n; i++) {
        std::cout << x;
    }
    std::cout << std::endl;
}
int main() {
    displayChar();
    displayChar('a');
    displayChar('b', 15);
    return 0;
}