#include <stdio.h>
struct employes
{
    char name[20];
    int id;
    int exp;
    int salary;
};
int main()
{
    int i;
   struct employes s[5];
   for(i=0;i<5;i++)
   {
       printf("please enter name");
       scanf("%s",&s[i].name);
       printf(" enter id no\n");
       scanf("%d",&s[i].id);
       printf("\n enter experience\n");
       scanf("%d",&s[i].exp);
       printf("\n please enter salary\n");
       scanf("%d",&s[i].salary);
   }
   for(i=0;i<5;i++)
   {
   printf("%s \n",s[i].name);
       printf("%d \n",s[i].id);
       printf("%d \n",s[i].exp);
       printf("%d \n",s[i].salary);
       printf("\n");
   }
   return 0;
}
