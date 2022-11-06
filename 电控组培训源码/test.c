#include <stdio.h>

int main()
{
    char arr[1000] = {0};//用于存取输入字符串的数组
    scanf("%s", &arr);
    int num = 0;//存取字符型变量转化为整形变量数值的变量
    int sum = 0;//最终的十进制数字
    int i = 0;
    int flag = 0;
    int FirstFlag = 0;//第一个十六进制字符标志变量
    int NegativeFlag = 0;
    // 1 -> 存在
    // 0 -> 不存在
    while(arr[i] != '#')
    {
        if(FirstFlag == 0 && arr[i] == '-')
        {
            NegativeFlag = 1;//这是一个负数
        }
        //char -> int
        if('0' <= arr[i] && arr[i] <= '9')//判断字符为数字
        {
            num = arr[i] - '0';
            flag = 1;
            if(FirstFlag == 0)
            {
                FirstFlag = 1;
            }
        }
        else if('a' <= arr[i] && arr[i] <= 'f')//判断小写字符
        {
            num = 10 + (int)(arr[i] - 'a');
            flag = 1;
            if(FirstFlag == 0)
            {
                FirstFlag = 1;
            }
        }
        else if('A' <= arr[i] && arr[i] <= 'F')//判断大写字符
        {
            num = 10 + (int)(arr[i] - 'a');
            flag = 1;
            if(FirstFlag == 0)
            {
                FirstFlag = 1;
            }
        }
        if(flag == 1)
        {
            sum = sum * 16 + num;
            flag = 0;
        }
        num = 0;//归零
        i++;
    }
    if(NegativeFlag == 1)
    {
        sum = -sum;
    }
    printf("%d\n", sum);
    return 0;
}