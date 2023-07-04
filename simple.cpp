#include <iostream>
#include <vector>
#include <cmath>

//create a print function
void print(const std::vector<int> &v){
  std::cout<< "{";
  int n = v.size() -1;
  for(int i = 0; i < n; i++ ){
    std::cout<< v[i] << ", ";
  }

  std::cout<< v[n] << "}\n";
}


//create a function to check for primality

bool is_prime(int num){
  bool result = true; //provisionally true
  if(num < 2){
    result = false;
  }else{
    //we want to check division by all values from 2 to sqrt(num)

    int testing_factor = 2;
    int i= num, r= sqrt(i); 

    while(result && testing_factor <= r){
      result = num%testing_factor != 0;
      testing_factor++;
    }

  }

  return result;
}

//create a function to collect the

std::vector<int> func(std::vector<int> &vec, int start, int end){
  vec.clear(); //clear the vector
  for(int i = start; i <= end; i++){
    if(is_prime(i)){
      vec.push_back(i);
    }
  }
}



int main() {
  std::vector<int> list; //an empty vector with no element

  int starting;
  int ending;

  std::cout<< "Enter the starting value: ";
  std::cin >> starting;
  std::cout << '\n';

  std::cout << "Enter the Ending value: ";
  std::cin >> ending;
  std::cout << '\n';

  print(func(list, starting, ending));
  

}