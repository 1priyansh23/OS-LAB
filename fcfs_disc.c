#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   int n;
   printf("Enter the size of track: ");
   scanf("%d",&n);
   printf("Enter the tracks: ");
   int d[n];
   for(int i=0 ;i<n ;i++)
   {
       scanf("%d",&d[i]);
   }
   int head;
   printf("Enter the head: ");
   scanf("%d",&head);
   int seek_time = abs(head-d[0]);
    for(int i=1 ;i<n ;i++)
    {
        seek_time += abs(d[i]-d[i-1]);
    }
    printf("Seek time is %d",seek_time);
    return 0;
}
