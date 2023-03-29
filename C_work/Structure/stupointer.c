struct student
{
    char *name;
    int id;
    float salary;
    char *destination;
};
int main()
{
 
    struct student emp={"Elumalai",25,12.5,"Engineer"};
    struct student *ptr=&emp;
 
    printf("\nName    : %s",(*ptr).name);
    printf("\n id     : %d",ptr->id);
    printf("\nsalary : %f",ptr->salary);
    printf("\nName    : %s",ptr->destination);
 
    return 0;
}
 