#include<bits/stdc++.h>
using namespace std;


class Node{
public:
	string name;
	list<string> nbrs;
	
	Node (string name){
		this->name =name;
	}
};

class Graph{
	unordered_map<string,Node*> m;
public:
	Graph(vector<string> cities){
		for(auto city:cities){
			m[city] = new Node(city);
		}
	}

	void addEdge(string x, string y, bool undir=false){
		m[x]-> nbrs.push_back(y);
		if(undir){
			m[y]-> nbrs.push_back(x);
		}
	}

	void printAdjList(){
		for(auto cityPair :m){
			auto city = cityPair.first;
			Node *node =cityPair.second;
			cout<<city<<"-->";	
			for(auto nbr : node->nbrs){
				cout<<nbr<<",";
			}

			cout<<endl; 
		}
	}
};

int main(){
	vector<string> cities = {"del", "london","Paris","Ny"};
	Graph g(cities);
	
	g.addEdge("del","london");
	g.addEdge("Ny","london");
	g.addEdge("del","Paris");
	g.addEdge("Paris","Ny");
	
	g.printAdjList();
	return 0;
}
