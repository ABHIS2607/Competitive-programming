/*ABHISHEK ()*/
#include<bits/stdc++.h>
using namespace std;

//---------------------------------------------------------Defined Macros-----------------------------------------------------------
#define fast_ip_op() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)












//---------------------------------------------------------------------------------------------------------------------

#ifndef FrostByte26                                    //this print function under debug only print vec of type int   
#define debug(x)  cerr<<#x <<" "; _print(x); cerr<<endl;//debug for simple variable and integer but cant used in vector
#else                                                  //simple var means int char string like this but not set vector
#define  debug(x)                                    
#endif
//------------------------------------------------- ERROR TEMPLATE------------------------------------------------------------------------------------------------------------------------
void _print(int a){cerr<<a;}
void _print(char a){cerr<<a;}
void _print(long long a){cerr<<a;}
void _print(string a){cerr<<a;}
void _print(bool a){cerr<<a;}
void _print(unsigned long long a){cerr<<a;}
void _print(double a){cerr<<a;}
void _print(long double a){cerr<<a;}
//--------------------------------------------------ERROR TEMPLATE-----------------------------------------------------------------------------------------------------------------------
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(const vector<pair<T, V>>& v);
template <class T> void _print(const vector<vector<T>>& v);           //functions declartions

template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.first); cerr << ","; _print(p.second); cerr << "}";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(const vector<pair<T, V>>& v) { cerr << "[ "; for (const auto& p : v) { _print(p); std::cerr << " ";} std::cerr << "]";}
template <class T>void _print(const vector<vector<T>>& v) {cerr << "[ ";for (const auto& row : v) {cerr << "[ ";for (const auto& element : row) {cerr << element << " ";}   cerr << "] ";}cerr << "]";}
//void _print(pbds v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
void solve()    
{  
  //lot of code
}
int main()
{  
#ifndef ONLINE_JUDGE
    freopen("Error.txt","w",stderr);
#endif
   fast_ip_op();
   solve();
   
   

   
}







