#include <stdio.h>

int main() 
{
	
    int a[100],n,i,first, second;

    printf("Enter size of array");
    scanf("%d", &n);
    
    for (i = 0; i < n; i++) {
    	printf("a[%d] = ",i);
        scanf("%d", &a[i]);
    }
    
    if (a[0] > a[1]) {   
        first = a[0];
        second = a[1];
    }else{
        first =a[1];
        second=a[0];
		}
		
    printf("second largest number is  = ");
    
    for(i = 2; i < n; i++) {
        if (a[i] > second){
        	second = first;
        	first = a[i];
	    }
        else if(second<a[i]){
            second=a[i];
        } 
    }
    printf("%d",second);
}
