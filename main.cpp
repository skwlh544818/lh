#include <bits/stdc++.h>
#include <stdio.h>
#define CSIZE 4
typedef struct name
{
        char *ming;
     char *xing;
}name;
typedef struct student
{
    name mingzi;
    double grade[3];
    double avg;
}stduent;

double getAvg(student a)
{
    double sum=0;
    for(int i=0;i<3;++i)
    {
        sum+=a.grade[i];
    }
    return sum/3;
}


int main()
{
    student stu[CSIZE];
    name *n=(name *)malloc(sizeof (name)*CSIZE);
    n[0].ming="wang",n[0].xing="ming";
    n[1].ming="zhang",n[1].xing="san";
    n[2].ming="wu",n[2].xing="yong";
    n[3].ming="san",n[3].xing="san";
    for(int i=0;i<CSIZE;++i)
    {
        stu[i].mingzi=n[i];
    }
    for(int i=0;i<CSIZE;++i)
    {
        name a;
        scanf("%s %s",a.xing,a.ming);
        for(int j=0;j<CSIZE;++j)
        {
            if(!strcmp(stu[j].mingzi.xing,a.xing) && !strcmp(stu[j].mingzi.ming,a.ming))
            {
                scanf("%lf %lf %lf",&stu[j].grade[0],&stu[j].grade[1],&stu[j].grade[2]);
            }
        }
        for(int i=0;i<CSIZE;++i)
        {
            stu[i].avg=getAvg(stu[i]);
        }
    }
    for(int i=0;i<CSIZE;++i)
    {
        printf("%s %s  %f %f %f  %f\n",stu[i].mingzi.xing,stu[i].mingzi.ming,stu[i].grade[0],stu[i].grade[1],stu[i].grade[2],stu[i].avg);
    }
    double sum=0;
    for(int i=0;i<CSIZE;++i)
    {
        sum+=stu[i].avg;
    }
    printf("%f\n",sum/3);
return 0;
}