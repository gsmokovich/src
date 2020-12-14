#include <stdio.h>

#define STRLEN 80
#define NUMEMPLOYEES 2

typedef struct employee
{
    char *firstName;
    char *lastName;
    struct employee *managerPtr;
} Employee;

int main(void)
{
    Employee staff[NUMEMPLOYEES];
    staff[0].firstName = "Jane";
    staff[0].firstName = "Smith";
    staff[0].managerPtr = NULL;

    staff[1].firstName = "Mike";
    staff[1].lastName = "Jones";
    staff[1].managerPtr = &staff[0];

    for(int i = 0; i < NUMEMPLOYEES; i++)
    {
        if(staff[i].managerPtr == NULL)
        {
            printf("%s %s does not have a boss.\n", 
                staff[i].firstName, staff[i].lastName);
        }
        else
        {
            printf("The boss of %s %s is %s\n", 
                staff[i].firstName, staff[i].lastName,
                (staff[i].managerPtr) -> lastName);
        }
        
    }
    return 0;
}