#include <cmath> //needed for sqrt
#include "prime.h" //prototype for isPrime function


/**
 * Determines if the given integer is a prime number or not.
 *
 * @param n the integer to check for primality
 *
 * @return true if the given integer is prime, false otherwise
 *
 * @throws none
 */
bool is_prime(int n) {
  bool result = false; //n is provisionally prime
  double r = n, root = sqrt(n); //variables definition

  for(int trial_factor = 2; result && trial_factor <= root; trial_factor++){
    result = (n % trial_factor != 0);
  }
  return result;
}


