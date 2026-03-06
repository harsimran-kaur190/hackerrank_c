#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int p,int q,int r,int s);
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
int max_of_four(int p,int q,int r,int s){
    int output=0;
    if(p>q && p>r && p>s){
        output=p;
    }else if(q>r && q>s){
        output=q;
    }else if(r>s){
        output=r;
    }else{
        output=s;
    }
    return output;
}
