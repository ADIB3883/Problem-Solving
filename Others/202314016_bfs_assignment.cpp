#include <bits/stdc++.h>

using namespace std;
//#define numcity 6
string city[6]={"New York", "London", "Paris", "Tokyo", "Dubai", "Sydney"};

int numcities;
list<int>* adjLists;
list<int>* secadjLists;
bool *visited;
map<pair<int,int>,int>costs;

void initializeGraph(int cities) {
    numcities = cities;
    adjLists = new list<int>[cities];
    secadjLists = new list<int>[cities];
    visited = new bool[cities];
}

void adddEdge(int src, int dest) {
    secadjLists[src].push_back(dest);
    secadjLists[dest].push_back(src);
}

void addEdge(int src, int dest,int mon) {
    costs[{src,dest}]=mon;
    adjLists[src].push_back(dest);
    //adjLists[dest].push_back(src);
    adddEdge(src,dest);
}

//void addEdge(int src, int dest, int cost) {
//            adjlistwithcost[src].push_back({dest,cost});
//            adjlistwithcost[dest].push_back({src,cost});
//        }

/*void printGraph() {
    for (int i = 0; i < numcities; ++i) {
        cout << "City " << i << ":";
        for (list<int>::iterator it = adjLists[i].begin(); it != adjLists[i].end(); ++it)
            cout << " -> " << *it;
        cout << endl;
    }
}*/
void bfs_shortest_path(int start_city,int destination_city)
{

    //vector<int> distance(numcities, -1);
    queue<int> q;
    map<int,int>parent;

for (int i = 0; i < numcities; i++)
        visited[i] = false;

    visited[start_city] = true;
    q.push(start_city);
    parent[start_city]=-1;
    list<int>::iterator i;

    while (!q.empty()) {
        int currentcity = q.front();
        q.pop();
        //cout << currentcity << "->";
        for (i = adjLists[currentcity].begin(); i != adjLists[currentcity].end(); ++i) {
//                cout << i << " ";
//            //int adjacentcity = i;
            if (!visited[*i]) {
                    parent[*i]=currentcity;
                visited[*i] = true;
                q.push(*i);
            }
        }
    }
    //for(int i=0;i<6;i++) cout << parent[i] << " ";cout << endl;
    if(visited[destination_city]==false)
    {
        cout<<"No Path"<<endl;
    }
    else{
            stack<int>s;
           int  current=destination_city;
        while(current!=-1)
        {
            s.push(current);
            current=parent[current];
        }
        while(!s.empty())
        {
            cout<<city[s.top()]<<" ";
            s.pop();
        }
    }
}
void bfs_reachable_cities(int start_city,int max_flights)
{
      vector<int> distance(numcities, -1);
    queue<int> q;
    map<int,int>parent;

for (int i = 0; i < numcities; i++)
        visited[i] = false;

    visited[start_city] = true;
        distance[start_city] = 0;
    q.push(start_city);
    parent[start_city]=-1;
    list<int>::iterator i;

    while (!q.empty()) {
        int currentcity = q.front();
        q.pop();
        //cout << currentcity << "->";
        for (i = adjLists[currentcity].begin(); i != adjLists[currentcity].end(); ++i) {
//                cout << i << " ";
//            //int adjacentcity = i;
            if (!visited[*i]) {
                    parent[*i]=currentcity;
                visited[*i] = true;
                q.push(*i);
                distance[*i] = distance[currentcity] + 1;
            }
        }
    }

    //int maxDistance = 0;
    cout<<"Reachable cities are: "<<endl;
    for (int i = 0; i < numcities; ++i) {
        if (distance[i]!=0&& distance[i] <= max_flights) {
            cout<<city[i]<<" ";
        }
    }

}
void disconnected_city()
{


   //vector<int> distance(numcities, -1);
   int start_city=0;
    queue<int> q;

    map<int,int>parent;

for (int i = 0; i < numcities; i++)
        visited[i] = false;

    visited[start_city] = true;
    q.push(start_city);
    parent[start_city]=-1;
    list<int>::iterator i;

    while (!q.empty()) {
        int currentcity = q.front();
        q.pop();
        //cout << currentcity << "->";
        for (i = adjLists[currentcity].begin(); i != adjLists[currentcity].end(); ++i) {
//                cout << i << " ";
//            //int adjacentcity = i;
            if (!visited[*i]) {
                    parent[*i]=currentcity;
                visited[*i] = true;
                q.push(*i);
            }
        }
    }
    //for(int i=0;i<6;i++) cout << parent[i] << " ";cout << endl;
    int e=0;
for(int i=0;i<6;i++)
{

        if(visited[i]==false)
    {
        cout<<" A disconnected City: "<<city[i]<<endl;

    }
    else
    {
        e++;
    }
    if(e==6)cout<<"No Disconnected City"<<endl;
}
}
  vector<vector<int>>  bfs_all_routes(int start_city,int destination_city)
{

    vector<vector<int>> roads;
    queue<vector<int>> q;
    q.push({start_city});
    while (!q.empty())
    {
        vector<int> path;
        path = q.front();
        q.pop();
        if (destination_city == path.back())
        {
            roads.push_back(path);
        }
        for (auto x : adjLists[path.back()])
        {
            if (find(path.begin(), path.end(), x) == path.end())
            {
                vector<int> v;
                v =path;
                v.push_back(x);
                q.push(v);
            }
        }
    }
    return roads;
}

