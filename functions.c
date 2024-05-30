#include <stdio.h>

int max(int x, int y) 
{
    return (x > y) ? x : y;
}

int max_of_four(int a, int b, int c, int d) 
{
    int max_ab = max(a, b);
    int max_cd = max(c, d);

    return max(max_ab, max_cd);
}

int main() 
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
