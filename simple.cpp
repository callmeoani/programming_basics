#include <iostream>
#include <iomanip>
#include <locale>

int main(){
	int result = 1;
	std::cout.imbue(std::locale("german"));

	while(result <= 1000000){
		
		std::cout<< std::setw(13) << result << '\n';
		result *= 10;
	}

}

//the 6 bitwise operators are:
// & | ^ ~ << and >>