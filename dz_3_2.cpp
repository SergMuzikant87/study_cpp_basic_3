#include <iostream>

int main(void)
{
    int value_1{}, value_2{}, value_3{};
    
    std::cout << "Input value 1:" << std::endl;
    std::cin >> value_1;
    std::cout << "Input value 2:" << std::endl;
    std::cin >> value_2;
    std::cout << "Input value 3:" << std::endl;
    std::cin >> value_3;

    std::cout << "Result is: \n";
      (value_1 >= value_2) && (value_2 >= value_3) ? std::cout << value_1 << " " << value_2 << " " << value_3 << "\n"
    : (value_1 >= value_3) && (value_3 >= value_2) ? std::cout << value_1 << " " << value_3 << " " << value_2 << "\n" 
    : (value_2 >= value_1) && (value_1 >= value_3) ? std::cout << value_2 << " " << value_1 << " " << value_3 << "\n"
    : (value_2 >= value_3) && (value_3 >= value_1) ? std::cout << value_2 << " " << value_3 << " " << value_1 << "\n"  
    : (value_3 >= value_2) && (value_2 >= value_1) ? std::cout << value_3 << " " << value_2 << " " << value_1 << "\n" 
                                                   : std::cout << value_3 << " " << value_1 << " " << value_2 << "\n";

    return 0;
}