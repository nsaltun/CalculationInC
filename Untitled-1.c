#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int addition();
int subtraction();
int multiplication();
int division();
int modulus();
int power();
int main()
{
    int number1;
    int number2;
    int result = 0;
    char opera;
    char num2[9];
    menu();

    while (1)
    {
        scanf("%d %c", &number1, &opera);
        //karakter girilmeden enter'a basıldığında bu satırda beklemeden işlem yapmaya devam etmesi için fgets kullanıldı.
        fgets(num2, 5, stdin);

        //fgets ile num2'ye kaydedilen değer integer'a çevriliyor.
        number2 = atoi(num2);

        //eğer number2'ye bir değer girilmeden enter'a basılmışsa number2=0 oluyor.
        //Bu durumda bir önceki sonuç değerinin set edilmedi gerekiyor.
        if (number2 == 0)
        {
            number2 = result;
        }

        //aşağıdaki switch-case'lerde result değeri her adımda güncellenmesi gerekiyor son sonucun tutulması için.
        switch (opera)
        {
        case '+':
            result = addition(number1, number2);
            printf("%d\n", result);
            break;

        case '-':
            result = subtraction(number1, number2);
            printf("%d\n", result);
            break;

        case '*':
            result = multiplication(number1, number2);
            printf("%d\n", result);
            break;

        case '/':
            result = division(number1, number2);
            printf("%d\n", result);
            break;

        case '%':
            result = modulus(number1, number2);
            printf("%d\n", result);
            break;

        case '^':
            result = power(number1, number2);
            printf("%d\n", result);
            break;

        default:
            printf("out of range.. \n");
        }
    }
}

void menu()
{
    printf("Enter + symbol for Addition \n");
    printf("Enter - symbol for Subtraction \n");
    printf("Enter * symbol for Multiplication \n");
    printf("Enter / symbol for Division \n");
    printf("Enter %% symbol for Modulus\n");
    printf("Enter ^ symbol for Power \n");
}

int addition(int number1, int number2)
{
    int result;
    result = number1 + number2;
    return result;
}

int subtraction(int number1, int number2)
{
    int result;
    result = number1 - number2;
    return result;
}

int multiplication(int number1, int number2)
{
    int result;
    result = number1 * number2;
    return result;
}

int division(int number1, int number2)
{
    int result;
    result = number2 == 0 ? 0 : number1 / number2;
    return result;
}

int modulus(int number1, int number2)
{
    int result;
    result = number1 % number2;
    return result;
}

int power(int number1, int number2)
{
    int result;
    result = pow(number1, number2);
    return result;
}
