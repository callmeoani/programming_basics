#include <iostream>
#include <cmath>



//define the function's prototype
int get_int_range(int first, int last);



int main() {
    /*
        PROBLEM: Write a function to accept two inputs from a user that
        are within the specified range.
        i.e get_int_range(30, 50).
    */

    //SOLUTION


    get_int_range(10,20);


}


// define the function's body
int get_int_range(int first, int last) {
    //check for correct order
    if(first > last) {
        int temp = first;
        first = last;
        last = temp;
    }

    int in_value; //the variable to temporarily store input from user;
    std::cout << "Enter value within " << first << " ... " << last << ": ";
    bool not_within_range;

    do{
        std::cin >> in_value;
        not_within_range = (in_value < first || in_value > last);

        if(not_within_range){
            std::cout << "The number you entered is not within " << first << " and " << last << '\n';
            std::cout <<"Please try again: ";
        }

    }while(not_within_range);


    return in_value;

}