multi_source_path(vector<int>sources,int destination_city)
{
      stack <int>s;
      int min_level=1e9;
      for(int w:sources)
      {
          vector<int> distance(numcities, -1);
    queue<int> q;
    map<int,int>parent;

for (int i = 0; i < numcities; i++)
        visited[i] = false;

    visited[w] = true;
        distance[w] = 0;
    q.push(w);
    parent[w]=-1;
    list<int>::iterator i;

    while (!q.empty()) {
        int currentcity = q.front();
        q.pop();
        //cout << currentcity << "->";
        for (i = adjLists[currentcity].begin(); i != adjLists[currentcity].end(); ++i) {
//                cout << i << " ";
//            //int adjacentcity = i;
            if (!visited[*i]) {
                    parent[*i]=currentcity;
                visited[*i] = true;
                q.push(*i);
                distance[*i] = distance[currentcity] + 1;
            }
        }
    }


    if(visited[destination_city]==true && min_level>distance[destination_city])
    {
        while(!s.empty())
        {
            s.pop();
        }
        min_level=distance[destination_city];
        int current=destination_city;
        while(current!=-1)
        {
            s.push(current);
            current=parent[current];

        }
        while(!s.empty())
        {
            cout<<city[s.top()]<<" ";
            s.pop();
        }
        cout<<endl;
    }

      }


}
void  longest_simplepath(int start_city,int destination_city)
{
vector<int>longpath;
int max=0;
for(auto &route: bfs_all_routes(start_city,destination_city))
{
    if(route.size()>max)
    {
        max=route.size();
        longpath=route;
    }
}
for(int i=0;i<longpath.size();i++)
{
    cout<<city[longpath[i]]<<" ";
}
}
//void mins_stops_path()
//{
//
//}
void bfs_path_with_minimum_stops(int start_city,int destination_city)
{
      //vector<int> distance(numcities, -1);
    queue<int> q;
    map<int,int>parent;

for (int i = 0; i < numcities; i++)
        visited[i] = false;

    visited[start_city] = true;
    q.push(start_city);
    parent[start_city]=-1;
    list<int>::iterator i;

    while (!q.empty()) {
        int currentcity = q.front();
        q.pop();
        //cout << currentcity << "->";
        for (i = adjLists[currentcity].begin(); i != adjLists[currentcity].end(); ++i) {
//                cout << i << " ";
//            //int adjacentcity = i;
            if (!visited[*i]) {
                    parent[*i]=currentcity;
                visited[*i] = true;
                q.push(*i);
            }
        }
    }
    //for(int i=0;i<6;i++) cout << parent[i] << " ";cout << endl;
    if(visited[destination_city]==false)
    {
        cout<<"No Path"<<endl;
    }
    else{
            stack<int>s;
           int  current=destination_city;
        while(current!=-1)
        {
            s.push(current);
            current=parent[current];
        }
        while(!s.empty())
        {
            cout<<city[s.top()]<<" ";
            s.pop();
        }
    }

}
void path_through_cities(int start_city,int destination_city,int must_visit)
{
    vector<vector<int>>allpath = bfs_all_routes(start_city,destination_city);
    vector<vector<int>>res;
    for(vector<int> x:allpath)
    {
        for(int n:x)
        {
            if(n==must_visit)
            {
                res.push_back(x);
                break;
            }
        }
    }

    for(vector<int>x:res)
    {
        for(int n:x) cout << city[n] << " ";
        cout << endl;
    }
}
void bidirectional_bfs_shortest_path(int start_city,int destination_city)
{

 //vector<int> distance(numcities, -1);
    queue<int> q;
    map<int,int>parent;

for (int i = 0; i < numcities; i++)
        visited[i] = false;

    visited[start_city] = true;
    q.push(start_city);
    parent[start_city]=-1;
    list<int>::iterator i;

    while (!q.empty()) {
        int currentcity = q.front();
        q.pop();
        //cout << currentcity << "->";
        for (i = secadjLists[currentcity].begin(); i != secadjLists[currentcity].end(); ++i) {
//                cout << i << " ";
//            //int adjacentcity = i;
            if (!visited[*i]) {
                    parent[*i]=currentcity;
                visited[*i] = true;
                q.push(*i);
            }
        }
    }
    //for(int i=0;i<6;i++) cout << parent[i] << " ";cout << endl;
    if(visited[destination_city]==false)
    {
        cout<<"No Path"<<endl;
    }
    else{
            stack<int>s;
           int  current=destination_city;
        while(current!=-1)
        {
            s.push(current);
            current=parent[current];
        }
        while(!s.empty())
        {
            cout<<city[s.top()]<<" ";
            s.pop();
        }
    }
}
void  minimumcostpath(int start_city,int destination_city)
{
    vector<vector<int>>allpath = bfs_all_routes(start_city,destination_city);
    vector<int>res;
    int maximum = 1e9;
    for(vector<int>temp : allpath)
    {
        int cost = 0;
        for(int i=0;i<temp.size()-1;i++)
        {
            cost += costs[{start_city,destination_city}];
        }
        if(cost<maximum)
        {
            maximum=cost;
            res = temp;
        }
    }
    cout << "Minimum cost path ";
    for(int i:res)  cout << city[i]  << " ";
}


