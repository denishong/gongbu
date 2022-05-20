/*[11055]가장 큰 증가 부분 수열*/
#include <bits/stdc++.h>
using namespace std;
#define MAXN ((int)1e6+10)
int N; 
int A[MAXN];
vector<int> v;
auto it = v.begin();
void InputData(){
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> A[i];
    }
}
void Solve(){
    v.push_back(A[0]);
    int sum=0;
    for(int i=1; i<N; i++){
        if(v.back() < A[i] ) v.push_back(A[i]);
        else {
            it = v.begin();
            it = lower_bound(v.begin(), v.end(), A[i]);
            *it = A[i];
        } 
    }
    for(int i=0; i<v.size(); i++) sum += v[i];
    cout << sum << endl;
}
int main(){
    InputData();
    Solve();
    return 0;
}
/*[11055]가장 큰 증가 부분 수열*/