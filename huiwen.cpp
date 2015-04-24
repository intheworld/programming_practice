#include <stdio.h>
#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <math.h>
#include <stdlib.h>
#define INF 99999999

using namespace std;
int dp[1010][1010];
char buffer[1010];

int main(int argc, char* argv[])
{
	//freopen("input.txt", "r", stdin);
	int TC, C, len;
	int i, j, k;
    cin>>TC;
    for( C = 1; C <= TC; C++)
    {
        scanf("%s", buffer);
        len = strlen(buffer);
        memset(dp, 0, sizeof(dp));
        for(i = 0; i<len; i++)
            dp[i][i] = 1;
        for(i=1; i < len; i++) {
            for(j = 0; j+i < len; j++) {
                dp[j][j+i] += dp[j][j+i-1] + 1;
                for(k = j; k < j + i; k++) {
                    if(buffer[k]==buffer[j+i])
                        dp[j][j+i] += dp[k+1][j+i-1] + 1;
                }
                dp[j][j+i] %= 100007;
            }
        }

        cout<<"Case #"<<C<<": "<<dp[0][len-1]<<endl;
    }
	return 0;
}

