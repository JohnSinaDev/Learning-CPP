#include <iostream>

std::string dayOfWeek(int dayNum){
    std::string day{};

    switch(dayNum){
    case 0:
        day = "Sunday";
        break;
    case 1:
        day = "Monday";
        break;
    case 2:
        day = "Tuesday";
        break;
    case 3:
        day = "Wednesday";
        break;
    case 4:
        day = "Thursday";
        break;
    case 5:
        day = "Friday";
        break;
    case 6:
        day = "Saturday";
    default:
        day = "nil";
    }

return day;

}

int main()
{
     std::cout << dayOfWeek(0);
}
