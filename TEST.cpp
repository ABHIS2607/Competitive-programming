#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

//---------------------------------------------------------Defined Macros-----------------------------------------------------------
#define fast_ip_op() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define start1 auto start1_time = high_resolution_clock::now();
#define stop1  auto stop1_time = high_resolution_clock::now();

//------------------------------------------------- ERROR TEMPLATE------------------------------------------------------------
void _print(int a) { cerr << a; }
void _print(char a) { cerr << a; }
void _print(long long a) { cerr << a; }
void _print(string a) { cerr << a; }
void _print(bool a) { cerr << a; }
void _print(unsigned long long a) { cerr << a; }
void _print(double a) { cerr << a; }
void _print(long double a) { cerr << a; }
//-----------------------------------------------------------------------------------------------------------------------------
template <class T, class V> void _print(pair<T, V> p);
template <class T> void _print(vector<T> v);
template <class T> void _print(set<T> v);
template <class T, class V> void _print(map<T, V> v);
template <class T> void _print(multiset<T> v);
template <class T, class V> void _print(const vector<pair<T, V>>& v);
template <class T> void _print(const vector<vector<T>>& v);

template <class T> void _print(vector<T> v) { cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]"; }
template <class T, class V> void _print(pair<T, V> p) { cerr << "{"; _print(p.first); cerr << ","; _print(p.second); cerr << "}"; }
template <class T> void _print(set<T> v) { cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]"; }
template <class T> void _print(multiset<T> v) { cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]"; }
template <class T, class V> void _print(map<T, V> v) { cerr << "[ "; for (auto i : v) { _print(i); cerr << " "; } cerr << "]"; }
template <class T, class V> void _print(const vector<pair<T, V>>& v) { cerr << "[ "; for (const auto& p : v) { _print(p); cerr << " "; } cerr << "]"; }
template <class T> void _print(const vector<vector<T>>& v) { cerr << "[ "; for (const auto& row : v) { cerr << "[ "; for (const auto& element : row) { cerr << element << " "; } cerr << "] "; } cerr << "]"; }
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
//-------------------------------------------------------------------------------------------------------------------------------------------------
void solve()
{
}
int main()
{  
#ifndef FrostByte26
    freopen("Error.txt", "w", stderr);
#endif
    fast_ip_op();
    start1;
    solve();
    stop1;
    auto duration = duration_cast<microseconds>(stop1_time - start1_time);
#ifdef FrostByte26
    cerr<<"Time:"<< duration.count()/1000.0<<"ms"<<endl;
#endif
    return 0;
}
