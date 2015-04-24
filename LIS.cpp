//最长递增子串的长度


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
int lis(int a[], int length) {
    int *b = new int[length];
    int res = 1;
    for(int i = 0; i < length; i++) {
        b[i] = 1;
        for(int j = 0; j < i; j++) {
            if(a[i] > a[j] )
                b[i] = max(b[i], b[j] + 1);
        }
        res = max(res, b[i]);
    }
    return res;
}

int main(int argc, char* argv[])
{
    freopen("input.txt", "r", stdin);
    int arr[100];
    int i = 0;
    while(cin>>arr[i++]);
    printf("%d\n", lis(arr, i-1));
    return 0;
}

