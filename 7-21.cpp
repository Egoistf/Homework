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
    printf("�������ϸ��µ�����:");
    scanf("%d",&n);

    for(x=0; x<n; x++)
    {
        printf("�������%d������۶�\n",x+1);
        for(i=0; i<4; i++)
        {
            f[x].comm[i].salesperson_number=i+1;
            for(j=0; j<5; j++)
            {
                f[x].comm[i].product_number[j]=j+1;
                printf("����������%d�˵�%d�ֲ�Ʒ�����۶�:",i+1,j+1);
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
            fprintf(fp,"����Ա����%d\n",f[x].comm[i].salesperson_number);
            for(j=0; j<5; j++)
            {
                fprintf(fp,"��Ʒ����%d ���۶�%d\n",f[x].comm[i].product_number[j],f[x].comm[i].sales[j]);
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
        printf("0 �˳�\n1 ���ÿ����ÿ�ֲ�Ʒ�����۶�\n2 �������۶������Ա������\n");
        printf("3 ͳ��ÿ�ֲ�Ʒ�������۶����Щ��Ʒ���Ӹߵ��׵�˳�����������\n");

        while(result==0)
        {
            fflush(stdin);
            result=scanf("%d",&choice);
            if(result==0)
                printf("������һ������:");
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
                    printf("��%d���˵�%d����Ʒ�����۶�Ϊ%d\n",i+1,j+1,sum[i][j]);
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

            printf("�������۶������Ա����������\n");
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
                        printf("��Ʒ��%d ���۶�%d\n",j+1,sum2[i]);
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
            printf("��������ȷ��ѡ��!\n");
            break;
        }

        fflush(stdin);
        printf("�����Ƿ������ѡ��鿴(yes(y)��no(n):");
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
                    printf("������y��n\n");
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
