// Hello world! Cplayground is an online sandbox that makes it easy to try out
// code.

#include <iostream>
#include <iomanip>

int main(){
  /* PROLEM: create an app that prompt a user for input and then all the  prime numbers
    within the limits of that input are printed out with a space between each.*/

  /* ANALYSIS: a prime number X is a number that can only be divided by 1 and X.
        hence, from 2 to input, we will test each value and see if it's prime;

        how do we test each value?
            We will loop over the range of 2->input
            and then test each value by looking for any instance where, X divided by any
            number less than X (except 1) will have a remainder of 0;

            if such a case exists, then that particular number X is not prime.
            but if it doesn't exist throughout from X-1 -----> test_value >1,
            then, that particular number X is prime and it will be printed out.*/

    // SOLUTION
    // ---------------------------------------

    //create an input variable to store the value inserted by the user.
    int variable;

    //prompt the user to input a value into the application.
    std::cout << "Enter the value which will serve as the limit: ";

    //insert the inputed value into the app
    std::cin >> variable;

    if(variable <= 1){
        std::cout << "The minimum permissible number is 2.\n";
    }else if (variable <= 2){
        std::cout << 2;
    }else{

        // std::cout << 2 << " \n"; //print out 2 first

        int tracker_main = 2;
        while(tracker_main <= variable){
            // std::cout << tracker_main << '\n';
            bool isPrime = true;
            int tracker_sub = tracker_main-1;

            /*create a loop to divide the current value of tracker_main by successive
            lesser values until 2 is reached.*/
            while(tracker_sub >= 2){
                // std::cout << "dividing " << tracker_main << " by " << tracker_sub << '\n';

                if(tracker_main % tracker_sub == 0){
                    isPrime = false;
                    break;
                }

                tracker_sub--;
            }

            if(isPrime == true) {
                std::cout << tracker_main << " ";
            }



            tracker_main++;
        }
    }





}






