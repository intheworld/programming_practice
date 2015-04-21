#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <algorithm>
using namespace std;
int func(char * a, int len) {
    int i, j, k, ans, flag = 1;
    i = 0;j = 1, ans=0;
    if(len == 1)
        return 1;
    while(j < len) {
        for(k = i; k <j; k++) {
            if(a[k]==a[j]) {
                ans = max(ans, j-i);
                i = k + 1;
                break;
            }
        }
        j++;
    }
    ans = max(ans, j-i);
    return ans;
}

int main(int argc, char* argv[])
{
    freopen("input.txt", "r", stdin);
    char str[100];
    scanf("%s", str);
    printf("%d\n", func(str, strlen(str)));
    return 0;
}
