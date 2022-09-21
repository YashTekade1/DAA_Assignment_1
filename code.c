#include <stdio.h>

int main()
{
    int n,b;
    printf("Size of array: ");
    scanf("%d",&n);
    int a[2][n];
    printf("Enter the array elements separated by space :");
    for(int i=0;i<n;i++){
        scanf("%d %d",&a[0][i],&a[1][i]);
    }
    while(b!=3){   
      printf("Press: 1 to sort using first value \n       2 to sort using 2nd value \n       3 to exit \n       : ");
      scanf("%d",&b);
      if(b==1){
        for(int i=1; i<n;i++){
            int k=a[0][i];
            int m=a[1][i];
            int j=i-1;
            
            
            while(k<a[0][j] && j>=0){
                a[0][j+1]=a[0][j];
                a[1][j+1]=a[1][j];
                --j;
            }
            a[0][j+1]=k;
            a[1][j+1]=m;
        }
      }
      if(b==2){
        for(int i=1; i<n;i++){
            int k=a[0][i];
            int m=a[1][i];
            int j=i-1;
            
            
            while(m<a[1][j] && j>=0){
                a[0][j+1]=a[0][j];
                a[1][j+1]=a[1][j];
                --j;
            }
            a[0][j+1]=k;
            a[1][j+1]=m;
        }
      }
    
    
    
     for(int i=0;i<n;i++){
        printf("%d,%d\n",a[0][i],a[1][i]);
     }
 }
 printf("thank you for testing the code :)");
}
