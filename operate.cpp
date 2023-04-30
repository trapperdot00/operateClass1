#include "operate.h"

std::istream& Operate::read(std::istream& is)
{
    is >> num1 >> operand >> num2;
    return is;
}
const double& Operate::solve()
{
    switch (operand) {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        result = num1 / num2;
        break;
    default:
        break;
    }
    return result;
}
