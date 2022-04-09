#include <stdio.h>
#include <stdlib.h>

struct commode
{
    int salesperson_number;
    int product_number[5];
    int sales[5];
};

struct date
{
    struct commode comm[4];
};

int main()
{
    char ch;
    bool sign=true;
    int i,j,n,x,sum[4][5]= {0},sum1[4]= {0},biggest=0,sum2[5]= {0},sum3[5]= {0},sum4[4]= {0},choice,result=0;
    struct date f[31];
    FILE* fp;
    printf("请输入上个月的天数:");
    scanf("%d",&n);

    for(x=0; x<n; x++)
    {
        printf("请输入第%d天的销售额\n",x+1);
        for(i=0; i<4; i++)
        {
            f[x].comm[i].salesperson_number=i+1;
            for(j=0; j<5; j++)
            {
                f[x].comm[i].product_number[j]=j+1;
                printf("请输入该天第%d人第%d种产品的销售额:",i+1,j+1);
                scanf("%d",&f[x].comm[i].sales[j]);
            }
        }
    }

    if((fp=fopen("date.txt","w"))==NULL)
    {
        printf("File open error!\n");
        exit(0);
    }

    for(x=0; x<n; x++)
    {
        for(i=0; i<4; i++)
        {
            fprintf(fp,"销售员代号%d\n",f[x].comm[i].salesperson_number);
            for(j=0; j<5; j++)
            {
                fprintf(fp,"产品代号%d 销售额%d\n",f[x].comm[i].product_number[j],f[x].comm[i].sales[j]);
            }
        }
    }

    if(fclose(fp))
    {
        printf("Can't close the file!\n");
        exit(0);
    }

    if((fp=fopen("date.txt","r"))==NULL)
    {
        printf("File open error!\n");
        exit(0);
    }

    for(i=0; i<4; i++)
    {
        for(j=0; j<5; j++)
        {
            for(x=0; x<n; x++)
            {
                fscanf(fp,"%d",&f[x].comm[i].sales[j]);
                sum[i][j]+=f[x].comm[i].sales[j];
            }
        }
    }
    system("cls");

    while(true)
    {
        printf("0 退出\n1 输出每个人每种产品的销售额\n2 根据销售额对销售员的排名\n");
        printf("3 统计每种产品的总销售额，对这些产品按从高到底的顺序，输出排序结果\n");

        while(result==0)
        {
            fflush(stdin);
            result=scanf("%d",&choice);
            if(result==0)
                printf("请输入一个数字:");
            else
            {
                result=0;
                break;
            }
        }

        switch(choice)
        {
        case 0:
            return 0;

        case 1:
        {
            for(i=0; i<4; i++)
            {
                for(j=0; j<5; j++)
                {
                    printf("第%d个人第%d件产品的销售额为%d\n",i+1,j+1,sum[i][j]);
                }
            }
        }
        break;

        case 2:
        {
            for(i=0; i<4; i++)
            {
                for(j=0; j<5; j++)
                {
                    sum1[i]+=sum[i][j];
                }
                sum4[i]=sum1[i];
            }

            printf("根据销售额对销售员的排名如下\n");
            for(i=0; i<4; i++)
            {
                biggest=i;
                for(j=i+1; j<4; j++)
                {
                    if(sum1[biggest]<sum1[j])
                        biggest=j;
                }
                if(biggest!=i)
                {
                    int temp;
                    temp=sum1[i];
                    sum1[i]=sum1[biggest];
                    sum1[biggest]=temp;
                }
            }
            for(i=0; i<4; i++)
            {
                for(j=0; j<4; j++)
                {
                    if(sum1[i]==sum4[j])
                    {
                        printf("%d\n",j+1);
                        sum4[j]=-1;
                        break;
                    }
                }
            }
            for(i=0; i<4; i++)
            {
                sum1[i]=0;
            }
        }
        break;

        case 3:
        {
            biggest=0;
            for(j=0; j<5; j++)
            {
                for(i=0; i<4; i++)
                {
                    sum2[j]+=sum[i][j];
                }
                sum3[j]=sum2[j];
            }
            for(j=0; j<5; j++)
            {
                biggest=j;
                for(i=j+1; i<5; i++)
                {
                    if(sum2[biggest]<sum2[i])
                        biggest=i;
                }
                if(biggest!=j)
                {
                    int temp;
                    temp=sum2[j];
                    sum2[j]=sum2[biggest];
                    sum2[biggest]=temp;
                }
            }
            for(i=0; i<5; i++)
            {
                for(j=0; j<5; j++)
                {
                    if(sum2[i]==sum3[j])
                    {
                        printf("产品号%d 销售额%d\n",j+1,sum2[i]);
                        sum3[j]=-1;
                        break;
                    }
                }
            }
            for(i=0; i<5; i++)
            {
                sum2[i]=0;
            }
        }
        break;

        default:
            printf("请输入正确的选择!\n");
            break;
        }

        fflush(stdin);
        printf("请问是否想继续选择查看(yes(y)或no(n):");
        while(true)
        {
            scanf("%c",&ch);
            if(ch=='y'||ch=='Y')
            {
                system("cls");
                break;
            }
            else
            {
                if(ch=='N'||ch=='n')
                    return 0;
                else
                {
                    fflush(stdin);
                    printf("请输入y或n\n");
                }
            }
        }

    }

    if(fclose(fp))
    {
        printf("Can't close the file!\n");
        exit(0);
    }

    return 0;

}
