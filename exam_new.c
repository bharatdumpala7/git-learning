#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<conio.h>


//swaping of two numbers
/*int main()
{
    int a,b;
    scanf("%d,%d",&a,&b);

    printf("before printing a=%d b=%d\n",a,b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("after swaping a=%d b=%d",a,b);
    return 0;
}*/
//swaping of three numbers
/*int main()
{
    int a,b,c;
    scanf("%d,%d,%d",&a,&b,&c);

    printf("before swaping a=%d b=%d c=%d\n",a,b,c);

    a=a+b+c;
    b=a-b;
    c=b-c;
    a=a-b;
    b=b-c;

    printf("after swaping a=%d b=%d c=%d\n",a,b,c);
    return 0;
}*/
/*int main()
{
    int a=9,b=4;
    float x=2.5;
    printf("%d\n",a/b + (int)x);
    printf("%.2f\n",(float)(a/b) + x);
    printf("%.2f\n",(float)a/b + x);
    printf("%zu\n",sizeof(a+x));
    printf("%zu\n",sizeof(a+2.45678934567));
    return 0;
}*/
/*int main()
{
    int x=2,y=5;
    int z= x>y ? x++ : y--;
    switch(z%3)
    {
        case 0: printf("%d",z%3);
        case 1:printf("%d",z%3); break;
        case 2:printf("%d",z%3); 
        default:printf("%d",z%3);    

    }
    printf("\nx=%d y=%d z=%d",x,y,z);
    return 0;
}*/
/*int main()
{
    double i=0.1;
    printf("%.40lf",i);
    return 0;
}*/
// finding strightly increasing sequance in the input numbers
/*int main()
{
    int n,value,prev;
    printf("enter value of n:");
    scanf("%d",&n);

    if(n<=0)
    {
        printf("n must be positive\n");
        return 0;
    }

    int runlen=1,runstart=1;
    int bestlen=1,beststart=1;

    printf("enter %d valuues:",n);
    scanf("%d",&prev);

    for(int i=2;i<=n;i++)
    {
        scanf("%d",&value);

        if(value > prev)
        runlen++;
        else
        {
            runlen=1;
            runstart=i;
        }

        if(runlen > bestlen)
        {
            bestlen=runlen;
            beststart=runstart;
        }
        prev=value;
    }

    printf(" lenght = %d , starting index=%d",bestlen,beststart);
    return 0;
}*/
//printing the * partern
/*int main()
{
    int n;
    printf("enter value of the n:");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=i;j++)
        {printf(" ");}
        printf("*\n");
    }
    return 0;
}*/
//reverse partern of *
/*int main()
{
    int n;
    printf("enter value of n:");
    scanf("%d",&n);

    for(int i=n-1;i>=0;i--)
    {
        for(int j=0;j<i;j++)
        {
            printf(" ");
        }
        printf("*\n");
    }
    return 0;
}*/
//printing the hollow triangle partern
/*int main()
{
    int n,i,j,k;
    printf("enter value of n:");
    scanf("%d",&n);

    for(i=n-1;i>=0;i--)
    {
        for(j=0;j<i;j++)
        {
            printf(" ");
        }
        
        k = 2*(n-(i+1))-1;

        if(k<0)
        {
            printf("*\n");        
        }
        if(k>0)
        {
            printf("*");

            for(j=0;j<k;j++)
            {
                printf(" ");
            }

            printf("*\n");
        }
    }
    return 0;
}*/
/*int main()
{
    int n,i,j,k;
    printf("enter value of n:");
    scanf("%d",&n);

    for(i=n-1;i>=0;i--)
    {
        for(j=0;j<i;j++)
        {
            printf(" ");
        }
        
        k = 2*(n-(i+1))-1;

        if(k<0)
        {
            printf("*\n");        
        }
        if(k>0)
        {
            printf("*");

            for(j=0;j<k;j++)
            {
                printf(" ");
            }

            printf("*\n");
        }
    }

    for(i=1;i<=n-1;i++)
    {
        for(j=0;j<i;j++)
        {
            printf(" ");            
        }

        k = 2*(n-(i+1))-1;

        if(k<0)
        {
            printf("*\n");        
        }

        if(k>0)
        {
            printf("*");

            for(j=0;j<k;j++)
            {
                printf(" ");
            }
            printf("*\n");
        }
    }
    return 0;
}*/
/*int main()
{
    int n;
    printf("enter the size of the array:");
    scanf("%d",&n);

    int array[n],found=0;

    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);        
    }

    int x;
    printf("enter the value of x:");
    scanf("%d",&x);

    for(int i=0;i<n;i++)
    {
        if(found==0)
       {for(int j=i+1;j<n;j++)
        {
            if(array[i]+array[j]==x)
            {
                printf("first pair found \n %d + %d = %d",array[i],array[j],x);
                found=1;
                break;
            }

        }
       }
       if(found==1)
       {
        break;
       }
    }
    return 0;
}*/
int main()
{
    int n;
    printf("enter the number of fuel stations:");
    scanf("%d",&n);

    float gas[n],cost[n],fuel=0
}




