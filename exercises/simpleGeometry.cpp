#include <iostream>
#include <cmath>

double squared (double n){
    return pow(n, 2);
}



int main() {
    /*
        PROBLEM; From geometry: Write a computer program that
        given the lengths of the two sides of a
        right triangle adjacent to the right angle computes the length of
        the hypotenuse of the triangle.

        Note that pythagora's theorem gives the equaltion as:
        hyp = sqrt(opp^2 + adj^2)
    */

    //SOLUTION

    double opp, adj; //variable to store the input sides

    std::cout << "Enter the opp side: ";
    std::cin >> opp;

    std::cout << "Enter the adj side: ";
    std::cin >> adj;



    std::cout << "The hyp of the given triangle is: " << sqrt(squared(opp) + squared(adj)) << '\n';



}