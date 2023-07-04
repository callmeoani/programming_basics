#include <iostream>
#include <vector>
#include <cstdlib>

//the task here is to dynamically populate a vector spliting up the tasks into functions as much as possible

//Functions needed include:
  //random numbers generator function
  //printing function

//defining the printing function
/*
* void print(const std::vector<int> &v)
*   this function is meant to loop over an a vector and print out it's content
*   v is a reference to a the memory location holding the vector passed as actual parameter
*   the return type is void since the function is only meant to display some texts.
*/
void print(const std::vector<int>& v){
  for(int elem : v) {
    std::cout<< elem << " ";
  }
  std::cout<< '\n';
}

//defining the random values generator

void random_generator(std::vector<int>& v, int size){
  v.clear(); //clear the vector to make it empty
  int n = rand() * size + 1;
  for(int i = 0; i < n; i++ ){
    v.push_back(rand());
  }
}


int main() {
srand(5); //initiate the seed to generate the random numbers

//creat the vector list
std::vector<int> vec;
// int size;

//prompt the user to input the size they want
std::cout<< "Enter the size of vector you want: ";
// std::cin>>size;

random_generator(vec, 5);

print(vec);


}