#include <iostream>
#include <string>
#include <clocale>

#define VALUE_MINIMUM -99
#define VALUE_MAXIMUM 99

// Прототип функции, которая возвращает число (от -99 до 99) в виде текста, указанное на входе.
static std::string value_to_text_of_value(int value);

// Главная функция
int main(int argc, char * argv [])
{
    setlocale(LC_ALL, "Russian");

    int values[2]{};
    std::string texts_of_values[2]{};
    
    for(int num  = 0; num < 2; num++)
    {
        std::cout << "Введите число " << num << ": ";
        std::cin >> values[num];
        if((values[num] < VALUE_MINIMUM) || (values[num] > VALUE_MAXIMUM))
        {
            std::cout << "Введено некорректное значение числа " << num << ".\n";
            return 0;
        }

        texts_of_values[num] = value_to_text_of_value(values[num]);
    }    

    std::cout << "\n" << texts_of_values[0] << ((values[0] > values[1]) ? "больше " : "меньше ") << "чем "<< texts_of_values[1] << "\n";
    
    return 0;
}

// Функция, которая возвращает число (от -99 до 99) в виде текста, указанное на входе.
static std::string value_to_text_of_value(int value)
{
    std::string text_of_value{""};
    std::string text_of_error{"какое-то число "};

    // Обработка ошибок
    if((value < VALUE_MINIMUM) || (value > VALUE_MAXIMUM))
    {
        return text_of_error;
    }

    // Учитываем знак числа
    if(value < 0)
    {
        text_of_value += "минус ";
        value = 0 - value;
    }

    //Разделение числа на цифры
    int digits[2]{ (value >= 10) ? (value / 10) % 10 : 0, value % 10 };

    //Формирование текста цифр
    switch(digits[0])
    {
        case 0:
        case 1: break;
        case 2: text_of_value += "двадцать"; break;
        case 3: text_of_value += "тридцать"; break;
        case 4: text_of_value += "сорок"; break;
        case 5: text_of_value += "пятьдесят"; break;
        case 6: text_of_value += "шестьдесят"; break;
        case 7: text_of_value += "семьдесят"; break;
        case 8: text_of_value += "восемьдесят"; break;
        case 9: text_of_value += "девяносто"; break;
        default: return text_of_error;    
    }

    if(digits[0] != 1)
    {
        if ((digits[0] != 0) && (digits[1]!= 0)) text_of_value+=" ";
        switch (digits[1])
        {
            case 0: if(digits[0] == 0) text_of_value += "ноль"; break;
            case 1: text_of_value += "один"; break;
            case 2: text_of_value += "два"; break;
            case 3: text_of_value += "три"; break;
            case 4: text_of_value += "четыре"; break;
            case 5: text_of_value += "пять"; break;
            case 6: text_of_value += "шесть"; break;
            case 7: text_of_value += "семь"; break;
            case 8: text_of_value += "восемь"; break;
            case 9: text_of_value += "девять"; break;
            default: return text_of_error;  
        }
    }
    else
    {
        switch (digits[1])
        {
            case 0: text_of_value += "десять"; break;
            case 1: text_of_value += "одинадцать"; break;
            case 2: text_of_value += "двенадцать"; break;
            case 3: text_of_value += "тринадцать"; break;
            case 4: text_of_value += "четырнадцать"; break;
            case 5: text_of_value += "пятьнадцать"; break;
            case 6: text_of_value += "шестьнадцать"; break;
            case 7: text_of_value += "семьнадцать"; break;
            case 8: text_of_value += "восемьнадцать"; break;
            case 9: text_of_value += "девятьнадцать" ;break;
            default: return text_of_error;
        }
    }

    return (text_of_value+=" ");
}