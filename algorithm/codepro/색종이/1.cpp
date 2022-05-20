#include <bits/stdc++.h>
using namespace std;

int N;//도화지 크기
char A[10 + 2][10 + 2];//도화지 색정보
void InputData(){
  cin >> N;
  for(int i=0; i<N; i++)
    cin >> A[i];
}
int Solve(){
  int minr, minc, maxr,maxc, maxcnt = 0;
  int check[12][12] = {0};
  for(int i = '1'; i <= '9'; i++){
    //i번씩 상하좌우 찾기
    minr = minc = 10;
    maxr = maxc = 0;

    for(int r = 0; r < N; r++){
      for(int c = 0; c < N; c++){
        if (A[r][c] != i) continue;
        if (minr > r) minr = r;
        if (maxr < r) maxr = r;
        if (minc > c) minc = c;
        if (maxc < c) maxc = c;
      }
    }
    if(minr == 10) continue; //해당색 없음
    //i번색 영역에 칠해진 다른 색 찾아 표시하기
      for(int r = minr; r <= maxr; r++){
        for(int c = minc; c <= maxc; c++){
            check[r][c]++;
        }
      }
    }
    for(int r = 0; r< N; r++){
      for(int c = 0; c< N; c++){
        if( check[r][c] > maxcnt) maxcnt = check[r][c];
      }
    }
  return maxcnt;
}
int main(){
  InputData();
  cout << Solve() << endl;
  return 0;
}
