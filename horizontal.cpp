#include <bits/stdc++.h>
#include <thread>
#include <chrono>
using namespace std;

int main(){
    // 縦-----------------------------------
    int height = 0;
    cout << "height";
    cin >> height;

    if (height % 2 == 0){
        system("cls");
        cin >> height;
    }
    
    int width = (2*height) - 1;

    system("cls");


    // 表示用の配列の初期化
    vector<vector<char>> output;

    // 構成
    for (int y = 0; y < height; y++){
        output.push_back(vector<char>{});

        for (int iy = 0; iy < y; iy++){
            output.at(y).push_back(' ');
        }
        
        output.at(y).push_back('#');

        
        int p = (width-y)/(2*(height-y+1));
        int s = (2*(height-y+1))-1;

        for (int ip = 0; ip < p; ip++){
            for(int is = 0; is < s; is++){
                output.at(y).push_back(' ');  
            }
            output.at(y).push_back('#');
        }

    }

    for (int i = 0; i < output.size(); i++) {
        for (int j = 0; j < output[i].size(); j++) {
            cout << output[i][j];
            cout << ",";
        }
        cout << endl; // 行ごとに改行
    }


    /*// 時間管理用
    int time = 0;
    
    while(true){
        
        // 表示を初期化
        system("cls");

        // 先頭を最後に移動
        for (int ih = 0; ih < height; ih++){
            grid[ih].push_back(grid[ih][0]);
            grid[ih].erase(grid[ih].begin());
        }



        // 時間の調節
        time++;
        this_thread::sleep_for(chrono::milliseconds(200));
    }*/


}