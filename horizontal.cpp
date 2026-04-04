#include <bits/stdc++.h>
#include <thread>
#include <chrono>
using namespace std;

void clear_screen() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

int main(){
    // 縦-----------------------------------
    int height = 0;
    cout << "height?";
    cin >> height;

    
    int width = (2*height) - 2;

    // いったん描画をクリア
    clear_screen();

    // 表示用の配列の初期化
    vector<vector<char>> output;

    // 構成
    for (int y = 0; y < height; y++){
        output.push_back(vector<char>{});
        int now_point = 0;

        // 一つ目
        for (int iy = 0; iy < y; iy++){
            output.at(y).push_back(' ');
            now_point++;
        }

        output.at(y).push_back('#');
        now_point++;

        // 一つ目を含めた二つ目との間隔
        int s = 2*(height -y +1) -5;

        // 二つ目
        if(y != 0 && y != height-1){
            for(int is = 0; is < s; is++){
                output.at(y).push_back(' ');
                now_point++;
            }
            output.at(y).push_back('#');
            now_point++;
        }
        

        // 最後余った領域に空白
        for(int iLy = 0; iLy < (width -now_point); iLy++){
            output.at(y).push_back(' ');
        }

    }
    
    while(true){
        
        // 表示を初期化
        clear_screen();

        // 先頭を最後に移動
        for (int iy = 0; iy < height; iy++){
            output.at(iy).push_back(output.at(iy).at(0));
            output.at(iy).erase(output.at(iy).begin());
        }

        for (int i = 0; i < output.size(); i++) {
            for (int j = 0; j < output[i].size(); j++) {
                cout << output[i][j];
                
            }
            cout << endl; // 行ごとに改行
        }
        this_thread::sleep_for(chrono::milliseconds(50));
    }


}