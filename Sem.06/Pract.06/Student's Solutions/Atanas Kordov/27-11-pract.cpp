#include <iostream>

bool isEven(int number) 
{
    return (number & 1) == 0;
}

int powerOfTwo(int power) 
{
    return 1 << power;
}

int clearBit(int number, int position) 
{
    int mask = ~(1 << (position - 1)); 
    return number & mask;
}

int returnBitVaue(int number, int position) 
{
    int mask = 1 << (position - 1);
    return (number & mask) >> (position - 1); 
}

int numberOfOnes(int number) 
{
    int counter = 0;
    int mask = 1;

    while (number > 0)
    {
        if ((number & mask) != 0)
        {
            counter++;
        }

        number >>= 1;
    }

    return counter;
}

int flipLastOne(int number)
{
    int mask = 1;
    int position = 0;
    
    if (number == 0)
    {
        return 0;
    }
    
    while (true)
    {
        position++;

        if ((number & mask) != 0)
        {
            clearBit(number, position);
            break;
        }

        mask <<= 1;
    }
}

int encryptedNumber(int number, int part)
{
    int mask = 1;

    for (int i = 0; i < part - 1; i++)
    {
        mask |= mask << 1;
    }

    return (number & mask);
}

bool isPartOfNumber(int number, int part) 
{
    do
    {
        if ((number & part) == part)
        {
            return true;
        }
        number >>= 1;

    } while (number != 0); 

    return false;
}

int notDuplicate(int* array, int size) 
{
    for (int i = 0; i < size - 1; i++)
    {
        array[i + 1] ^= array[i];
    }

    return array[size - 1];
}

int numberAfterPoition(int number, int startPosition, int numberOfBits) // 16, 4, 3 = 4 --> 10000 -> 100
{
    int mask = 1;

    for (int i = 0; i <= numberOfBits; i++) // 1111
    {
        mask |= mask << 1;
    }
}

int main()
{
    
}
