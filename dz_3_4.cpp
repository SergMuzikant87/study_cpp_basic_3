#include <iostream>
#include <string>
#include <clocale>

/*
    Функция возвращает число, указанное на входе (от -99 до 99), в виде текста.
*/
static std::string value_text(int value);

int main(int argc, char * argv [])
{
    setlocale(LC_ALL, "Russian");

    /////////////////////////////////////////////////////////////////////////
    
    //1. Ввод данных.
 
    int value_1{};
    int value_2{};
    const int VALUE_MINIMUM = -99;
    const int VALUE_MAXIMUM = 99;
    
    std::cout << "Введите число 1: ";
    std::cin >> value_1;
    if((value_1 < VALUE_MINIMUM) || (value_1 > VALUE_MAXIMUM))
    {
        std::cout << "Введено некорректное значение числа 1.\n";
        return 0;
    }

    std::cout << "Введите число 2: ";
    std::cin >> value_2;
    if((value_1 < VALUE_MINIMUM) || (value_1 > VALUE_MAXIMUM))
    {
        std::cout << "Введено некорректное значение числа 2.\n";
        return 0;
    }

    //////////////////////////////////////////////////////////////////////////
    
    //2. Формирование результата

    std::string value_1_text = value_text(value_1);
    std::string value_2_text = value_text(value_2);
    std::string values_compare_text = (value_1 > value_2) ? "больше " : "меньше ";

    ///////////////////////////////////////////////////////////////////////////
    
    //3. Вывод результата

    std::cout << "\n" << value_1_text << values_compare_text << "чем "<< value_2_text << "\n";
    
    /////////////////////////////////////////////////////////////////////////////
    
    return 0;
}

/*
    Функция возвращает число, указанное на входе (от -99 до 99), в виде текста.
*/
static std::string value_text(int value)
{
    std::string output_text{""};
    std::string error_text{"?????? "};

    // Обработка ошибок
    if((value < -99) || (value > 99))
    {
        return error_text;
    }

    //знак
    if(value < 0)
    {
        output_text += "минус ";
        value = 0 - value;
    }

    //Разделение числа на цифры
    int value_digit_1 = ((value >= 10) || (value <= -10)) ? (value / 10) % 10 : 0;
    int value_digit_2 = value % 10;

    //Формирование текста цифр
    switch(value_digit_1)
    {
        case 0:
        case 1: break;
        case 2: output_text += "двадцать"; break;
        case 3: output_text += "тридцать"; break;
        case 4: output_text += "сорок"; break;
        case 5: output_text += "пятьдесят"; break;
        case 6: output_text += "шестьдесят"; break;
        case 7: output_text += "семьдесят"; break;
        case 8: output_text += "восемьдесят"; break;
        case 9: output_text += "девяносто"; break;
        default: return error_text;    
    }

    if(value_digit_1 != 1)
    {
        if(value_digit_1 != 0) output_text+=" ";
        switch (value_digit_2)
        {
            case 0: if(value_digit_1 == 0) output_text += "ноль"; break;
            case 1: output_text += "один"; break;
            case 2: output_text += "два"; break;
            case 3: output_text += "три"; break;
            case 4: output_text += "четыре"; break;
            case 5: output_text += "пять"; break;
            case 6: output_text += "шесть"; break;
            case 7: output_text += "семь"; break;
            case 8: output_text += "восемь"; break;
            case 9: output_text += "девять"; break;
            default: return error_text;  
        }
    }
    else
    {
        switch (value_digit_2)
        {
            case 0: output_text += "десять"; break;
            case 1: output_text += "одинадцать"; break;
            case 2: output_text += "двенадцать"; break;
            case 3: output_text += "тринадцать"; break;
            case 4: output_text += "четырнадцать"; break;
            case 5: output_text += "пятьнадцать"; break;
            case 6: output_text += "шестьнадцать"; break;
            case 7: output_text += "семьнадцать"; break;
            case 8: output_text += "восемьнадцать"; break;
            case 9: output_text += "девятьнадцать" ;break;
            default: return error_text;
        }
    }

    //Возврат результата
    return (output_text+=" ");
}