/*[baekjoon][2667]단지번호붙이기*/
#include <bits/stdc++.h>
using namespace std;

#define MAXN 25
int N,house,cnt;
char Map[MAXN+10][MAXN+10];
int visited[MAXN+10][MAXN+10];
int sol[MAXN*MAXN];
int dy[]={-1,1,0,0};
int dx[]={0,0,1,-1};
bool isInside(int a, int b){
	return ((a>=1) && (a<=N) && (b>=1) && (b<=N));}

void InputData(){
	cin >> N;
	for(int i=1; i<=N; i++){
		cin >> &Map[i][1];
	}
}
bool comp(int a, int b) {return a < b;}
void OutputData(){
	sort(sol, sol+cnt, comp);
	cout << cnt << endl;
	for(int i=0; i<cnt; i++){
		cout << sol[i] << endl;
	}
}
void DFS(int y, int x){
	if(Map[y][x] != '1') return;
	Map[y][x] = '0';
	house++;

	for(int i=0; i<4; i++){
		DFS(y+dy[i], x+dx[i]);
	}
}
void BFS(int y, int x){
	int ny, nx;
	house++;
	queue <pair<int,int>> q;
	q.push(pair<int,int>(y,x));
	//Map[y][x] = '0';
	visited[y][x]=1;

	while(!q.empty()){
		y=q.front().first;
		x=q.front().second;
		q.pop();	
		for(int i=0; i<4; i++){
			ny=y+dy[i];
			nx=x+dx[i];
			if( isInside(ny, nx) && Map[ny][nx] =='1' && visited[ny][nx]==0 ){
				house++;
				q.push(pair<int,int>(ny,nx));
				//Map[ny][nx]='0';
				visited[ny][nx]=1;
			}
		}

	}

}
void Solve(){
	visited[0][0]=1;
	for(int i=1; i<=N; i++){
		for(int j=1; j<=N; j++){
			if(Map[i][j] =='1' && visited[i][j]==0){ 
				house=0;
				//DFS(i,j);
				BFS(i,j);
				sol[cnt++]=house;
			}
		}
	}
}
int main(){
	InputData();
	Solve();
	OutputData();
	return 0;
}
/*[baekjoon][2667]단지번호붙이기*/
