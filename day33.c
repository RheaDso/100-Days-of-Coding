/*C program to Input New Time, 
Display the time and 
Update the time*/

#include<stdio.h>
struct time
{
    int hour, minute, second;
    
};
int main()
{
    struct time T;
    int c;
    printf("\n\tInstruction: ");
    printf("\n\t-----------");
    printf("\nEnter 1 to Input New Time.");
    printf("\nEnter 2 to Display the Time.");
    printf("\nEnter 3 to Update the Time.");
    scanf("%d", &c);
    switch(c)
    {
        case 1:
        {
            printf("Enter Hour: ");
            scanf("%d", &T.hour);
            printf("Enter minute: ");
            scanf("%d", &T.minute);
            printf("Enter seconds: ");
            scanf("%d",&T.second);
            
            printf("%d:%d:%d",T.hour, T.minute, T.second);
        }
        break;
        case 2:
        printf("%s",__TIME__);
        break;
         case 3:
        
         printf("Enter hour:");
         scanf("%d",&T.hour);
        
         printf("Enter minute:");
         scanf("%d",&T.minute);
         
         printf("Enter seconds:");
         scanf("%d",&T.second);
         ++T.second;
            if(T.second==60)
            {T.minute=T.minute+1;
                  {
                  if(T.minute=60)
                ++T.hour;
                  }
            }
         
         printf("%d:%d:%d",T.hour,T.minute,T.second);
         break;
    
    }
    return 0;
}