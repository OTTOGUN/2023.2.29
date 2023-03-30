//
// Created by 39221 on 2023/3/16.
//
#include<stdio.h>
#include <synchapi.h>
#include<string.h>
#include <assert.h>
#include <math.h>
#include <stdlib.h>

//整数质因数分解，有意思
/*
void Searching_numbers(int n)
{
    int i = 0;
    for(i = 2;i <= n;i++)
    {
        while(n % i == 0)
        {
            printf("%d",i);
            n /= i;
            if(n != 1){
                printf("*");
            }
        }
    }
}

int main(){
    int input = 0;
    printf("请输入一个你想要计算的数字");
    scanf("%d",&input);
    Searching_numbers(input);
    return 0;
}*/

/*
int main(){
    int zhang = 0;
    printf("请输入分数\n");
    while(scanf("%d",&zhang) != EOF)//不停的录入成绩
    {
        printf("%d--->",zhang);
        (zhang >= 90)? printf("成绩为A\n"):((zhang >= 60)? printf("成绩为B\n"): printf("成绩为C\n"));
    }
}*/

/*
int main()
{
    printf("请输入两个数字\n");
    int a = 1;
    int b = 2;
    int r = 0;
    while(scanf("%d%d",&a,&b) != EOF)
    {
        int start1 = a;
        int start2 = b;
        if(a > b){
            r = a % b;
            while(r != 0){
                a = b;
                b = r;
                r = a % b;
            }
            printf("最大公约数为:%d\n",b);
            printf("最大公倍数为:%d",start1 * start2 / b);
        }else if(a < b){
            r = b % a;
            while(r != 0){          //辗转相除法！
                b = a;
                a = r;
                r = b % a;
            }
            printf("最大公约数为:%d\n",a);
            printf("最大公倍数为:%d",start1 * start2 / a);
        }else{
            printf("最大公约数为:%d\n",a);
            printf("最大公倍数为:%d\n",a);
        }
    }
}*/

/*int main(){
    printf("请进行语句输入》》》\n");
    int letters = 0;
    int digits = 0;
    int spaces = 0;
    int others = 0;
    char c = 0;
    while((c = getchar()) != '\n')
    {
        if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        {
            letters++;
        }else if(c >= '0' && c <= '9'){
            digits++;
        }else if(c == ' '){
            spaces++;
        }else{
            others++;
        }
    }
    printf("字母一共有:%d,数字一共有:%d,空格一共有:%d，其他有:%d",letters,digits,spaces,others);
}*/

/*
int main()
{
    printf("请输入想要计算的数字a和项数n\n");
    int sum = 0;
    int i = 0;
    int a = 0;
    int n = 0;
    int current = 0;
    scanf("%d%d",&a,&n);
    for(i = 1;i <= n;i++){
        current += a * pow(10,i-1);
        printf("%d",current);
        if(i < n){
            printf("+");
        }else{
            printf("=");
        }
        sum += current;
    }
    printf("%d",sum);
}*/

int main(){
    int a = 0;
    int sum = 0;
    printf("请输入想要计算的数字\n");
    scanf("%d",&a);
    int i = 0;
    for(i = 2;i <= sqrt(a);i++){
        if(a % i == 0){
            if(i > sqrt(a)){
                return 0;
            }
            int c = a / i;
            sum += i + c;
        }
    }
    if(sum + 1 == a){
        printf("%d是完数",a);
    }else{
        printf("%d不是完数",a);
    };
    return 0;
}