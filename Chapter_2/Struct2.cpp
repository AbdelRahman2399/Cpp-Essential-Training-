#include <cstdio>

struct Employee{
    int id;
    const char * name;
    const char * role;
};

int main(){
    Employee joe = {42,"Joe","Boss"};
    Employee * j = &joe;
    printf("%s is the %s, id:  %d \n", joe.name,joe.role,joe.id);
    printf("%s is the %s, id:  %d \n", j->name,j->role,j->id);
}