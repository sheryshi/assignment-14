// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int arr[2],sum=0;
//     int i;
//       printf("enter 10 no.");
//     for(i=0;i<2;i++)
//     {
      
//         scanf("%d",&arr[i]);
//         sum=sum+arr[i];
       
//     }
//     printf("%d",sum);
   
//     return 0;
// }

// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int arr[2],sum=0;
//     int i;
//       printf("enter 10 no.");
//     for(i=0;i<2;i++)
//     {
      
//         scanf("%d",&arr[i]);
//         sum=sum+arr[i];
       
//     }
//     printf("%d",sum/arr[i]);
   
//     return 0;
// }

// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int arr[10],sum=0,p=0,i;
//     printf("enter 10 no.");
//     for(i=0;i<10;i++)
//     {
        
//         scanf("%d",&arr[i]);
//         if(arr[i]%2==0)
//         {
//             sum=sum+arr[i];
//         }
//         else
//         {
//            p=p+arr[i];
//         }
//     }
//     printf(" sum of even no. is %d\n",sum);
//     printf(" sum of odd no. is %d\n",p);
//     return 0;
// }


// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int arr[10],max=0,i;
//     printf("enter 10 no.");
//     for(i=0;i<10;i++)
//     {

//         scanf("%d",&arr[i]);
//         if(arr[i]>max)
//         {
//            max=arr[i];
//         }
//     }
//     printf("%d",max);
//     return 0;
// }


// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int arr[10],min=999,i;
//     printf("enter 10 no.");
//     for(i=0;i<10;i++)
//     {

//         scanf("%d",&arr[i]);
//         if(arr[i]<min)
//         {
//            min=arr[i];
//         }
//     }
//     printf("%d",min);
//     return 0;
// }


// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int arr[10];
//     int temp,i,n;
// printf("enter 10 no.");
// for(i=0;i<=9;i++)
// scanf("%d",&arr[i]);
//     for(i=0;i<9;i++)
//     {
//         for(n=i+1;n<10;n++)
//         {
//             if(arr[i]>arr[n])
//             {
//             temp=arr[i];
//             arr[i]=arr[n];
//             arr[n]=temp;
//             }
           
//         }
//          printf("%d",arr[i]);
        
//     }
    


    
//     return 0;
// }


// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int arr[10];
//     int i,j,temp;
//     printf("enter 10 no.");
//     for(i=0;i<=9;i++)
//     scanf("%d",&arr[i]);
//     for(i=0;i<9;i++)
//     {
//         for(j=i+1;j<10;j++)
//         {
//             if(arr[i]<arr[j])
//             {
//                 temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
// printf("%d",arr[i]);
//     }
//     printf("second largest is %d",arr[1]);
//     return 0;
// }

// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int temp,i,j;
//     int arr[10];
//     printf("enter 10 no.");
//     for(i=0;i<=9;i++)
//     scanf("%d",&arr[i]);
//     for(i=0;i<9;i++)
//     {
//         for(j=i+1;j<10;j++)
//         {
//             if(arr[i<arr[j]])
//             {
//              temp=arr[i];
//              arr[i]=arr[j];
//              arr[j]=temp;
//             }
//         }
        
//     }
//      printf(" %d is second smallest no.",arr[8]);
//     return 0;
// }

// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int i,j,count=0;
//     int arr[10];
//     printf("enter 10 no.");
//     for(i=0;i<10;i++)
//     {
//         scanf("%d",&arr[i]);
        
//     }
//     for(i=10;i>=0;i--)
//     {
//         printf("%d\n",arr[i]);
//         count++;
//     }
//     printf("%d",count);
//     return 0;
// }

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int arr[10],prr[10],i;
    printf("enter 10 no.");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    for(i=0;i<10;i++)
    {
        prr[i]=arr[i];
        printf("%d",prr[i]);
    }
    return 0;
}
