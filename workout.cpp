#include <iostream>
#include <string>
#include "workoutday.h"

class Member
{
public:
    Member(int x, float y, std::string z) : age(x), weight(y), name(z){};

    float Weight_Change(float weight);
    int SetAge();
    float SetWeight();
    std::string SetName();

    int age;
    float weight;
    std::string name;
};

int Member::SetAge()
{

    int age;
    std::cout << "What is your age?\n";
    std::cin >> age;
    return age;
}

float Member::SetWeight()
{

    float weight;
    std::cout << "Please enter your weight?\n";
    std::cin >> weight;
    return weight;
}

std::string Member::SetName()
{

    std::string f_name;
    std::string l_name;

    std::cout << "Enter your First name:\n";
    std::cin >> f_name;
    std::cout << "Enter your Last name:\n";
    std::cin >> l_name;

    std::string name = f_name + " " + l_name;
    return name;
}

float Member::Weight_Change(float weight)
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

int IsWorkoutDay()
{

    int res = 1;
    std::cout << "Is today a workout day?\n";
    std::cout << "Please enter day of week..\n";
    std::cout << "==============================\n\n";
    std::cout << "[1] Monday [2] Tuesday [3]Wednesday [4]Thursday [5]Friday [6]Saturday [7]Sunday,\n";
    std::cout << "Input selection 1 through 7\n";
    std::cin >> res;

    return res;
}

void WorkOutDay(int exercise)
{

    switch (exercise)
    {

    case 1:
        std::cout << "If today is Monday,\n";
        std::cout << "It is Arm Day!\n\n";
        break;
    case 2:
        std::cout << "If today is Tuesday,\n";
        std::cout << "It is Leg Day!\n\n";
        break;
    case 3:
        std::cout << "If today is Wednesday,\n";
        std::cout << "It is Chest Day!\n\n";
        break;
    case 4:
        std::cout << "If today is Thursday,\n";
        std::cout << "It is Shoulders Day!\n\n";
        break;
    case 5:
        std::cout << "If today is Friday,\n";
        std::cout << "It is Back Day!\n\n";
        break;
    case 6:
        std::cout << "If today is Saturday,\n";
        std::cout << "It is a Rest Day!\n\n";
        break;
    case 7:
        std::cout << "If today is Sunday,\n";
        std::cout << "It is a Cardio Day!\n\n";
    default:
        std::cout << "Please select a valid day\n";
    }
}

bool DidWorkout()
{

    bool res = false;
    char yes_or_no;
    std::cout << "Did you perform workout today?\n[Y] or [N]?\n";
    std::cin >> yes_or_no;
    if (yes_or_no == 'Y' || yes_or_no == 'y')
    {
        res = true;
    }
    else if (yes_or_no == 'N' || yes_or_no == 'n')
    {
        res = false;
    }
    else
    {
        std::cout << "Please select a valid response\n";
        DidWorkout();
    }

    return res;
}

void CompleteSession(int exercise, bool workout_done)
{

    if (exercise == 6 && workout_done == false)
    {

        std::cout << "On your Rest day, make sure you do not consume extra calories than you need to\n";
        std::cout << "Comeback tomorrow so that we can see more of your progress\n";
    }
    else if (workout_done == true)
    {

        std::cout << "Great job today!\n";
        std::cout << "Make sure to eat a healthy meal and record your macros to keep track of your intake.\n";
    }
    else if (workout_done == false)
    {

        std::cout << "GO ahead and finish your workout for today so that you can boost your weightloss potential\n";
    }
}
