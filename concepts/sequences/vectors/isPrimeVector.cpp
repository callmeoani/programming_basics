#include <iostream>
#include <cmath>
#include <vector> //the vector type is part of the standard (std) namespace

bool is_prime(int n); //prototype of is_prime function
std::vector<int> list(std::vector<int> v, int sample_number); //prototype of vector updating function
void print(const std::vector<int> &v); //prototype for vector printing function


int main() {
    /*
        PROBLEM: create an app that takes if two numbers, begin&end and then the list
        of the contained prime numbers are printed out.
        NOTE: you have to use functions (as much as you can)
                break the tasks into smaller pieces.
    */

    //ANALYSIS:
    /*
    Breaking down the problem, there are stages to solving it

    1) get number and check if its prime
    2) add gotten number to a vector
    3) print the content of the vector out

        //create a function to check if a value is prime or not
        //create a function to add inputs into a vector
        //create a function to print out the content of a vector

    */


    //SOLUTION:
    std::vector<int> vec;

    print(list(vec, 20));



}


//Defining the functions.

//is_prime function
bool is_prime(int n) {

    bool result = true;

    if (n < 2) {
        result = false;
    }

    for (int tracker = 2; result && tracker < n; tracker++) {
        // if(n % tracker == 0 )
        //     result = false;
        result = (n % tracker != 0);
    }

    return result;
}

//list function
std::vector<int> list(std::vector<int> v, int sample_number){
    //takes in a list as an argument and sample_number
    //we then check for the primes contained in sample_number and insert them into v

    v.clear(); //clear vector to make sure it's empty

    for(int i = 0; i <= sample_number; i++){
        if(is_prime(i))
            v.push_back(i);
    }

    return v;
}

//print function
void print(const std::vector<int> &v) {
    for(int elem : v){
        std::cout << elem << " ";
    }
}































