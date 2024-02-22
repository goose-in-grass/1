#include <iostream>

// ВАРИАНТ 1 И 2
int main() 
{
    // исходное число
    std::cout << "Введите число:" << std::endl;
    int initial_number;
    std::cin>>initial_number;

    // номер бита, который нужно поменять
    int user;    
    std::cout << "Введите номер бита, в котором хотите поставить единицу" << std::endl;
    std::cin>>user;

    //делаем программу удобнее для пользователя.
    user -= 1;

    int m = 1 << user;

    int result = initial_number | m;

    std::cout << user << std::endl;
    std::cout << result << std::endl;

}
