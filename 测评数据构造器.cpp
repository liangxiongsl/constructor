#include<bits/stdc++.h>
#define TEST_NUM 5
#define int long long

void solve(std::fstream &cin, std::fstream &cout) {
	// paste solution here
	int a,b;
	cin>>a>>b;
	cout<<a+b<<'\n';
	
//	std::cout<<a<<' '<<b<<'\n';
//	std::cout<<a+b<<'\n';
}

namespace TOOL{
	std::mt19937 rnd(time(0));
	std::mt19937_64 rnd64(time(0));
	std::uniform_int_distribution<int> s(0, 1e3);
	std::uniform_int_distribution<int> m(0, 1e5);
	std::uniform_int_distribution<int> b(0, 1e9);
	std::uniform_int_distribution<int> bb(0, 1e18);
	#define S s(rnd)
	#define M m(rnd)
	#define B b(rnd)
	#define BB bb(rnd)
	
	
	void read(std::fstream &cout) {
		// override here
		cout<<BB<<' '<<BB<<'\n';
		
		
	}
	void read() {
		for(int i=1; i<=TEST_NUM; i++) {
			std::fstream cout("./" + std::to_string(i) + ".in", std::ios::out);
			read(cout);
			cout.close();
		}
	}
	void write() {
		for(int i=1; i<=TEST_NUM; i++) {
			std::fstream cin("./" + std::to_string(i) + ".in", std::ios::in);
			std::fstream cout("./" + std::to_string(i) + ".out", std::ios::out);
			solve(cin, cout);
			cin.close();
			cout.close();
		}
	}
}

signed main() {
	TOOL::read();
	TOOL::write();
}
