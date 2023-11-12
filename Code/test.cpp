#include <bits/stdc++.h>
#include <cstdint>

using namespace std;

using ll = long long;
using ull = unsigned long long;
using ld = long double;

//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
//typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> indexed_set; // set
//typedef tree<pair<int, int>, null_type, less<pair<int, int>, rb_tree_tag, tree_order_statistics_node_update> indexed_set; // multiset  {element, time}
// order_of_key(k)      find_by_order(k)

#define FAST_IO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define fi first
#define se second
#define nl "\n"
#define as " "
#define rep(i, l, r) for(ll i=l;i<r;++i)

#define sum(a)     ( accumulate ((a).begin(), (a).end(), 0ll))
#define mine(a)    (*min_element((a).begin(), (a).end()))
#define maxe(a)    (*max_element((a).begin(), (a).end()))
#define mini(a)    ( min_element((a).begin(), (a).end()) - (a).begin())
#define maxi(a)    ( max_element((a).begin(), (a).end()) - (a).begin())
#define maxij(a, i, j)    ( max_element((a).begin()+i, (a).begin()+j+1) - (a).begin())
#define lowb(a, x) ( lower_bound((a).begin(), (a).end(), (x)) - (a).begin())
#define uppb(a, x) ( upper_bound((a).begin(), (a).end(), (x)) - (a).begin())
#define sz(a)      (int)((a).size())
#define rs(a, n)   ((a).resize(n))
#define ms(a, val)     ( memset((a), val, sz(a))

//debugging
#ifndef ONLINE_JUDGE
#define dg(x) cerr << #x << "\t"; _print(x); cerr << endl;
#define dg2(x, y) cerr << #x << "\t"; _print(x); cerr << "\t|\t" << #y << "\t"; _print(y); cerr << endl;
#define dg3(x, y, z) cerr << #x << "\t"; _print(x); cerr << "\t|\t" << #y << "\t"; _print(y); cerr << "\t|\t" << #z << "\t"; _print(z); cerr << endl;
#define dg4(x, y, z, w) cerr << #x << "\t"; _print(x); cerr << "\t|\t" << #y << "\t"; _print(y); cerr << "\t|\t" << #z << "\t"; _print(z); cerr << "\t|\t" << #w << "\t"; _print(w); cerr << endl;
#define dgsq(x) { cerr << #x << "\n"; for(int i=0;i<sz(x);++i) {_print(i); _print(x[i]); cerr << "\n";} }
#else
#define dg(x)
#define dg2(x, y)
#define dg3(x, y, z)
#define dg4(x, y, z, w)
#define dgsq(x)
#endif

void _print(int x){cerr << x;}
void _print(float x){cerr << x;}
void _print(double x){cerr << x;}
void _print(string x){cerr << x;}
void _print(ll x){cerr << x;}
void _print(ull x){cerr << x;}
void _print(char x){cerr << x;}
void _print(bool x){cerr << x;}
template<class T,class V>void _print(pair<T,V> x){cerr << "[";_print(x.fi);cerr << " ";_print(x.se);cerr << "]";}
template<class T,class V>void _print(unordered_map<T,V> x){cerr << "[ ";for(auto i: x){_print(i);cerr << " ";}cerr << "]";}
template<class T> void _print(set<T> x){cerr << "[ ";for(T i: x){_print(i);cerr << " ";}cerr << "]";}
template<class T> void _print(multiset<T> x){cerr << "[ ";for(T i: x){_print(i);cerr << " ";}cerr << "]";}
template<class T> void _print(priority_queue<T, vector<T>, greater<T>> x){cerr << "[ ";while(!x.empty()){_print(x.top());cerr << " ";x.pop();}cerr << "]";}
template<class T> void _print(priority_queue<T> x){cerr << "[ ";while(!x.empty()){_print(x.top());cerr << " ";x.pop();}cerr << "]";}
template<class T> void _print(queue<T> x){cerr << "[ ";while(!x.empty()){_print(x.front());cerr << " ";x.pop();}cerr << "]";}
template<class T> void _print(stack<T> x){cerr << "[ ";while(!x.empty()){_print(x.top());cerr << " ";x.pop();}cerr << "]";}
template<class T> void _print(deque<T> x){cerr << "[ ";for(T i: x){_print(i);cerr << " ";}cerr << "]";}
template<class T> void _print(vector<T> x){cerr << "[ ";rep(i, 1, x.size()+1){cerr << "(" << i-1 << ")";_print((T)x[i-1]);cerr << " ";}cerr << "]";}

typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<string> vs;
typedef vector<bool> vb;
typedef pair<int, int> pii;
typedef pair<int, bool> pib;
typedef pair<string, int> psi;
typedef pair<string, string> pss;
typedef vector<pii> vpii;
typedef vector<psi> vpsi;
typedef vector<pss> vpss;

// Vector
template<typename T>            istream& operator>>(istream& is,  vector<T> &v){for (auto& i : v) is >> i;        return is;}
template<typename T>            ostream& operator<<(ostream& os,  vector<T>  v){for (auto& i : v) os << i << ' '; return os;}
// Pair
template<typename T,typename U>          istream& operator>>(istream& is, pair<T, U> &p){is >> p.first >> p.second;        return is;}
template<typename T,typename U>          ostream& operator<<(ostream& os, pair<T, U>  p){os << p.first << ' ' << p.second; return os;}
//Vector + Pair
template<typename T,typename U>          istream& operator>>(istream& is, vector<pair<T,U>> &p){for(auto &i:p){is >> i.fi >> i.se;}return is;}
template<typename T,typename U>          ostream& operator<<(ostream& os, vector<pair<T,U>> &p){for(auto &i:p){os << i.fi << " " << i.se << endl;}return os;}
template <typename T>pair<T, bool> getNthElement(set<T>& searchSet,int index){pair<T, bool> result;if (searchSet.size() > index) {result.first= *(std::next(searchSet.begin(),index));result.second = true;}else result.second = false;return result;}
//Set
template<typename T>            istream& operator>>(istream& is,  set<T> &v){for (auto& i : v) is >> i;        return is;}
template<typename T>            ostream& operator<<(ostream& os,  set<T>  v){for (auto& i : v) os << i << ' '; return os;}

const ll mod = 7+1e9;
const int N = 1+1e6;
double pi = 3.1415926535;

// Modulus-Mathematics
template<typename T,typename U>            ll modMul(T a, U b, ll MOD=mod){return ((a%mod)*1LL*(b%mod))%MOD;}
template<typename T,typename U>            ll binpower(T n, U k, ll MOD=mod){T res=1;  while(k){   if(k & 1){res=modMul(res, n, MOD);}  n=modMul(n, n, MOD); k >>= 1;}   return res%MOD;}
template<typename T>              T moduloInverse(T a, ll MOD=mod){return binpower(a, MOD-2);}
template<typename T,typename U>            ll modAdd(T a, U b, ll MOD=mod){return ((a%MOD)+(b%MOD))%MOD;}
template<typename T,typename U>            ll modSub(T a, U b, ll MOD=mod){return ((a%MOD)-(b%MOD)+MOD)%MOD;}
template<typename T,typename U>            ll modDiv(T a, U b, ll MOD=mod){return modMul(a, moduloInverse(b, MOD), MOD);}

int num_colours; // number of colours
vs states; // vector to store all the states
map<string, vs> Mp; // map to store the edges
map<string, int> color; // map to store the color of each state
vs colouringScheme;
vi color_used(100, 0);
map<string, string> codeToStateName; // map to store the code to state name
int global_count = 0;
string AlgoName = "";
map<string, int> in; // number of neighbouring coloured states for each state


void generate_script(int color_algo_no=1){
    string filename=AlgoName+"/"+to_string(color_algo_no)+"/"+to_string(num_colours)+"/"+"Scripts/"+to_string(global_count++)+".txt";
    cout << filename << endl;
    freopen(filename.c_str(),"w",stderr);

    cerr << "{\"groups\":{";
    bool firstColor=true;
    rep(i, 0, num_colours+1){
        set<string> temp;
        for(auto j: states){
            if(color[j]==i){
                temp.insert(j);
            }
        }
        if(temp.size()){
            if(!firstColor) cerr << ","; 
            firstColor=false;
            cerr << "\"" << colouringScheme[i] << "\":";
            cerr << "{\"label\":\"\",\"paths\":[";
            bool first=true;
            for(auto j: temp){
                if(!first) cerr << ",";
                first=false;
                cerr << "\"" << codeToStateName[j] << "\"";
            }
            cerr << "]}";
        }
    }
    cerr << "},\"title\":\"\",\"hidden\":[\"Jammu_and_Kashmir\",\"Ladakh\"],\"background\":\"#fff\",\"borders\":\"#000\",\"legendFont\":\"Century Gothic\",\"legendFontColor\":\"#000\",\"legendBgColor\":\"#00000000\",\"legendWidth\":150,\"areBordersShown\":true,\"defaultColor\":\"#ffffff\",\"labelsColor\":\"#6a0707\",\"strokeWidth\":\"medium\",\"areLabelsShown\":false,\"legendPosition\":\"custom\",\"legendX\":\"686.52\",\"legendY\":\"295.07\",\"legendSize\":\"custom\",\"legendScale\":0.8156215850802891,\"legendStatus\":\"hide\",\"scalingPatterns\":true,\"legendRowsSameColor\":true,\"legendColumnCount\":1}" << endl;
    fclose(stderr);
}

