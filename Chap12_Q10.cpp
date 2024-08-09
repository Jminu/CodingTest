#include <string>
#include <vector>

using namespace std;

int M; //key
int N; //locker
int Size;//new map size
int Point;

vector<vector<int>> MAP;

void makeMap(vector<vector<int>> lock) {
    int lockX = 0;
    int lockY = 0;
    for(int i = M - 1; i < Size - (M - 1); i++) {
        for(int j = M - 1; j < Size - (M - 1); j++) {
            MAP[i][j] = lock[lockX][lockY];
            if(MAP[i][j] == 0) {
                Point++;
            }
            lockY++;
        }
        lockY = 0;
        lockX++;
    }
}

int checkKey(int lockX, int lockY, vector<vector<int>> key) {
    int keyX = 0;
    int keyY = 0;
    int Check = 0;
    for(int x = lockX; x < lockX + M; x++) {
        for(int y = lockY; y < lockY + M; y++) {
            if(MAP[x][y] == 1 && key[keyX][keyY] == 1)
                return -1;
            if(MAP[x][y] == 0 && key[keyX][keyY] == 0)
                return -1;
            if(MAP[x][y] == 0 && key[keyX][keyY] == 1)
                Check++;
            keyY++;
        }
        keyY = 0;
        keyX++;
    }
    return Check;
}

void rotateKey(vector<vector<int>> &key) {
    vector<vector<int>> temp = key;
    for(int i = 0; i < M; i++) {
        for(int j = 0; j < M; j++) {
            temp[i][j] = key[M - 1- j][i];
        }
    }
    key = temp;
}

bool moveMap(vector<vector<int>> key) {
    for(int rotate = 0; rotate < 4; rotate++) {
        for(int i = 0; i < M + N - 1; i++) {
            for(int j = 0; j < M + N - 1; j++) {
                int Result = checkKey(i, j, key);
                if(Result == Point)
                    return true;
            }
        }
        rotateKey(key);
    }
    return false;
}

bool solution(vector<vector<int>> key, vector<vector<int>> lock) {
    bool answer = true;
    M = key.size();
    N = lock.size();
    Size = N + 2 * (M - 1);
    MAP.resize(Size, vector<int>(Size, 2));
    makeMap(lock);

    answer = moveMap(key);
    return answer;
}