#include <iostream>
#include <iomanip>

int main() {
//PROBLEM: collect input n from user. then print n x n box

//ANALYSIS: collect an input  X from the user, then you start printing "*" such that
//startin from one X'th row contains X number of "*" until the max star is X.
//then it decreases to one again.

//SOLUTION

int size;

std::cout << "Enter the value you want: ";

std::cin >> size;

// for(int i = 1; i < (2 * size); i++){
//     // std::cout << "*\n";

//     // for()
//     if(i <= size){
//         for(int j = 1; j <= i; j++){
//             std::cout << "*";
//         }
//     }else{
//         for(int j = size-1, int stars_to_print = size-1; j >= 1; j--, stars_to_print--){
//             std::cout << "*";
//         }
//     }

//     std::cout << '\n';
// }

//  LEFT SKEWED

//create the top part
for(int i = 1; i < size; i++){
    // std::cout << "*\n";
    for(int j = 1; j <= i; j++){
        std::cout << "*";
    }
    std::cout << '\n';
}

//create the bottom part
for(int i = size; i >= 1; i--){
    // std::cout << "*\n";
    for(int j = i; j >= 1; j--){
        std::cout << "*";
    }
    std::cout << '\n';
}


std::cout << "==================================================\n";

//RIGHT SKEWED

for(int i = 1; i < size; i++){
    // print the leading spaces
    std::cout << " ";
    for(int j = 1; j < (size-i); j++){
        std::cout << " ";
    }

    //print the stars.
    for(int k = 1; k <= i; k++){
        std::cout << "*";
    }

    std::cout << '\n';
}

for(int i = size; i >= 0; i--){
    // print the leading spaces
    for(int j = size-i; j > 0 ; j--){
        std::cout << " ";
    }

    //print the stars.
    for(int k = 1; k <= i; k++){
        std::cout << "*";
    }

    std::cout << '\n';
}





}