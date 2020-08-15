#include <stdio.h>
#include <string.h>

int main()
{
    char str[]= "my_name_is_edcast_future_skills";
    char *brokenstr=strtok(str,"_");
    while(brokenstr!=NULL)
    {
        printf("%s\n",brokenstr);
        brokenstr=strtok(NULL,"_");
    }
    return 0;
}
