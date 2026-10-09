#include<stdio.h>
#include<math.h>
#include<string.h>

/*int main()
{
    int n,max1,max2,found=1;
    scanf("%d",&n);
    int arr[n];

    printf("enter %d intigers:\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    max1=arr[0];
    max2=arr[0];

    for(int i=0;i<n;i++)
    {
        if(arr[i] != arr[0])
        {
            found=0;
        }
    }

    if(found == 1)
    {
        printf("second largest element doesn't exist");
        return 0;
    }
    else
    {

    for(int i=0;i<n;i++)
    {
        if(arr[i] > max1)
        {
            max1=arr[i];
        }
    }//max1 determined


    for(int i=0;i<n;i++)
    {
        if(arr[i] > max2 && arr[i] != max1)
        {
            max2=arr[i];
        }
    }//max2 determined
    
    }

    printf("second largest = %d",max2);
    return 0;
}*///(k>n) ??
/*int main()
{
    int n,k;
    scanf("%d",&n);

    int arr[n];

    printf("enter %d intigers:\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    scanf("%d",&k);

    k = k%n;

    int temp[n];
    for(int i=0;i<n;i++)
    {
        temp[(i+k)%n] = arr[i];
    }

    for(int i=0;i<n;i++)
    {
        printf("%d ",temp[i]);
    }
    return 0;
}*/
/*int main()
{
    int n;
    int abavg=0,run=0,bestrun=0,daymax;
    
    scanf("%d",&n);

    float rain[n],total=0.0,avg;

    printf("enter the rain mesurements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%f",&rain[i]);
        total+=rain[i];
    }
    
    avg = total/n;

    float max;
    max = rain[0];

    for(int i=0;i<n;i++)
    {
        if(rain[i] > max)
        {
            max = rain[i];
            daymax = i+1;
        }
    }

    for(int i=0;i<n;i++)
    {
        if(rain[i] > avg)
        {
            abavg++;
        }
    }
    //*****
    for(int i=0;i<n;i++)
    {
        if(rain[i] >= 5.0)
        {
            run=0;
        }
        else
        {
            run++;
        }

        if(run > bestrun)
        {
            bestrun=run;
        }
    }

    printf("\ntotal rainfall: %f\n",total);
    printf("average rainfall: %f\n",avg);
    printf("maximum rainfall: %f\n",max);
    printf("maximum rainfall day: %d\n",daymax);
    printf("days above average = %d\n",abavg);
    printf("longest dry period = %d",bestrun);
    return 0;
}*/
int main()
{
    int arr[3][3],count1,count2;

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    //checking in rows
    for(int i=0;i<3;i++)
    {
        count1=0,count2=0;
        for(int j=0;j<3;j++)
        {
            if(arr[i][j]==1)
            {
                count1++;
            }
            if(arr[i][j]==2)
            {
                count2++;
            }
        }
        if(count1==3)
        {
            printf("\nX wins");
            return 0;
        }
        if(count2==3)
        {
            printf("\nO wins");
            return 0;
        }        
    }

    //checking in columns
    for(int i=0;i<3;i++)
    {
        count1=0,count2=0;
        for(int j=0;j<3;j++)
        {
            if(arr[j][i]==1)
            {
                count1++;
            }
            if(arr[j][i]==2)
            {
                count2++;
            }
        }
        if(count1==3)
        {
            printf("\nX wins");
            return 0;
        }
        if(count2==3)
        {
            printf("\nO wins");
            return 0;
        }        
    }

    //checking in diagnols
    count1=0,count2=0;
    for(int i=0;i<3;i++)
    {
        
        if(arr[i][i] == 1)
        {
            count1++;
        }
        if(arr[i][i] == 2)
        {
            count2++;
        }        
    }  

    
}
