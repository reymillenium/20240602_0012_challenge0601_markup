/**
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                                                       *
 *       Created by: Reinier Garcia Ramos                *
 *       reymillenium@gmail.com                          *
 *                                                       *
 *       https://www.linkedin.com/in/reiniergarcia       *
 *       https://github.com/reymillenium                 *
 *       https://www.reiniergarcia.dev                   *
 *                                                       *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 **/

#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

template<typename T>
void printl(const T &item) {
    std::cout << item << std::endl;
}

template<typename T>
auto get_value(const std::string &message) -> T {
    std::cout << message;
    T value;
    std::cin >> value;
    std::cin.ignore();
    return value;
}

std::string humanize_integer(const unsigned long long int integer_value) {
    std::string integer_as_string = std::to_string(integer_value);
    // We insert commas into the string every three digits, fromm right to left.
    for (int j = integer_as_string.length() - 3; j > 0; j -= 3) {
        integer_as_string.insert(j, ",");
    }
    return integer_as_string;
}

std::string humanize_double(const long double double_value, const int precision = 2) {
    const long long int integer_value = static_cast<unsigned long long int>(double_value);
    const long double decimals = double_value - integer_value;
    // Extracts into a string the decimal part, rounded to two significant digits
    std::stringstream stream;
    // Places the decimals into the stream, rounded to two significant digits (by default)
    stream << std::fixed << std::setprecision(precision) << decimals;
    // Extracts the decimals from the stream, as a string, still rounded to two significant digits (by default)
    const std::string decimals_as_string = stream.str(); // It still includeds the zero & the dot. Ex: 0.34 (the dot must be removed next)
    return humanize_integer(integer_value) + decimals_as_string.substr(1, precision + 1);
}

std::string monetize_double(const long double double_value, const int precision = 2) {
    return "$ " + humanize_double(double_value, precision);
}

double calculate_retail(const double whole_sale_cost, const double markup_percentage) {
    return whole_sale_cost * (1 + markup_percentage / 100);
}

int main() {
item_whole_sale_cost_input:
    const auto item_whole_sale_cost = get_value<double>("Enter the item's whole sale cost: ");
    if (item_whole_sale_cost < 0) {
        printl("Please type a number greater or equal to 0. Try again.");
        goto item_whole_sale_cost_input;
    }

item_markup_percentage_input:
    const auto item_markup_percentage = get_value<double>("Enter the item's markup percentage: ");
    if (item_markup_percentage < 0) {
        printl("Please type a number greater or equal to 0. Try again.");
        goto item_markup_percentage_input;
    }

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "The item with a whole sale cost of " << monetize_double(item_whole_sale_cost) << " and a markup percentage of " << item_markup_percentage << " %," << std::endl;
    std::cout << "has a retail price of " << monetize_double(calculate_retail(item_whole_sale_cost, item_markup_percentage)) << std::endl;

    return 0;
}
