    #include<stdio.h>
   int armstrong(int);
   int main()
   {
           int numb,sum,entr;
           
           printf("\n Give an Integer number: \n");
           scanf("%d",&numb);
           entr = numb;
           sum = armstrong(numb);
           if(sum == entr)
           printf("\n The Number %d is Armstrong ",entr);
           else
           printf("\n The Number %d is not Armstrong Number",entr);
    
    return 0;
   }

   int armstrong(int n)
   {
           int nr, digits=0, i, rem, s=0, m=1;
           nr=n;
           while(nr>0)
           {
           nr = nr / 10;
           digits +=1;
           }
           nr=n;
           while(nr!=0)
           {
           rem = nr % 10;
           nr = nr / 10;
           for(i=1;i<=digits;i++)
           {
           m = m*rem;
           }
           s +=m;
          m=1;
          }
          return(s);
         }