#include <iostream>

class Operate
{
public:
    Operate(const double& i, const char& op, const double& j)
        : num1(i), operand(op), num2(j) { solve(); }
    Operate() : num1(0), operand(' '), num2(0) {}

    const double& getResult() const { return result; }
    const double& calc() { solve(); }

    std::istream& read(std::istream&);

private:
    double num1;
    char operand;
    double num2;
    double result;

    const double& solve();
};
