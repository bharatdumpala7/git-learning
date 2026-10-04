#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>

/*int mod(int a)
{
    if(a>0)
    {
        return a;
    }
    else
    {
        return -a;
    }
};*/
// ./a.exe for execution

/*int main()
{
    printf("Hello iit bhu");
    return 0;
}*/
 /*int main()
 {
    int i;
    printf("%d",sizeof(i));
    return 0;
}*/
/*int main()
{
    char i='-c';
    printf("%c",i);
    return 0;
}*/
/*int main()
{
    int i=255;
    //printf("the intiger in hexadecimal system:%X",i);
    printf("sixe of i is %zu",sizeof(i++));
    printf("\n%d",i);
    return 0;
}*/
/*int main()
{
    int a=29;
    double b=90;
    printf("%lu",sizeof(a+b));
    return 0;
}*/
/*int main()
{
    enum months {
        january,febrevary,march,april,may,june,july,agust,september,october,november,december
    };
    enum months now= september;
    enum months next=october;

    printf("present month is %d",now+1);
    printf("\nnext month is %d",next+1);
    return 0;    
}*/
/*int main()
{
    float f=0.89456f;
    int x=45;
    printf("%d%10.f",x,f);
    return 0;    
}*/
/*#define max 10
int main()
{
    printf("max %d",max);
    return 0;
}*/
/*#define FREEZING_PT 32.0F
#define SCALE_FACTOR (5.0f/9.0f)

int main()
{
    float fahrenheit,celsius;
    printf("enter fahrenheit temperature:");
    scanf("%f",&fahrenheit);

    celsius = (fahrenheit-FREEZING_PT)*SCALE_FACTOR;

    printf("\ncelsius equivalent: %.1f",celsius);
    return 0;
}*/
/*#define inch 2.54

int main()
{
    float inches,cm;
    printf("enter inches measurement:");
    scanf("%f",&inches);
    cm = inches*inch;
    printf("the length in cm is %.2f",cm);
    return 0;
}*/
/*int main()
{
    float f=456;
    int i=9;
    printf("%-4d%g",i,f);
    return 0;
}*/
/*int main()
{
    int i=7567;
    float f=34.5645;

    printf("|%d|%5d|%-5d|%5.3d|\n",i,i,i,i);
    printf("|%f|%5f|%-5f|%5.3f|\n",f,f,f,f);
    return 0;
}*/
/*int main()
{
    printf("hello iit bhu\b\bmy name is iit bhu");
    return 0;
}*/
/*int main()
{
    printf("%%");
    return 0;
}*/
/*int main()
{
    printf("\\");
    return 0;
}*/
 /*int main()
 {
    char n,m;
    scanf("%c\\%c",&n,&m);
    printf("%c %c",n,m);
    return 0;
 }*/
/*int main()
{
    int i,j;
    float f;
    scanf("%d /%d",&i,&j);
    printf("%d %d",i,j);
    return 0;    
}*/
/*int main()
{
    int num1,denom1,num2,denom2,result_num,result_denom;

    printf("enter the first fraction:");
    scanf("%d/%d",&num1,&denom1);

    printf("enter the second fraction:");
    scanf("%d/%d",&num2,&denom2);

    result_num = num1*denom2 +num2*denom1;
    result_denom = denom1*denom2;

    printf("result is %d/%d",result_num,result_denom);
    return 0;

}*/
/*int main()
{
    typedef char bharat;
    bharat nm='b';
    printf("my character is: %c",nm);
    return 0;
}*/
/*int main()
{
    int num=79,denom=34;
    double mean;
    mean = (double)num/denom;

    printf("mean:%lf",mean);
    return 0;
}*/
/*#define car 45
int main()
{
    car=456;
    printf("%d",car);
    return 0;
}*/
/*int main()
{
    unsigned int i=-10;

    printf("%d",i);
    return 0;
}*/
/*int main()
{
    int n;
    if(scanf("%d",&n)!=5){
        printf("hello");
    }
    return 0;
}*/
/*int main()
{
    char nm[]={'h','e','l','l','o'};
    printf("%s %d",nm,sizeof(nm));
    return 0;
}*/
 

/*int main()
 {
    int i=90;
    printf("%d",i);
    return 0;
}*/
 /*int main()
 {
    int ary[5]={1,2,3,4,5};

    ary[0]++;

    printf("%d",ary[0]);
    return 0;
 }*/
