#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int getStr(const char *str,char *re,char *key);
/**
 * @function:匹配到value值
 * @param str :输入字符串.const char *
 * @param re ：匹配输出的字符串value,char*
 * @param key:匹配输出的字符串key,char*
 * @return ：返回状态int型
 * @description：给定"key = value"输出value
 */
 void test();
int jiou(const char*str,char *reji,char *reou);
/**
 * @function：输出奇数位和偶数位的字符串。
 * @param str :输入的字符串,const char*
 * @param reji ：输出的奇数位字符串，char*
 * @param reou : 输出的偶数位字符串，char*
 * @return 返回状态
 * @description：输出奇数位和偶数位的字符串，并且用函数参数来传递值
 */
 void test1();
int getStr(const char *str,char *re,char *key)
{
    if (str== NULL && re==NULL)
    {
        return -1;
    }
    sscanf(str,"%s = %s",key,re);
    return 0;
}
/**测试用例：
 * “key1 = valude1”
*“key2 =       valude2      "
*“key3  = valude3”
“key4        = valude4”
“key5   =   “
“key6   =“
“key7   =   “
 */
void test()
{
    char re[100],key[100];
    const char *te="key4        = valude4";
    int e=getStr(te,re,key);
    if (e!=0)
    {
        printf("Error: 输入为空");
    }
    printf("%s : %s\n",key,re);
}

int jiou(const char*str,char *reji,char *reou)
{
    if(str==NULL ||reji==NULL || reou == NULL)
    {
        return -1;
    }
    int len=strlen(str);
    int j=0;
    for(int i=1;i<len;i+=2)
    {
        reji[j++]=str[i];
    }
    j=0;
    for(int i=0;i<len;i+=2)
    {
        reou[j++]=str[i];
    }
    return 0;
}
/**测试用例
 * "1a2b3c4d5z"
 *
 */
void test1()
{
    const char *str="1a2b3c4d5z";
    char reji[100]={'\0'};
    char reou[100]={'\0'};
    int e=jiou(str,reji,reou);
    printf("%s\n%s\n",reji,reou);
}




int main() {
    test();
    test1();
    return 0;
}
