#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a[100][100], cnt = 0, cnt2 = 0;
	for(int i = 1; i <= 5; i++){
		for(int j = 1; j <= 5; j++){
			cin >> a[i][j];
			if(a[i][j] == 1){
				cnt = i;
				cnt2 = j;
			}
		}
	}
	if(cnt == 3){
		cnt = 0;
	} else if(cnt == 5 || cnt == 1){
		cnt = 2;
	} else if(cnt == 2 || cnt == 4){
		cnt = 1;
	}
	if(cnt2 == 3){
		cnt2 = 0;
	} else if(cnt2 == 1 || cnt2 == 5){
		cnt2 = 2;
	} else if(cnt2 == 2 || cnt2 == 4){
		cnt2 = 1;
	}
	cout << cnt + cnt2;
	return 0;
}