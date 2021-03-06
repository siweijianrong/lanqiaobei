/*基础练习 十六进制转八进制
问题描述
　　给定n个十六进制正整数，输出它们对应的八进制数。
输入格式
　　输入的第一行为一个正整数n （1<=n<=10）。
　　接下来n行，每行一个由0~9、大写字母A~F组成的字符串，表示要转换的十六进制正整数，每个十六进制数长度不超过100000。
输出格式
　　输出n行，每行为输入对应的八进制正整数。
　　【注意】
　　输入的十六进制数不会有前导0，比如012A。
　　输出的八进制数也不能有前导0。
样例输入
　　2
　　39
　　123ABC
样例输出
　　71
　　4435274
　　【提示】
　　先将十六进制数转换成某进制数，再由某进制数转换成八进制。
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXSIZE 100000

//输出
void Print(char *data,int n)
{
    int i;
    for(i=n-1;i>=0;i--)
    {
        printf("%c",data[i]);
    }
    printf("\0");
    printf("\n");
}

//去除每个数的前缀0
int Trim(char *data,int n)
{
    int i;
    while(data[--n]=='0');
    return n+1;
}

//初始化
void Init(char *data,int n)
{
    int i;
    for(i=0;i<n;i++) data[i]='0';
}

//将十六进制转换二进制
int HexToBinary(char *hex,char *binary)
{
    int i;
    int value;
    int hex_n=strlen(hex);
    int binary_n=0;
    int length=4*hex_n;
    if(length%3==1) length+=2;
    else if(length%3==2) length++;
    Init(binary,length);
    for(i=hex_n-1;i>=0;i--){
        int count=0;
        switch(hex[i]){
        case 'A':value=10;break;
        case 'B':value=11;break;
        case 'C':value=12;break;
        case 'D':value=13;break;
        case 'E':value=14;break;
        case 'F':value=15;break;
        default:value=hex[i]-'0';
        }
        while(value){
            binary[binary_n+count]=value%2+'0';
            count++;
            value/=2;
        }
        binary_n+=4;
    }
    return length;
}

//将二进制转换为八进制
int BinaryToOctal(char *binary,int binary_n,char *octal)
{
    int i;
    int n=0;
    for(i=0;i+2<binary_n;i+=3){
        octal[n++]=(binary[i]-'0')+(binary[i+1]-'0')*2+(binary[i+2]-'0')*2*2+'0';
    }
    return n;
}

int main()
{
    int n;
    int i;
    char hex[MAXSIZE];      //十六进制
    char octal[3*MAXSIZE];  //八进制
    int octal_n=0;
    char binary[4*MAXSIZE]; //二进制
    int binary_n;
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++){
        gets(hex);
        binary_n=HexToBinary(hex,binary);
        octal_n=BinaryToOctal(binary,binary_n,octal);
        octal_n=Trim(octal,octal_n);
        Print(octal,octal_n);
    }
    return 0;
}
