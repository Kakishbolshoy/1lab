# Лабораторная работа 1

## Задания:

### 1.Разберите код программы из примера.(Я разобрал код программы из пример)
### 2.Составьте блок-схему алгоритма для своего варианта.
![диаграмма](диаграма.png)
### 3.Напишите программу, решающую задачу по своему варианту.
Вывести частное суммы параметров a, b и параметра x, если сумма меньше x, и обратное частное, если сумма больше. В случае равенства вывести частное b и x. Точность – 3 знака после запятой.
 ```
#include<stdio.h>
#include<math.h>
int main()
{
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

    if ((a+b) < x) {
        printf("%.2f", (a+b)/x);
    }
    else if ((a+b) > x) {
        printf("%.2f", x/(a+b));
    }
    else {
        printf("%.2f", b/x);
    }

    return 0;
}
}
```

### 4.Оформите отчёт в README.md. (готово)




