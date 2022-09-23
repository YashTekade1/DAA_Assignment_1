# solution-for-sorting-the-array-in-which-each-element-is-defined-as-a-b-

## Name: Yash S. Tekade<br/> Roll No: 74<br> Section: A

### Aim
Implement the solution for sorting the array in which each element is defined as [a,b] for example [2,3].

Input: "1": Result: Sorted array: on value "a"

Input: "2": Result: Sorted array on value "b"<br/><br/>

### Approach
Using 2D array <br/><br/>

### Solution<br/>
1. input from user size of the array <br/>
2. initialize 2D array with 2 colums and n rows<br/>
3. input from user array elements <br/>
4. input from user sorting on column 1 or 2 <br/>
5. depending on input, applying insertion sort on 1st or 2nd column while also swapping the values of the other column<br/>
6. printing the array


## Code
``` 
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
```



## Output
```
Size of array: 5
Enter the array elements separated by space :5 1
4 2
3 3
2 4
1 5
Press: 1 to sort using first value 
       2 to sort using 2nd value 
       3 to exit 
       : 1
1,5
2,4
3,3
4,2
5,1
Press: 1 to sort using first value 
       2 to sort using 2nd value 
       3 to exit 
       : 2
5,1
4,2
3,3
2,4
1,5
Press: 1 to sort using first value 
       2 to sort using 2nd value 
       3 to exit 
       : 3
5,1
4,2
3,3
2,4
1,5
thank you for testing the code :)
```
