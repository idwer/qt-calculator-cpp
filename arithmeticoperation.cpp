#include "arithmeticoperation.h"

/*!
 * \brief ArithmeticOperation::Add
 * \param left is the first of two numbers to add.
 * \param right is the second of two numbers to add.
 * \return the sum of the two numbers.
 */
double ArithmeticOperation::Add(double left, double right)
{
    return left + right;
}

/*!
 * \brief ArithmeticOperation::Subtract
 * \param left is the first of two numbers to add.
 * \param right is the second of two numbers to add.
 * \return the difference of the two numbers in a particular order.
 */
double ArithmeticOperation::Subtract(double left, double right)
{
    return left - right;
}

/*!
 * \brief ArithmeticOperation::Divide
 * \param left is the first of two numbers to add.
 * \param right is the second of two numbers to add.
 * \return the quotient of the two numbers in a particular order.
 */
double ArithmeticOperation::Divide(double left, double right)
{
    return left / right;
}

/*!
 * \brief ArithmeticOperation::Multiply
 * \param left is the first of two numbers to add.
 * \param right is the second of two numbers to add.
 * \return the product of the two numbers.
 */
double ArithmeticOperation::Multiply(double left, double right)
{
    return left * right;
}
