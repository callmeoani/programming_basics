#include <iostream>
#include <iomanip>

int main(){
    //draw a triangle tree which takes an height input from the user.

    //declare a variable to store the inputed size
    int size;

    //prompt the user to input the needed size;
    std::cout << "Enter the tree height you want: ";

    //collect the inputed value into the app.
    std::cin >> size;

    //create the rows.
    int row = 1;
    while (row <= size){

        //for each individual row, create the leading spaces.
        int column = 1;
        while(column <= size-row){
            std::cout << " ";
            column++;
        }

        //after creating the leading space, now create the stars...
            //in general, there will be 2(row) - 1 stars for each row.

        column = 1;
        while(column <= (2*row)-1){
            std::cout << "*";
            column++;
        }

        std::cout <<'\n';
        row++;
    }