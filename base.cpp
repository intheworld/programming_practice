#include <stdio.h>
#include <map>
#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <stdlib.h>
#define INF 99999999

using namespace std;
vector<int> VX1, VY1;
vector<int> VX2, VY2;

long long cost1(long long i, long long j)
{
    long long ret = 0;
    for(int k = 0; k<VX1.size(); k++)
    {
        ret += pow(VX1[k]-i, 2) + pow(VY1[k] - j, 2);
    }
    return ret;
}
long long cost2(int i, int j)
{
    int ret = INF;
    for(int k = 0; k<VX2.size(); k++) {
        ret = min(ret, abs(VX2[k] - i) + abs(VY2[k] - j));
    }
    return ret;
}
int main(int argc, char* argv[])
{
	freopen("input.txt", "r", stdin);
	int TC,C;
	int N, M, A, B;
	int i, j;
	long long x1, y1, res;
	int deltax, deltay;
	int x0, y0;
    cin>>TC;
    for( C = 1; C <= TC; C++)
    {
        x1 = 0, y1 = 0;
        cin>>N>>M>>A>>B;
        for( i = 0; i<A; i++) {
            cin>>x0>>y0;
            VX1.push_back(x0),VY1.push_back(y0);
            x1 += x0, y1 += y0;
        }
        for( i = 0; i<B; i++) {
            cin>>x0>>y0;
            VX2.push_back(x0),VY2.push_back(y0);
        }
        x1 = x1/A, y1 = y1/A;
        res = cost1(x1, y1) + cost2(x1, y1);
        deltax = sqrt((N + M)/A) + 1;
        deltay = sqrt((N + M)/A) + 1;
        for( i = -deltax; i < deltax; i++) {
            for( j = -deltay; j < deltay; j++) {
                res = min(res, cost1(x1 + i, y1 + j) + cost2(x1 + i, y1 + j));
            }
        }
        cout<<"Case #"<<C<<": "<<res<<endl;
        VX1.clear();VY1.clear(),VX2.clear(), VY2.clear();
    }
	return 0;
}

