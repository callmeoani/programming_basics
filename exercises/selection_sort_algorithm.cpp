#include <iostream>
#include <vector>


int main(){

    std::vector<int> vec {2,3,5,1,4,7,6,9,8};

    for(int i = 0; i < vec.size(); i++){
        // std::cout<< vec[i]<< '\n';
        for(int j = i+1; j < vec.size(); j++){
            // std::cout<< vec[j]<< '\n';
            if(vec[j] < vec[i]){
                std::cout<< vec[j] << " Less than "<< vec[i] << '\n';
                int temp = vec[i];
                vec[i] = vec[j];
                vec[j] = temp;
            }else{
                std::cout<< vec[j] <<  " Greater than "<< vec[i] <<'\n';
            }
        }
    }

    //print out the final result

        std::cout << "{" << vec[0];
    for(int i = 1; i < vec.size(); i++){
        std::cout << "," << vec[i];
    }

    std::cout<< "}";


}

/*
SORTING:
    this means arranging elements within a sequence into particular order.
    We will consider selection sort algorithm here.



*/