#include <iostream>
#include <iomanip>

int main(){
    //Write a program to show the permutaions of ABC

    //FLOW
        //Loop over through the three places, taking the first position as reference
        //check that there is no duplicates at any given position
        //Loop over the subsequent remaining places
        // also checking to make sure there are no duplicates at any two positions

    //SOLUTION
    char first = 'A';
    while(first <= 'C'){
        char second = 'A';
        while(second <= 'C'){
            if(second != first){
                char third = 'A';
                while(third <= 'C'){
                    if(third != first && third != second){

                        std::cout << first << second << third << '\n';
                    }
                    third++;
                }

            }
            second++;
        }

        first++;
    }

}