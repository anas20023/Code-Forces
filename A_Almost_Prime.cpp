////////////////              ANAS IBN BELAL            /////////////////
//                      Test Case Less Template                       ||
//                                                                    ||
//                                                                    ||
//      BANGLADESH  UNIVERSITY OF BUSINESS AND TECHNOLOGY             ||
//                          INTAKE 52                                 ||
//                      DEPARTMENT OF CSE                             ||
//                                                                    ||
//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#define Qtpie 2 * acos(0.0)
using namespace std;

void Fast_io()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
const int N = 3001;
vector<bool> pf(N, true);
vector<int> primes;

void sieve()
{
    pf[0] = pf[1] = false;
    for (int i = 2; i < N; i++)
    {
        if (pf[i])
        {
            primes.push_back(i);
            for (int j = i * i; j < N; j += i)
            {
                pf[j] = false;
            }
        }
    }
}

int main()
{
    Fast_io();
    int x, cnt = 0;
    cin >> x;
    sieve();
    for (int i = 1; i <= x; i++)
    {
        int factors = 0;
        for (int prime : primes)
        {
            if (prime > i)
                break;
            if (i % prime == 0)
            {
                factors++;
            }
        }
        if (factors == 2)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
