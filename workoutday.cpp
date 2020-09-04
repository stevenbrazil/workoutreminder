#include <iostream>
#include <string>

int main()
{

    int res = 1;

    //========================================
    std::cout << "Is today a workout day?\n";
    std::cout << "Please enter day of week..\n";
    std::cout << "==============================\n\n";
    std::cout << "[1] Monday [2] Tuesday [3]Wednesday [4]Thursday [5]Friday [6]Saturday [7]Sunday,\n";
    std::cout << "Input selection 1 through 7\n";
    std::cin >> res;
    std::cout << "\n";

    switch (res)
    {

    case 1:
        std::cout << "If today is Monday,\n";
        std::cout << "It is Arm Day!\n";
        break;
    case 2:
        std::cout << "If today is Tuesday,\n";
        std::cout << "It is Leg Day!\n";
        break;
    case 3:
        std::cout << "If today is Wednesday,\n";
        std::cout << "It is Chest Day!\n";
        break;
    case 4:
        std::cout << "If today is Thursday,\n";
        std::cout << "It is Shoulders Day!\n";
        break;
    case 5:
        std::cout << "If today is Friday,\n";
        std::cout << "It is Back Day!\n";
        break;
    case 6:
        std::cout << "If today is Saturday,\n";
        std::cout << "It is a Rest Day!\n";
        break;
    case 7:
        std::cout << "If today is Sunday,\n";
        std::cout << "It is a Cardio Day!\n";
    default:
        std::cout << "Please select a valid day\n";
    }

    return 0;
}