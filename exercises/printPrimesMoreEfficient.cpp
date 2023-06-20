#include <iostream>
#include <cmath>
// #include <algorithm>
// #include <iomanip>

int main() {
   //write a more efficient prime listing program
   int input; //variable declaration to store the input from user

   std::cout << "Enter the max limit of number you want: ";

   std::cin >> input; //insert the inputed value into the program

   //solve the problem

   for(int i = 2; i <= input; i++){
       bool isPrime = true; //provisionally prime

       int r = i, root = sqrt(r);

       for(int test_factor = 2; isPrime && test_factor <= root; test_factor++){
           isPrime = (i % test_factor != 0);
       }

       if(isPrime){
           std::cout << i << " ";
       }
   }

   std::cout << '\n';
}