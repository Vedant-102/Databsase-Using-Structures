#include <stdio.h>
#include <string.h>
struct data
{
    char pname[100];
    int price;
    char stor[10];
    char proc[100];
    char os[30];
    char cam[15];
};
void main()
{
    struct data info[5];
    int i,j,n,temppr;
    char tempn[100],tempst[10],tempp[100],tempos[30],tempc[15];
    for(i=0;i<3;i++)
    {
        printf("Enter Details for Phone %d\n\n",i+1);
        printf("Enter Phone Name: ");
        scanf(" %[^\n]",info[i].pname);
        printf("Enter Price: ");
        scanf("%d",&info[i].price);
        printf("Enter Storage: ");
        scanf(" %[^\n]",info[i].stor);
        printf("Enter Processor: ");
        scanf(" %[^\n]",info[i].proc);
        printf("Enter OS: ");
        scanf(" %[^\n]",info[i].os);
        printf("Enter Camera Quality: ");
        scanf(" %[^\n]",info[i].cam);
        printf("\n");
    }
    
    printf("Enter 1 to sort by Price: High to Low | Enter 2 to sort by Price: Low to High: ");
    scanf("%d",&n);
    printf("\n\n");
    
    if(n==1)
    {
        for(i=1;i<=3;i++)
        {
            for(j=0;j<3;j++)
            {
                if(info[j].price<info[j+1].price)
                {
                    temppr=info[j].price;
                    info[j].price=info[j+1].price;
                    info[j+1].price=temppr;
                    
                    strcpy(tempn,info[j].pname);
                    strcpy(info[j].pname,info[j+1].pname);
                    strcpy(info[j+1].pname,tempn);
                
                    strcpy(tempst,info[j].stor);
                    strcpy(info[j].stor,info[j+1].stor);
                    strcpy(info[j+1].stor,tempst);
                    
                    strcpy(tempp,info[j].proc);
                    strcpy(info[j].proc,info[j+1].proc);
                    strcpy(info[j+1].proc,tempp);
                    
                    strcpy(tempos,info[j].os);
                    strcpy(info[j].os,info[j+1].os);
                    strcpy(info[j+1].os,tempos);
                    
                    strcpy(tempc,info[j].cam);
                    strcpy(info[j].cam,info[j+1].cam);
                    strcpy(info[j+1].cam,tempc);
                    
                }
            }
        }
    }
    
    else if(n==2)
    {
        for(i=1;i<=3;i++)
        {
            for(j=0;j<3;j++)
            {
                if(info[j].price>info[j+1].price)
                {
                    temppr=info[j].price;
                    info[j].price=info[j+1].price;
                    info[j+1].price=temppr;
                    
                    strcpy(tempn,info[j].pname);
                    strcpy(info[j].pname,info[j+1].pname);
                    strcpy(info[j+1].pname,tempn);
                    
                    strcpy(tempst,info[j].stor);
                    strcpy(info[j].stor,info[j+1].stor);
                    strcpy(info[j+1].stor,tempst);
                    
                    strcpy(tempp,info[j].proc);
                    strcpy(info[j].proc,info[j+1].proc);
                    strcpy(info[j+1].proc,tempp);
                    
                    strcpy(tempos,info[j].os);
                    strcpy(info[j].os,info[j+1].os);
                    strcpy(info[j+1].os,tempos);
                    
                    strcpy(tempc,info[j].cam);
                    strcpy(info[j].cam,info[j+1].cam);
                    strcpy(info[j+1].cam,tempc);
                    
                }
            }
        }
    }
    
    for(i=0;i<3;i++)
    {
       printf("Name: %s   Price: %d   Storage: %s   Processor: %s   OS: %s   Camera: %s",info[i].pname,info[i].price,info[i].stor,info[i].proc,info[i].os,info[i].cam);
        printf("\n\n");
    }
    
}
