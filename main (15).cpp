//Chrisin Jacob
//CSCI 377: Shortest Path Assignment

#include <bits/stdc++.h>
using namespace std;

int x = INT_MAX;
char y[10000] = {'0'};
class Map {
        int num;
        list <char> *z;
        void printPaths (char, char, bool[], char[], int&);
        void printShortestPath();
  
        public:
        Map(int num);
        void side(char a, char num);
        void printPaths(char b, char c);
    };
  
Map::Map (int num) {
        this->num = num;
        z = new list <char> [num];
    }
   
void Map::side (char a, char num){
      z [int(a -'A')].push_back(num);
    }

void Map::printPaths(char b, char c){
    //cout<<"Hello";
        bool *visited = new bool [num];
        char *path = new char [num];
    //char *shortest = new char[num];
        int path_index = 0;
        for (int i = 0; i < num; i++)
            visited[i] = false;

        printPaths (b, c, visited, path, path_index);
        printShortestPath();
    }   

void Map::printShortestPath(){
    cout << "The Shortest path is: " << endl;
    for (int i=0; i<x; i++){
            cout << y[i] << " ";  //shortest[i]='0';
        }
    cout << endl << "The length of the shortest path is: "<< x << endl;  //x = INT_MIN;
}

void Map::printPaths (char a, char c, bool visited[], char path[], int &path_index){
        visited[int(a-'A')] = true;
        path[path_index] = a;
        path_index++;
        if (a == c){
            if(path_index < x){
                x = path_index;
                for (int i = 0; i < path_index; i++){
                            cout << path[i] << " ";
                            y[i] = path[i];
                        }
                            cout << endl;
                      }
            else {
                for (int i = 0; i < path_index; i++)
                    cout << path[i] << " "; 
                    cout << endl;
                
            }
            
        }
        else {
            list <char> ::iterator i;
            for (i = z[int(a-'A')].begin(); i != z[int(a -'A')].end(); ++i)
                if (!visited[int(*i-'A')])
                     printPaths(*i, c, visited, path, path_index);
        }
        path_index--;
        visited[int(a-'A')] = false;
    }
  
int main() {
    Map m(8);
    m.side('A', 'B');
    m.side('A', 'E');
    m.side('B', 'C');
    m.side('C', 'D');
    m.side('D', 'F');
    m.side('F', 'G');
    m.side('E', 'G');
    m.side('G', 'H');

    char b,c;
    cout << endl << "Please enter the first node:";
    cin >> b;
    cout << endl << "Please enter the second node:";
    cin >> c; 
    cout << "Conclusion: The different paths from " << b <<" to " << c << endl;
    m.printPaths(b, c);
 
return 0;
}


