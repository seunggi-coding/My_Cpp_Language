#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n, m;
int s, e;
vector<vector<int>> adjArray;
vector<int> inDeg;
queue<int> q;
vector<int> A;

void AddEdge(int start, int end) {
	adjArray[start].push_back(end);
}

void topologicalSort1() {
	for (int i = 1; i <= n; i++)
		if (inDeg[i] == 0)
			q.push(i);

	for (int i = 1; i <= n; i++) {
		int u = q.front();
		q.pop();
		A.push_back(u);
		for (int j = 0; j < adjArray[u].size(); j++) {
			int v = adjArray[u][j];
			inDeg[v]--;
			if (inDeg[v] == 0)
				q.push(v);
		}
	}
}

int main() {
	cin >> n >> m;
	adjArray.resize(n + 1);
	inDeg.resize(n + 1, 0);

	for (int i = 0; i < m; i++) {
		cin >> s >> e;
		AddEdge(s, e);
		inDeg[e]++;
	}

	topologicalSort1();

	for (int i = 0; i < A.size(); i++)
		cout << A[i] << " ";
}