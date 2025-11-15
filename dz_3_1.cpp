#include <iostream>

int main(void)
{

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////

    std::cout << "Operator && \n";
    
    bool x1 = false;
    bool x2 = false;
    std::cout << std::boolalpha << x1  << "  " << x2 << "  " << (x1 && x2) << std::endl;

    x1 = false;
    x2 = true;
    std::cout << std::boolalpha << x1  << "  " << x2 << "  " << (x1 && x2) << std::endl;

    x1 = true;
    x2 = false;
    std::cout << std::boolalpha << x1  << "  " << x2 << "  " << (x1 && x2) << std::endl;

    x1 = true;
    x2 = true;
    std::cout << std::boolalpha << x1  << "  " << x2 << "  " << (x1 && x2) << std::endl << std::endl;
    
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////

    std::cout << "Operator || \n";

    x1 = false;
    x2 = false;
    std::cout << std::boolalpha << x1  << "  " << x2 << "  " << (x1 || x2) << std::endl;

    x1 = false;
    x2 = true;
    std::cout << std::boolalpha << x1  << "  " << x2 << "  " << (x1 || x2) << std::endl;

    x1 = true;
    x2 = false;
    std::cout << std::boolalpha << x1  << "  " << x2 << "  " << (x1 || x2) << std::endl;

    x1 = true;
    x2 = true;
    std::cout << std::boolalpha << x1  << "  " << x2 << "  " << (x1 || x2) << std::endl;
    
    /////////////////////////////////////////////////////////////////////////////////////////////////////////

    return 0;
}