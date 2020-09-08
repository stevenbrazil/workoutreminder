#include <iostream>
#include <string>

class Member
{
public:
    Member(int x, float y, std::string z) : age(x), weight(y), name(z){};

    float Set_Get_Weight(float weight);

    int age;
    float weight;
    std::string name;
};

float Member::Set_Get_Weight(float weight)
{
    Member user(28, user.weight = weight, "Steven");
    int res = 0;
    std::cout << "Did your weight change? [1] Yes [2] No\n";
    std::cin >> res;
    std::cout << "\n";

    if (res == 1)
    {

        std::cout << "Enter new weight\n";
        std::cin >> user.weight;
        std::cout << "\n\n";

        std::cout << "                      Hello " << user.name << ",     Age: " << user.age << "       Weight: " << user.weight << "\n\n";
        std::cout << "     ========================================================================================\n\n";
    }
    else if (res == 2)
    {

        std::cout << "Weight did not change\n";
    }
    else
    {
        std::cout << "Could not verify weight change\n";
    }

    return user.weight;
}

void Kaizen_Header()
{
    std::cout << "                        ====================================\n";
    std::cout << "                        ============Kaizen Physique=========\n";
    std::cout << "                        ====================================\n";
    std::cout << "\n";
    std::cout << "                           Keep track of your weightloss\n";
    std::cout << "                                        goals.             \n";
    std::cout << "                        ....................................\n\n\n";
}

int main()
{

    Kaizen_Header();
    Member user(28, 213.60, "Steven");
    std::cout << "                      Hello " << user.name << ",     Age: " << user.age << "       Weight: " << user.weight << "\n\n";
    std::cout << "     ========================================================================================\n\n";
    float weight_change = user.Set_Get_Weight(user.weight);
    std::cout << "\n";

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
