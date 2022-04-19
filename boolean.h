typedef unsigned char boolean;
typedef enum SetType
{
    True = 1,
    False = 0
}SetType ;

char GetBoolean(char index, boolean boolean)
{
    return (boolean & (1 << index));
}

void SetBoolean(char index, boolean* boolean, SetType trueorfalse)
{
    if (trueorfalse)
        *boolean = (*boolean | (1 << index));
    else
        *boolean = (*boolean & ~(1 << index));
}