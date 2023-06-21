#include <iostream>
#include <cstdlib>
#include <ctime>

void full_die (int n) {

    std::cout << "+-------+\n"; //top bound

    switch(n){
        case 1:
            std::cout << "|       |\n";
            std::cout << "|   *   |\n";
            std::cout << "|       |\n";
            break;
        case 2:
            std::cout << "|*      |\n";
            std::cout << "|       |\n";
            std::cout << "|      *|\n";
            break;
        case 3:
            std::cout << "|*      |\n";
            std::cout << "|   *   |\n";
            std::cout << "|      *|\n";
            break;
        case 4:
            std::cout << "|*     *|\n";
            std::cout << "|       |\n";
            std::cout << "|*     *|\n";
            break;
        case 5:
            std::cout << "|*     *|\n";
            std::cout << "|   *   |\n";
            std::cout << "|*     *|\n";
            break;
        case 6:
            std::cout << "|*     *|\n";
            std::cout << "|*     *|\n";
            std::cout << "|*     *|\n";
            break;
        default:
            std::cout << "*** Illegal die value ***";
            break;
    }

    std::cout << "+-------+\n"; //bottom bound


}


int row_die(){
    srand(static_cast<unsigned>(time(0)));

    return (rand() % 6) +1;
}
int main() {

    srand(static_cast<unsigned>(time(0)));

    int die_1= (rand() % 6) + 1;
    int die_2= (rand() % 6) + 1;
    // int die_3 = row_die();
    // int die_4 = row_die();


    full_die(die_1);
    full_die(die_2);
    // full_die(die_3);
    // full_die(die_4);


    // std::cout << die_1 << " " << die_2 << '\n';
    // std::cout << "========================================\n";
    // std::cout << time(0) << '\n';
    // std::cout << RAND_MAX << '\n';


}