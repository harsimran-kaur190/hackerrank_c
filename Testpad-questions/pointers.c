#include <stdio.h>
#include <limits.h>

void modify_elements(int *ptr,int n){
    for(int i=0;i<n;i++){
        *(ptr + i)=*(ptr + i)*2;
    }
}

int sum(int *ptr,int n){
    int sum=0;
    for(int i=0;i<n;i++){
        // sum+=*(ptr+i);
        sum+=(*ptr);
        ptr++;
    }
    return sum;
}

int findMax(int *arr, int n){
    int largest=*arr;
    for(int i=0;i<n;i++){
        if(*(arr+i)>largest){
            largest=*(arr+i);
        }
    }
    return largest;
}

void reverse(int *ptr,int n){
    int temp;
    for(int i=0;i<n/2;i++){
        temp=*(ptr+i);
        *(ptr+i)=*(ptr+n-1-i);
        *(ptr+n-1-i)=temp;
    }
}

void swap_alternate(int *ptr,int n){
    int i=0;
    while (i<n-1){
        int temp=0;
        temp=*(ptr+i);
        *(ptr+i)=*(ptr+i+1);
        *(ptr+i+1)=temp;
        i+=2;
    }
}

int countEven(int *arr, int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(*(arr+i)%2==0){
            count++;
        }
    }
    return count;
}

void copy_array(int *src, int *dest, int n){
    for(int i=0;i<n;i++){
        *(dest+i)=*(src+i);
    }
}

int second_Largest(int *ptr, int n){
    if(n<=1) return -1;
    int largest=INT_MIN;
    int second_largest=INT_MIN;
    for(int i=0;i<n;i++){
        if(*(ptr+i)>largest){
            int temp=largest;
            largest=*(ptr+i);
            second_largest=temp;
        }
        else if(*(ptr+i)>second_largest && *(ptr+i)<largest){
            second_largest=*(ptr+i);
        }
    }
    if(second_largest == largest) return -1;
    return second_largest;
}

void rotateByOne(int arr[],int n){
    int *ptr;
    ptr=arr;
    int temp=*(arr+n-1);
     for(int i = n - 1; i > 0; i--){
        *(ptr + i) = *(ptr + i - 1);  
    }
    *ptr = temp;
}

int * mergeArrays(int a[], int b[], int asize, int bsize) 
{
    int *final = (int*)malloc((asize + bsize) * sizeof(int));
    int index=0;
    for(int i=0;i<asize;i++){
        final[index]=a[i];
        index++;
    }
    for(int i=0;i<bsize;i++){
        final[index]=b[i];
        index++;
    }

    return final;
}

int main()
{
    int i, k, size = 0, size1 = 0, *final;
   
    scanf("%d", &size);
    int a[size];
    for( i = 0; i < size; i++) 
        scanf("%d", &a[i]);

    scanf("%d", &size1);
    int b[size1];
    for( i = 0; i < size1; i++) 
        scanf("%d", &b[i]);
     
    final = mergeArrays(a, b, size, size1);
    
    for (i = 0; i < (size + size1); i++) 
        printf("%d\n", final[i]);

  return 0;
}

// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     int a[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }


//     // rotateByOne(arr,n);

//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }

//     // int *ptr=arr;

//     // modify_elements(ptr,n);

//     // for(int i=0;i<n;i++){
//     //     printf("%d ",arr[i]);
//     // }

//     // printf("%d",sum(ptr,n));

//     // printf("%d ",findMax(ptr,n));

//     // reverse(ptr,n);

//     // for(int i=0;i<n;i++){
//     //     printf("%d ",arr[i]);
//     // }

//     // swap_alternate(ptr,n);
//     // for(int i=0;i<n;i++){
//     //     printf("%d ",arr[i]);
//     // }

//     // printf("%d",countEven(ptr,n));

//     // copy_array(ptr,a,n);
//     // for(int i=0;i<n;i++){
//     //     printf("%d ",a[i]);
//     // }

//     // printf("%d",second_Largest(ptr,n));
//     return 0;
// }