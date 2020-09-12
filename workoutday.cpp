#include <iostream>
#include <string>
#include "workout.cpp"

int main()
{

    Kaizen_Header();

    Member user(0, 0.00, "User");
    user.age = user.SetAge();
    user.weight = user.SetWeight();
    user.name = user.SetName();

    Kaizen_Header();

    std::cout << "                     Hello " << user.name << ",     Age: " << user.age << "       Weight: " << user.weight << "\n\n";
    std::cout << "     ========================================================================================\n\n";
    std::cout << "\n";

    int exercise = IsWorkoutDay();
    std::cout << "\n";
    WorkOutDay(exercise);

    bool workout_done = DidWorkout();
    std::cout << "\n\n";

    Kaizen_Header();
    CompleteSession(exercise, workout_done);

    return 0;
}