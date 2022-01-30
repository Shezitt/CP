#include<bits/stdc++.h>
using namespace std;

bool exists(vector<vector<pair<char,bool>>>& guess, char c){
	for(auto& i : guess){
		for(auto& j : i){
			if(j.first == c && !j.second){
				j.second = 1;
				return 1;
			}
		}
	}
	return 0;
}

int main(){
	vector<vector<pair<char,bool>>> correct(3, vector<pair<char,bool>>(3)), guess(3, vector<pair<char,bool>>(3));
	for(int i=0; i<3; ++i){
		for(int j=0; j<3; ++j){
			cin >> correct[i][j].first;
		}
	}
	for(int i=0; i<3; ++i){
		for(int j=0; j<3; ++j){
			cin >> guess[i][j].first;
		}
	}
	
	int green = 0, yellow = 0;
	for(int i=0; i<3; ++i){
		for(int j=0; j<3; ++j){
			if(guess[i][j].first == correct[i][j].first){
				green++;
				guess[i][j].second = correct[i][j].second = 1;
				continue;
			}
		}
	}
	for(int i=0; i<3; ++i){
		for(int j=0; j<3; ++j){
			if(!correct[i][j].second && exists(guess, correct[i][j].first)){
				yellow++;
			}
		}
	}
	cout << green << '\n' << yellow << '\n';
}
