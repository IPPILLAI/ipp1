#include <conio.h> 
#include <stdio.h> 
int main()
 {
 int lnth=0,row,clm,i,j,a[],b[],n=20,m=20;
 for(int i=0;i<n;i++)
 scanf("%d",&a[i]);
 for(int j=0;j<m;j++)
 scanf("%d",&b[j]);
 for (int i = 0; i <= m; i++)
 { 
        for (int j = 0; j <= n; j++) 
        { 
            if (i == 0 || j == 0) 
               lnth = 0; 
  
            else if (a[i - 1] ==b[j - 1]) 
            { 
                lnth = lnth + 1; 
                if (len < m)
                {
                    row = i; 
                    col = j; 
                } 
            }
        }
  } 
 for(int i=0;i<lnth;i++)
 printf("%d",&a[i]);
}    
