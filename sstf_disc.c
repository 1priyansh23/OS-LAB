#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>

int main()
{
   int n;
   printf("Enter the size of track: ");
   scanf("%d",&n);
   
   printf("Enter the track: ");
   int t[n];
   for(int i=0 ;i<n ;i++)
   {
       scanf("%d",&t[i]);
   }
   int head;
   printf("Enter the head: ");
   scanf("%d",&head);
   int count=0,seek_t=0;
   while(count!=n)
   {
       int d,min=INT_MAX,index;
       for(int i=0 ;i<n ;i++)
       {
           d = abs(t[i]-head);
           if(min>d)
           {
               min = d;
               index = i;
           }
       }
       seek_t += min;
       head = t[index];
       t[index] = INT_MAX;
       
       count++;
   }
   printf("Seek time is %d",seek_t);

    return 0;
}
