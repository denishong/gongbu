/*baekjoon 11866 queue*/
#include <iostream>
#include <deque>

using namespace std;
deque<int> q;
#define MAX 100 

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);


	int i=0,j=0;
	int N; // N명 
	int K; //K번째 제거 
    int dt[MAX];
    int count = 0; //최종 거리 
    int dist = 0; //temporary distance 
    int temp =0;
    cin >> N;
    cin >> K;

    for(i =1; i <= N; i++ ){
        q.push_back(i);
    }

    for(i =0; i < K; i++ ){
        cin >> dt[i];
    }

    for ( i=0; i < K; i++ ){

        dist = 0;
        cout << "i: " << i << endl;
        if(dt[i] == q.front() ){
            cout << q.front() << " ";
            if(!q.empty()){  q.pop_front(); }
        }else{
            //pop front로 거리 측정 
            while( dt[i] != q.front() ) {
                cout << "q.front(): " << q.front() << endl;
                q.push_back(q.front());
                q.pop_front();
                dist++;
            }
            cout << "dist: " << dist << endl;
            temp = dist;
            // 원복  
            while( dist !=0 ) {
                cout << "q.back(): " << q.back() << endl;
                q.push_front(q.back());
                q.pop_back();
                dist--;
            }

            if ( temp > q.size()/2 )  {
                cout << "dt[i] : " << dt[i] << endl;
                while( dt[i] != q.back() ) {
                    cout << "q.back(): " << q.back() << endl;
                    q.push_front(q.back());
                    q.pop_back();
                    count++;
                    cout << "count : " << count << endl;
                }
                q.pop_back();
                 count++;
            }else if (temp <= q.size()/2){
                cout << "dt[i] : " << dt[i] << endl;
                while( dt[i] != q.front() ) {
                    cout << "q.front(): " << q.front() << endl;
                    q.push_back(q.front());
                    q.pop_front();
                    count++;
                    cout << "count : " << count << endl;
                }
                cout << "pop out from front: " << q.front() << endl;
                q.pop_front();

            }

        }
    }

    cout << endl << count << endl;

    return 0;
}