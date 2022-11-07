#include <stdio.h>

// void fun_printf(void)
// {
//     printf("hello Qiqi\n");
// }

// int main()
// {
//     // printf("hello Qiqi\n");
//     fun_printf();
//     return 0;
// }
// #define PI 3.14

// void fun_arr(int arr[], int n)
// {
//     for(int i = 0; i < n; i++)
//     {
//         printf("%d\n", arr[i]);
//     }
// }

// int main()
// {
//     int n = 0;
//     int arr[2] = {0, 0};
//     int arr2[8] = {7, 8, 0, 0, 0, 0, 7, 8};
//     int i = 0;
//     for(i = 0; i < 8; i++)
//     {
//         arr2[i] = i;
//     }
//     fun_arr(arr2, 8);
    
//     return 0;
// }

//求和函数
double sum(double arr[], int n)
{
    int i = 0;
    int sum = 0;//最终的和
    for(i = 0; i < n;i++)
    {
        sum += arr[i];   
    }
    return sum;
}

void menu()
{
    printf("=====最小二乘法====\n");
}
int main()
{
    menu();
    int n = 0;//自变量因变量数组元素个数
    printf("有几组元素:>\n");
    scanf("%d", &n);
    double x[n];//devcpp
    // double x[100];//vs2022
    double y[n];//devcpp
    // double y[100];//vs2022

    int i = 0;
    for(i = 0; i < n;i++)
    {
        printf("输入第%d组自变量\n", i + 1);
        //赋值每个自变量元素
        scanf("%lf", &x[i]);

        printf("输入第%d组因变量\n", i + 1);
        scanf("%lf", &y[i]);
    }

    //自变量的求和
    double SumX = sum(x, n);
    //因变量的求和
    double SumY = sum(y, n);

    //自变量平方的求和
    double x2[n];
    for(i = 0; i < n; i++)
    {
        x2[i] = x[i] * x[i];
    }
    double SumX2 = sum(x2, n);//自变量平方的和
    
    //因变量平方的和
    double y2[n];//因变量平方数组
    for(i = 0; i < n;i++)
    {
        y2[i] = y[i] * y[i];
    }
    double Sumy2 = sum(y2, n);
    
    //自变量与因变量乘积的和
    double xy[n];
    for(i = 0; i < n;i++)
    {
        xy[i] = x[i] * y[i];
    }
    double SumXY = sum(xy, n);

    double a0 = (SumY * SumX2 - SumX * SumXY) / (n * SumX2 - SumX * SumX);
    double a1 = (n * SumXY - SumX * SumY) / (n * SumX2 - SumX * SumX);

    //输出a0 和 a1
    printf("====y = a0 + a1 * x====\n");
    printf("a0 = %lf\n", a0);
    printf("a1 = %lf\n", a1);

    return 0;
}