/*int main()
{
    char name[20];
    int age;
    float height;
    float percentage;
    printf("-----enter student details------");
    printf("name:");
    scanf("%s",&name);
    printf("\nage:");
    scanf("%d",&age);
    printf("\nheight:");
    scanf("%f",&height);
    printf("\npercentage:");
    scanf("%f",&percentage);

    printf("\n\n----students details-----");
    printf("\nmy name is %s\ni am %d years old\nmy height is %f\nmy percentage is %f",name,age,height,percentage);
    return 0;
}*/
/*int main()
{
    int a=-1;
    unsigned int b=-1;
    printf("%d",a);
    printf("\n%u",b);
    return 0;
}*/
/*int main()
{
    int unsigned i=0;
    printf("%u",i);
    i=i-1;
    printf("\n%d",i);
    return 0;
}*/
/*int main()
{
    int i,j;
    i=9;
    j=10;
    printf("%d%5d",i,j);
    return 0;
}*/
/*int main()
{
    float i=9.000898345;
    printf("%20.5f",i);
    return 0;
}*/
/*int main()
{
    int i=897;

    printf("%04d",i);
    return 0;
}*/
/*int main()
{
    int i=45;
    printf("%x",i);
    return 0;  
}*/
/*int main()
{
    int i=56,j=3;
    printf("%d",-i%j);
    return 0;
}*/
/*int main()
{
    int i;

    if(i=0)
    {
        printf("hello");
    }
    return 0;
}*/
/*#define m 5+5
int main()
{
    printf("%d",m*m);
    return 0;
}*/
/*int main()
{
    int i[3]={4,5,6};
    printf("%d",0[i]);
    return 0;
}*/
/*int main()
{
    int N,M;
    scanf("%d%d",&N,&M);

    int j= N*M;

    if(j%2==0)
    {
        printf("%d",j/2);
    }
    else
    {
        printf("%d",(j-1)/2);
    }
    
    return 0;
}*/
/*int main()
{
    int P,R,S,sd1,sd2,sd3,sd4,sd5;
    int T;
    int sum,sf=0,exc=0,exa=0,sfd=0,excd=0;

    printf("enter personal ID:");
    scanf("%d",&P);

    printf("enter row number and seat number:");
    scanf("%d%d",&R,&S);

    printf("\nenter study duration for session 1:");
    scanf("%d",&sd1);
    printf("enter study duration for session 2:");
    scanf("%d",&sd2);
    printf("enter study duration for session 3:");
    scanf("%d",&sd3);
    printf("enter study duration for session 4:");
    scanf("%d",&sd4);
    printf("enter study duration for session 5:");
    scanf("%d",&sd5);

    sum = sd1+sd2+sd3+sd4+sd5;

    T = 20 + 5 * ( (P+R+S) % 5);

    printf("\npersonal ID: %d",P);
    printf("personalised target:%d\n\n",T);

    printf("session 1: %d minutes - ",sd1);
    if(sd1<T)
    {
        printf("below target by %d minutes\n",T-sd1);
        sf++; sfd = sfd + (T-sd1);
    }
    else if(sd1==T)
    {
        printf("target achived\n");
        exa++;
    }
    else
    {
        printf("above target by %d minutes\n",sd1-T);
        exc++; excd = excd + (sd1-T);
    }

    printf("session 2: %d minutes - ",sd2);
    if(sd2<T)
    {
        printf("below target by %d minutes\n",T-sd2);
        sf++; sfd = sfd + (T-sd2);
    }
    else if(sd2==T)
    {
        printf("target achived\n");
        exa++;
    }
    else
    {
        printf("above target by %d minutes\n",sd2-T);
        exc++; excd = excd + (sd2-T);
    }

    printf("session 3: %d minutes - ",sd3);
    if(sd3<T)
    {
        printf("below target by %d minutes\n",T-sd3);
        sf++; sfd = sfd + (T-sd3);
    }
    else if(sd3==T)
    {
        printf("target achived\n");
        exa++;
    }
    else
    {
        printf("above target by %d minutes\n",sd3-T);
        exc++; excd = excd + (sd3-T);
    }

    printf("session 4: %d minutes - ",sd4);
    if(sd4<T)
    {
        printf("below target by %d minutes\n",T-sd4);
        sf++; sfd = sfd + (T-sd4);
    }
    else if(sd4==T)
    {
        printf("target achived\n");
        exa++;
    }
    else
    {
        printf("above target by %d minutes\n",sd4-T);
        exc++; excd = excd + (sd4-T);
    }

    printf("session 5: %d minutes - ",sd5);
    if(sd5<T)
    {
        printf("below target by %d minutes\n",T-sd5);
        sf++; sfd = sfd + (T-sd5);
    }
    else if(sd5==T)
    {
        printf("target achived\n");
        exa++;
    }
    else
    {
        printf("above target by %d minutes\n",sd5-T);
        exc++; excd = excd + (sd5-T);
    }
    
    printf("\nTotal study duration: %d\n",sum);
    printf("total shortfall: %d\n",sfd);
    printf("total excess: %d\n",excd);

    printf("sessions exactly achieving target: %d\n",exa);
    printf("sessions meeting or exceeding target: %d\n",exc +exa);
    
    return 0;

}*/
/*#define max 100

int main()
{
    printf("%d", max);
    max = 200; // This line will cause a compilation error because max is defined as a macro and cannot be reassigned.
    printf("\n%d", max);
    return 0;
}*///for checking the max out of all inputs 
/*int main()
{
    int n;
    printf("enter the number of entries:");
    scanf("%d",&n);

    int num[n],max;

    scanf("%d",&num[0]);
    max=num[0];

    for(int i=1;i<n;i++)
    {
        scanf("%d",&num[i]);

        if(num[i] > max)
        {
            max=num[i];
        }        
    }

    printf("maximum out of all entries:%d",max);

    return 0;
}*/
/*int main()
{
    unsigned int i;
    int a=10,b=9;
    i=a-b;
    printf("%u",i);
    return 0;
}*/
/*int mod(int a)
{
    if(a>0)
    {
        return a;
    }
    else
    {
        return -a;
    }
};

int main()
{
    int a=10,b=9;
    int i=b-a;
    printf("%d",mod(i));
    return 0;
}*/


