#include <iostream>
#include <cmath>
#include <vector> //the vector type is part of the standard (std) namespace


int main() {
    /*
        PROBLEM: Get the average of inputed numbers while also displaying the
        numbers to the screen.
        i.e
        "The average of a, b, c, ... n" is x
    */

    //SOLUTION

    const int NUMBER_OF_INPUTS = 5;

    std::vector<int> sample(NUMBER_OF_INPUTS);
    int sum = 0;

    std::cout << "Enter " << NUMBER_OF_INPUTS << " values you wanna aggregate: ";

    for(int i = 0; i <= (NUMBER_OF_INPUTS - 1); i++) {
        std::cin >> sample[i];
        sum += sample[i];
    }

    std::cout << '\n';
    std::cout << "The aggregate of ";

    for(int i = 0; i <= (NUMBER_OF_INPUTS - 1); i++){
        std::cout << sample[i] << ", ";
    }

    std::cout << " is : ";

    std::cout << static_cast<double>(sum)/NUMBER_OF_INPUTS << ". \n";


}
































