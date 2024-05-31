//
// Created by danon on 12.05.2024.
//

#ifndef POLINA_EXPRESSIONCALC_H
#define POLINA_EXPRESSIONCALC_H
#include "Queue.h"
#include <string>
#include "Stack.h"
namespace hohlova {
    class ExpressionCalc {
        std::string InfixToPostfix(const std::string &expr);

        long long ParseNum(const std::string &str, size_t &pos);

        long long Calculate(const std::string &postfix);

    public:
        ExpressionCalc() = default;

        void readExpression(std::istream &input);

        void CalculateExpressions(Stack<long long> &);

    private:
        Queue<std::string> expressions;
    };

} // hohlova
#endif //POLINA_EXPRESSIONCALC_H
