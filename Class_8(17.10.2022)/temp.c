#include <stdio.h>

int main()
{
    int a, b, c, d, l, s;
    printf("Enter four integers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    l = ((a > b) ? a : b) > ((c > d) ? c : d) ? ((a > b) ? a : b) : ((c > d) ? c : d); // largest
    s = ((a < b) ? a : b) < ((c < d) ? c : d) ? ((a < b) ? a : b) : ((c < d) ? c : d); // smallest

    printf("largest = %d , smallest = %d", l, s);
    return 0;
}
