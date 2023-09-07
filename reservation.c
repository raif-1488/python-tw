#include<stdio.h>   
#include<string.h>
int main(){
    char a[10],b[10],n[10],g[10];
    int c=1;
    int x,m,age;
    while (c==1)
    {
        printf("Enter starting point: ");
        scanf("%s",&a);
        printf("Enter destination: ");
        scanf("%s",&b);
        printf("Choose train: \n1.Rajdhani\n2.Shatabadi\n3.Janshtabdi\n4.Durunto\n5.Double Decker\nEnter choice: ");
        scanf("%d",&x);
        if (x==1)
        {
            printf("No. of passengers: ");
            scanf("%d",&m);
            for (int i = 1; i <=m; i++)
            {
                printf("Details of passenger %d",i);
                printf("\nEnter name: ");
                scanf("%s",&n);
                printf("\nEnter age: ");
                scanf("%d",&age);
                printf("\nEnter gender: ");
                scanf("%s",&g);

            }
            printf("%d tickets booked in Rajdhani from %s to %s",m,a,b);
        }
        if (x==2)
        {
            printf("No. of passengers: ");
            scanf("%d",&m);
            for (int i = 1; i <=m; i++)
            {
                printf("Details of passenger %d",i);
                printf("\nEnter name: ");
                scanf("%s",&n);
                printf("\nEnter age: ");
                scanf("%d",&age);
                printf("\nEnter gender: ");
                scanf("%s",&g);

            }
            printf("%d tickets booked in Shatabadi from %s to %s",m,a,b);
        }
        if (x==3)
        {
            printf("No. of passengers: ");
            scanf("%d",&m);
            for (int i = 1; i <=m; i++)
            {
                printf("Details of passenger %d",i);
                printf("\nEnter name: ");
                scanf("%s",&n);
                printf("\nEnter age: ");
                scanf("%d",&age);
                printf("\nEnter gender: ");
                scanf("%s",&g);

            }
            printf("%d tickets booked in Janshatabadi from %s to %s",m,a,b);
        }
        if (x==4)
        {
            printf("No. of passengers: ");
            scanf("%d",&m);
            for (int i = 1; i <=m; i++)
            {
                 printf("Details of passenger %d",i);
                printf("\nEnter name: ");
                scanf("%s",&n);
                printf("\nEnter age: ");
                scanf("%d",&age);
                printf("\nEnter gender: ");
                scanf("%s",&g);

            }
            printf("%d tickets booked in Durunto from %s to %s",m,a,b);
        }
        if (x==5)
        {
            printf("No. of passengers: ");
            scanf("%d",&m);
            for (int i = 1; i <=m; i++)
            {
                 printf("Details of passenger %d",i);
                printf("\nEnter name: ");
                scanf("%s",&n);
                printf("\nEnter age: ");
                scanf("%d",&age);
                printf("\nEnter gender: ");
                scanf("%s",&g);

            }
            printf("%d tickets booked in Double decker from %s to %s",m,a,b);
        }

        printf("\nbook again?(y/n): ");
        scanf("%d",&c);
    }

}