vector<int> getColors(int color_algo_no, set<int> used, int num_colors){
    vector<int> ans;
    if(color_algo_no==1){
        rep(i, 1, num_colors+1){
            if(used.find(i)==used.end()){
                ans.pb(i);
            }
        }
    }else if(color_algo_no==2){
        rep(i, 1, num_colors+1){
            if(used.find(i)==used.end()){
                ans.pb(i);
            }
        }
        random_shuffle(all(ans));
    }else if(color_algo_no==3){
        set<pii> temp;
        rep(i, 1, num_colors+1){
            if(used.find(i)==used.end()){
                temp.insert({color_used[i], i});
            }
        }
        for(auto i: temp){
            ans.pb(i.se);
        }
    }
    return ans;
}

bool DFS(string state, int color_algo_no=1){
    if(color[state]!=0) return true;

    set<int> used;
    for(auto i: Mp[state]){
        if(color[i]!=0) used.insert(color[i]);
    }

    bool done=false;
    vector<int> Colors = getColors(color_algo_no, used, num_colours);
    if(Colors.size()==0) return false;

    for(auto i: Colors){
        // cout << state << " -> " << i << endl;
        color[state]=i;
        color_used[i]++;
        generate_script(color_algo_no);
        done=true;
        for(auto j: Mp[state]){
            if(color[j]==0){
                if(!DFS(j, color_algo_no)){
                    done=false;
                    color_used[i]--;
                    break;
                }
            }
        }
        if(done) return true;
    }
    color[state]=0; // backtrack
    generate_script(color_algo_no);
    return false;

}

void Algo1(int color_algo_no=1, int temp=4){
    for(auto i: states){
        color[i]=0;
    }
    
    num_colours = temp;
    global_count=1;
    AlgoName = "Algo1";

    bool done=true;
    for(auto i: states){
        if(color[i]==0){
            done&=DFS(i, color_algo_no);
        }
        if(!done) break;
    }
    if(done){
        cout << "Colored Map: " << endl;
        for(auto i: states){
            cout << i << " -> " << color[i] << endl;
        }
        // generate_script();
    }else{
        cout << "Not Possible" << endl;
    }

}

void run_Algo1(){
    rep(i, 1, 4){ // Color picking algo
        rep(j, 1, 6){ // Number of colors
            Algo1(i, j);
        }
    }
}

vector<string> getStates(){
    vector<string> ans;
    priority_queue<pair<int, string>> temp;
    for(auto i: states){
        if(color[i]==0 && in[i]>0)
            temp.push({in[i], i});
    }
    if(temp.size()==0) return ans;
    int val = temp.top().fi;
    while(temp.size() && temp.top().fi==val){
        ans.pb(temp.top().se);
        temp.pop();
    }
    return ans;
}

bool DFS2(string state, int color_algo_no=1){
    if(color[state]!=0) return true;

    set<int> used;
    for(auto i: Mp[state]){
        if(color[i]!=0) used.insert(color[i]);
    }

    bool done=false;
    vector<int> Colors = getColors(color_algo_no, used, num_colours);
    if(Colors.size()==0) return false;

    for(auto i: Colors){
        cout << state << " -> " << i << endl;
        color[state]=i;
        color_used[i]++;
        generate_script(color_algo_no);
        for(auto j: Mp[state]){
            in[j]++;
        }
        vector<string> States = getStates();
        if(States.size()==0) return true;
        for(auto j: States){
            if(color[j]==0){
                if(DFS2(j, color_algo_no)){
                    return true;
                }
            }
        }
        color_used[i]--;
    }
    color[state]=0; // backtrack
    generate_script(color_algo_no);
    for(auto j: Mp[state]){
        in[j]--;
    }
    return false;

}