int main() {
    //cout<<"Equivalent code for cities:"<<endl<<"New York ->  0"<<endl<<"London ->  1"<<endl<<"Paris ->  2"<<endl<<"Tokyo ->  3"<<endl<<"Dubai ->  4"<<endl<<"Sydney ->  5"<<endl;
        cout<<"Equivalent Codes of City is:"<<endl;
    for(int i=0; i<6; i++){
        cout<<city[i]<<" = "<<i<<endl;
    }
    initializeGraph(6);
    addEdge(0,1,500);
    addEdge(1,2,300);
    addEdge(2,3,700);
    addEdge(3,4,400);
    addEdge(0,4,600);
    addEdge(4,5,800);
    while(1){
        cout<<"Options:"<<endl;
        cout<<"1. Shortest path"<<endl;
        cout<<"2. Reachable Cities:"<<endl;
        cout<<"3. Disconnected Cites:"<<endl;
        cout<<"4. All Route:"<<endl;
        cout<<"5. Multi-Source Shortest Path"<<endl;
        cout<<"6. Longest Simple Path"<<endl;
        cout<<"7. Path with Minimum Stops:"<<endl;
        cout<<"8. Path Through Specific Cities:"<<endl;
        cout<<"9. Bidirectional BFS for Shortest Path:"<<endl;
        cout<<"10. Flight Costs with BFS:"<<endl;
        cout<<"11. Exit"<<endl;
        int choice;
        cout<<"Enter option: ";
        cin>>choice;
        if(choice==1){
            int start, end;
            cout<<"Enter the code of start city:";
            cin>>start;
            cout<<"Enter the code of end city:";
            cin>>end;
            cout<<"the shortest path is:";
            bfs_shortest_path(start,end);
            cout<<endl;
        }
        if(choice==2){
            int start, maxflight;
            cout<<"Enter the code of start city:";
            cin>>start;
            cout<<"Enter max flight:";
            cin>>maxflight;
           bfs_reachable_cities(start,maxflight);
        }
        if(choice==3){
          disconnected_city();
       }
        if(choice==4){
            int start, end;
            cout<<"Enter the code of start city:";
            cin>>start;
            cout<<"Enter the code of end city:";
            cin>>end;
            vector<vector<int>> allpath= bfs_all_routes(start, end);
            cout<<"All route from "<<city[start]<< " to "<<city[end]<<endl;
            for(int i=0;i<allpath.size();i++)
            {
                for(int j=0;j<allpath[i].size();j++)
                {
                    cout<<city[allpath[i][j]]<<" ";
                }
                cout<<endl;
            }
       }
        if(choice==5){
            vector<int> sources;
            while(1){
                int start;
            cout<<"Enter the code of start city:";
            cin>>start;
            sources.push_back(start);
            cout<<"Add  more start city? y/n:";
            char c;
            cin>>c;
            if(c=='y'){
                continue;
            }
            else{
                break;
            }
            }
            int end;
            cout<<"Enter the code of end city:";
            cin>>end;
            cout<<"the routes are:";
            multi_source_path(sources,end);

       }
       if(choice==6){
           int start, end;
            cout<<"Enter the code of start city:";
            cin>>start;
           cout<<"Enter the code of end city:";
            cin>>end;
            longest_simplepath(start,end);
        }
       if(choice==7){
            int start, end;
           cout<<"Enter the code of start city:";
            cin>>start;
           cout<<"Enter the code of end city:";
            cin>>end;
            cout<<"the path with minimum stop is:"<<endl;
            bfs_shortest_path(start, end);
            cout<<endl;

        }
        if(choice==8){
            int start, end,must;
            cout<<"Enter the code of start city:";
            cin>>start;
           cout<<"Enter the code of end city:";
            cin>>end;
            cout<<"Enter the code of must visit city:";
            cin>>must;
            cout<<"Through "<<city[must]<<" the path is:   ";
            path_through_cities(start,end,must);
        }
        if(choice==9){
             int start, end;
            cout<<"Enter the code of start city:";
            cin>>start;
            cout<<"Enter the code of end city:";
            cin>>end;
             bidirectional_bfs_shortest_path(start,end);
        }
        if(choice==10){
             int start, end;
            cout<<"Enter the code of start city:";
            cin>>start;
            cout<<"Enter the code of end city:";
            cin>>end;
            minimumcostpath(start,end);

        if(choice==11){
            break;
        }
}
    }

 cout<<"*********END**********"<<endl;

    delete[] adjLists;
    delete[] visited;

    return 0;

}

