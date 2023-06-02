#include <stdio.h>
struct student{
    char name[20];
    int eng;
    int math;
    int pys;
    double mean;
};
int main()
{
    struct student stu;
    
    printf("enter the data of student\n");
    for(int i=1;i<=10;i++){
        printf("\nenter name of %d student= ",i);
        scanf("%s",stu.name);
        printf("\nenter marks in english= ");
        scanf("%d",&stu.eng);
        printf("\nenter marks in math= ");
        scanf("%d",&stu.math);
        printf("\nenter marks in physics= ");
        scanf("%d",&stu.pys);
        stu.mean=(double)(stu.math+stu.eng+stu.pys)/3;
        printf("\nMean of these three subject is= %lf",stu.mean);
        if(stu.mean>=90 && stu.mean<=100) 
            printf("\nGrade= S");
        else if(stu.mean>=80 && stu.mean<90) 
            printf("\nGrade= A");
        else if(stu.mean>=70 && stu.mean<80) 
            printf("\nGrade= B");
        else if(stu.mean>=60 && stu.mean<70) 
            printf("\nGrade= C");
        else
            printf("\nGrade = D");
    }
    return 0;
}
