//
// Created by 39221 on 2023/3/16.
//
#include<stdio.h>
#include <synchapi.h>
#include<string.h>
#include <assert.h>
#include <math.h>
#include <stdlib.h>

//�����������ֽ⣬����˼
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
    printf("������һ������Ҫ���������");
    scanf("%d",&input);
    Searching_numbers(input);
    return 0;
}*/

/*
int main(){
    int zhang = 0;
    printf("���������\n");
    while(scanf("%d",&zhang) != EOF)//��ͣ��¼��ɼ�
    {
        printf("%d--->",zhang);
        (zhang >= 90)? printf("�ɼ�ΪA\n"):((zhang >= 60)? printf("�ɼ�ΪB\n"): printf("�ɼ�ΪC\n"));
    }
}*/

/*
int main()
{
    printf("��������������\n");
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
            printf("���Լ��Ϊ:%d\n",b);
            printf("��󹫱���Ϊ:%d",start1 * start2 / b);
        }else if(a < b){
            r = b % a;
            while(r != 0){          //շת�������
                b = a;
                a = r;
                r = b % a;
            }
            printf("���Լ��Ϊ:%d\n",a);
            printf("��󹫱���Ϊ:%d",start1 * start2 / a);
        }else{
            printf("���Լ��Ϊ:%d\n",a);
            printf("��󹫱���Ϊ:%d\n",a);
        }
    }
}*/

/*int main(){
    printf("�����������롷����\n");
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
    printf("��ĸһ����:%d,����һ����:%d,�ո�һ����:%d��������:%d",letters,digits,spaces,others);
}*/

/*
int main()
{
    printf("��������Ҫ���������a������n\n");
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
    printf("��������Ҫ���������\n");
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
        printf("%d������",a);
    }else{
        printf("%d��������",a);
    };
    return 0;
}