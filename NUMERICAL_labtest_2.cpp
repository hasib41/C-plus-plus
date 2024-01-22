//6 7 11 15 17 21 23 29 29 37 39
//29 21 29 14 21 15 7 7 13 0 3
//input:number of point
//output:a0,a1 and straight line equation y=mx+c,st,estimate error(sr),corelation(r)

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout << "Enter The Number Of Points : ";
    cin >> n;
    float point[n][2];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Point " << i + 1 << " : ";
        cin >> point[i][0] >> point[i][1];
    }
    float sumX = 0, sumY = 0, sumXY = 0, sumX2 = 0, sumXW2 = 0;
    for (int i = 0; i < n; i++)
    {
        sumX += point[i][0];
        sumY += point[i][1];
        sumXY += point[i][0] * point[i][1];
        sumX2 += point[i][0] * point[i][0];
        sumXW2 = sumX * sumX;
    }

float a1=(n* sumXY-(sumX*sumY))/(n*sumX2-sumXW2);

    float a1 = (n * sumXY - (sumX * sumY)) / (n * sumX2 - sumXW2);
    float avgX = 0, avgY = 0;
    avgX = sumX / n;
    avgY = sumY / n;
    float a0 = avgY - (a1 * avgX);
    float SR = 0;
    for (int i = 0; i < n; i++)
    {
        SR += pow(point[i][1] - a0 - a1 * point[i][0], 2);
    }
    float er = SR / (n - 2);
    float error = sqrt(er);
    cout << "The Value Of A0 Is " << a0 << endl
         << "The Value Of A1 Is " << a1 << endl
         << "The Value Of Error Is " << error << endl;
}