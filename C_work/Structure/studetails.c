struct student
{
    char *name;
    int id;
    float hight;
}o;
 
  struct mark
   {
       int m1,m2,m3;
       float avg;
   }s;
  
int main()
{
   
   
    o.name="Elumalai";
    o.id=30;
    o.hight=5.2;
 
    printf("\nName        : %s",o.name);
    printf("\nAge         : %d",o.id);
    printf("\nPercent     : %f",o.hight);
    
   s.m1=80;
   s.m2=70;
   s.m3=60;
   s.avg=65.3;
   printf("\nMark-1        : %d",s.m1);
   printf("\nMark-2        : %d",s.m2);
   printf("\nMark-3        : %d",s.m3);
   return 0;
}
 
    
