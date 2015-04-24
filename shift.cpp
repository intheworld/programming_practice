//实现数组循环右移，只使用一个辅助变量，O(n)复杂度
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
void shift(char a[], int n, int k) {
    k = k % n;
    int i;
    for(i=0;i<=(n-k)/2-1;i++) {
        //swap(a[i], a[n-k-1-i]);
        a[i] = a[i] + a[n-k-1-i];
        a[n-k-1-i] = a[i] - a[n-k-1-i];
        a[i] = a[i] - a[n-k-1-i];
    }
    for(i=n-k;i<=n-1-k/2; i++) {
        //swap(a[i],a[2*n-k-1-i]);
        a[i] = a[i] + a[2*n-k-1-i];
        a[2*n-k-1-i] = a[i]-a[2*n-k-1-i];
        a[i] = a[i] - a[2*n-k-1-i];

    }
    for(i=0;i<n/2;i++) {
        //swap(a[i],a[n-1-i]);
        a[i] = a[i] + a[n-1-i];
        a[n-1-i] = a[i] - a[n-1-i];
        a[i] = a[i] - a[n-1-i];
    }
    return;
}

int main(int argc, char* argv[])
{
    freopen("input.txt", "r", stdin);
    char arr[100];
    int s;
    cin>>s;
    int i = 0;
    while(cin>>arr[i++]);
    shift(arr, i-1, s);
    for(int j = 0; j < i-1; j++)
        printf("%c", arr[j]);
    cout<<endl;
    return 0;
}

