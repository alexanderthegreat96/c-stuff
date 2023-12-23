#include <stdio.h>
#include <stdlib.h>

// used constants
#define add 'a'
#define substract 's'
#define multiply 'm'
#define divide 'd'

// performs a math operation

int math_operation(int first_number, int second_number, char op_type)
{
    int result = 0;

    switch (op_type)
    {
    case add:
        result = first_number + second_number;
        break;
    case substract:
        result = first_number - second_number;
        break;
    case multiply:
        result = first_number * second_number;
        break;
    case divide:
        result = first_number / second_number;
        break;

    default:
        printf("Invalid op type.");
        break;
    }

    return result;
}

int main()
{
    // write a program that performa math operations
    // we wanna calculate different things

    int sum = math_operation(5, 10, add);
    int sub = math_operation(10, 5, substract);
    int mu = math_operation(10, 55, multiply);
    int div = math_operation(10, 2, divide);

    printf("Adding 5 + 10: %d\n", sum);
    printf("Subscrating 10 - 5: %d\n ", sub);
    printf("Multiplying 10 * 55: %d\n ", mu);
    printf("Dividing 10 to 2: %d\n ", div);

    return 0;
}