/*int main()
{
    int matrix[5][5];
    int rowjump,columnjump;

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(matrix[i][j] == 1)
            {
                rowjump = mod(i-2);
                columnjump = mod(j-2);
            }
        }
    }

    printf("%d",rowjump+columnjump);
    return 0;
}*/
/*int main()
{
    int num[5];
    scanf("%4d",num);
    
    for(int i=0;i<5;i++)
    {
        printf("%d\n",num[i]);
    }
    return 0;
}*///printing the table of squares
/*int main()
{
    int n;
    printf("the number of entries (table of squares):");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        printf("%d\t%d\n",i,i*i);        
    }

    return 0;
}*///suming a series of numbers
/*int main()
{
    int n,sum=0;

    printf("enter intigers (0 to terminate):");
    scanf("%d",&n);

    while(n!=0)
    {
        sum=sum+n;
        scanf("%d",&n);        
    }
    printf("the sum is %d",sum);
    return 0;
}*///counting the number of digits in an intiger
/*int main()
{
    int n,count=0;
    printf("enter an intiger:");
    scanf("%d",&n);
    if(n==0)
    {
        count=1;
    }
    else
    {
        while(n!=0)
        {
            n= (n/10);
            count++;
        }
    }
    printf("the number of digits in n is %d",count);
    return 0;
}*///printing the required table
/*int main()
{
    int n;
    printf("enter the table you required:");
    scanf("%d",&n);

    for(int i=1;i<=10;i++)
    {
        printf("%d * %d = %d\n",n,i,n*i);        
    }

    return 0;
}*/ // swaping three numbers without using a fourth variable
/*int main()
{
    int a,b,c;
    printf("enter any three numbers:");
    scanf("%d%d%d",&a,&b,&c);

    printf("before swaping a=%d b=%d c=%d\n",a,b,c);

    a=a+b+c;
    c=a-b-c;  // c=a
    b=a-c-b;  //b=c
    a=a-b-c;   //a=b

    printf("after swaping a=%d b=%d c=%d",a,b,c);
    return 0;
}*/// finding whether a number is prime or not
/*int main()
{
    int num,prime=1;
    printf("enter a positive intiger:");
    scanf("%d",&num);

    if (num==2)
    {
        prime=1;
    }
    
    for(int i=2;i<num;i++)
    {
        if( num%i == 0)
        {
            prime=0;
            break;
        }
    }

    if(prime==1)
    {
        printf("%d is a prime number",num);        
    }
    else
    {
        printf("%d is not a prime number",num);
    }
    return 0;   

}*/
/*int main()
{
    int n=0;

    while(n<10)
    {
        if(n==3)
        {
            n++;
            continue;
            
        }
        printf("%d\n",n);
        n++;
    }
    return 0;
}*/// finding the sum of digits of a number
/*int main()
{
    int n,c,sum=0;
    printf("enter a positive intiger:");
    scanf("%d",&n);

    while(n>0)
    {
        c= n%10;
        n= n/10;
        sum= sum+c;        
    }

    printf("the sum of the digits of entered intiger is %d",sum);
    return 0;
}*/ //finding GCD of two numbers 
/*int main()
{
    int a,b,c,found=0;
    printf("enter the values of a,b:");
    scanf("%d,%d",&a,&b);

    if(a<b) // for getting format a>b
    {
        c=a;
        a=b;
        b=c;
    }

    while(found == 0)
    {
        c=a%b;
        if(c==0)
        {
            found=1;
            break;
        }
        else
        {
            a=b;
            b=c;
        }
    }

    if(c==0 && found == 1)
    {
        printf("GCD of the entered numbers:%d",b);
    }
    
    return 0;
}*/
/*int main()
{
    printf("hello iit bhu");
    return 0;
}*/
int main()
{
    int n,factorial=1;
    printf("enter the value of n:");
    scanf("%d",&n);

    for(int i=2;i<=n;i++)
    {
        factorial*=i;
    }
    printf("the factorial of %d is %d",n,factorial);
    return 0;
}