void Algo2(int color_algo_no=1, int temp=4){
    for(auto i: states){
        color[i]=0;
        in[i]=0;
    }
    
    num_colours = temp;
    global_count=1;
    AlgoName = "Algo2";

    bool done=true;
    for(auto i: states){
        if(color[i]==0){
            done&=DFS2(i, color_algo_no);
        }
        if(!done) break;
    }
    if(done){
        cout << "Colored Map: " << endl;
        for(auto i: states){
            cout << i << " -> " << color[i] << endl;
        }
        // generate_script();
    }else{
        cout << "Not Possible" << endl;
    }

}

void run_Algo2(){
    rep(i, 1, 4){ // Color picking algo
        rep(j, 1, 6){ // Number of colors
            Algo2(i, j);
        }
    }
}

void solve(){
    string filename="input.txt";

    // Generating Map
    freopen(filename.c_str(),"r",stdin);

    int n; cin >> n;
    string s;
    rep(i, 0, n){
        cin >> s;
        states.pb(s);
    }

    int m; cin >> m;
    rep(i, 0, m){
        string a, b;
        cin >> a >> b;
        Mp[a].pb(b);
        Mp[b].pb(a);
    }
    fclose(stdin);

    // Printing Map
    int cnt=0;
    for(auto i: Mp){
        cout << i.fi << " -> ";
        for(auto j: i.se){
            cout << j << " ";
            cnt++;
        }
        cout << endl;
    }
    cout << cnt << endl;

    // colouring the graph
    for(auto i: states){
        color[i]=0;
    }

    // run_Algo1();    


    // run_Algo2();
    Algo1(2, 5);
}

void initialise() {
    colouringScheme.pb("#f7fcfd");
    colouringScheme.pb("#cab2d6");
    colouringScheme.pb("#bd3200");
    colouringScheme.pb("#fdae61");
    colouringScheme.pb("#bd0026");

    codeToStateName["AN"] = "Andaman_and_Nicobar_Islands";
    codeToStateName["AP"] = "Andhra_Pradesh";
    codeToStateName["AR"] = "Arunachal_Pradesh";
    codeToStateName["AS"] = "Assam";
    codeToStateName["BR"] = "Bihar";
    codeToStateName["CG"] = "Chhattisgarh";
    codeToStateName["CH"] = "Chandigarh";
    codeToStateName["DL"] = "Delhi";
    codeToStateName["DN"] = "Dadra_and_Nagar_Haveli_and_Daman_and_Diu";
    codeToStateName["GA"] = "Goa";
    codeToStateName["GJ"] = "Gujarat";
    codeToStateName["HP"] = "Himachal_Pradesh";
    codeToStateName["HR"] = "Haryana";
    codeToStateName["JH"] = "Jharkhand";
    codeToStateName["JK"] = "Jammu_and_Kashmir_disp";
    codeToStateName["KA"] = "Karnataka";
    codeToStateName["KL"] = "Kerala";
    codeToStateName["LA"] = "Ladakh_disp";
    codeToStateName["LD"] = "Lakshadweep";
    codeToStateName["MH"] = "Maharashtra";
    codeToStateName["ML"] = "Meghalaya";
    codeToStateName["MN"] = "Manipur";
    codeToStateName["MP"] = "Madhya_Pradesh";
    codeToStateName["MZ"] = "Mizoram";
    codeToStateName["NL"] = "Nagaland";
    codeToStateName["OD"] = "Odisha";
    codeToStateName["PB"] = "Punjab";
    codeToStateName["PY"] = "Puducherry";
    codeToStateName["RJ"] = "Rajasthan";
    codeToStateName["SK"] = "Sikkim";
    codeToStateName["TN"] = "Tamil_Nadu";
    codeToStateName["TR"] = "Tripura";
    codeToStateName["TS"] = "Telangana";
    codeToStateName["UK"] = "Uttarakhand";
    codeToStateName["UP"] = "Uttar_Pradesh";
    codeToStateName["WB"] = "West_Bengal";


}

int main() {
    FAST_IO;

    cout << fixed << setprecision(7);
    cerr << fixed << setprecision(7);
    srand(time(0));

    int t=1;
    // cin >> t;
    initialise();
    rep(i, 1, t+1){
        dg(i)
//        cout << "Case #" << i << ": ";
        solve();
    }

    return 0;
}

