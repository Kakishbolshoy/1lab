# Лабораторная работа 1

## Задания:

1. Разберите код программы из примера.
2. Составьте блок-схему алгоритма для своего варианта.
3.  Напишите программу, решающую задачу по своему варианту.
4. Оформите отчёт в README.md. 

1. Я разобрал код программы из пример
2. ![диаграмма](диаграма.png)
3.
```
#include<stdio.h>
#include<math.h>
int main()
{
    float a, b, x;
    printf("Enter a -> ");
    scanf("%f", &a);
    printf("Enter b -> ");
    scanf("%f", &b);
    printf("Enter x -> ");
    scanf("%f", &x);
    if ((a+b)<x)
        {printf((a+b/x));
        return 0;}
    else
        if ((a+b)>x)
            {printf (x/(a+b));
            return 0;}
        else
            printf (b/x);
            return 0;
}
```
4. Отчет готов



