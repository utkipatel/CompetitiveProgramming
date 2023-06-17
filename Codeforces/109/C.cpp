#include<bits/stdc++.h>

typedef long long ll;

using namespace std;


bool isLucky(int x) {
    while(x>0) {
        if(x%10!=4 && x%10!=7) return false;
        x/=10;
    }
    return true;
}

int dsfind(int v, vector<int> &parents) {
    if(v==parents[v]) return v;
    parents[v] = dsfind(parents[v], parents);
    return parents[v];
}

void dsunion(int u,int v, vector<int> &parents, vector<int> &ranks) {
    int pu = dsfind(u, parents);
    int pv = dsfind(v, parents);
    if(pu==pv) return;
    int ru = ranks[pu];
    int rv = ranks[pv];
    if(rv>ru) {
        parents[pu] = pv;
        ranks[pv]+=ranks[pu];
    } else {
        parents[pv] = pu;
        ranks[pu]+=ranks[pv];
    }
}


int main() {
    
    return 0;
}

