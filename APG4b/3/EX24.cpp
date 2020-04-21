#include <bits/stdc++.h>
using namespace std;

// 以下に、24時間表記の時計構造体 Clock を定義する

struct Clock {
  int hour;    // 0~23 : 時
  int minute;  // 0~59 : 分
  int second;  // 0~59 : 秒

  //     時・分・秒を表す3つの引数を受け取り、
  //     それぞれ、メンバ変数 hour, minute, second に代入する
  void set(int h, int m, int s) {
    hour = h;
    minute = m;
    second = s;
  }

  //     メンバ変数が表す時刻の文字列を返す
  //     時刻の文字列は次のフォーマット
  //     "HH:MM:SS"
  //     HH、MM、SSはそれぞれ時間、分、秒を2桁で表した文字列
  string to_str() {
    string h = to_string(hour);
    if (hour < 10) {
      h = '0' + h;
    }
    string m = to_string(minute);
    if (minute < 10) {
      m = '0' + m;
    }
    string s = to_string(second);
    if (second < 10) {
      s = '0' + s;
    }
    return h + ':' + m + ':' + s;
  }

  //     diff_second
  //     秒だけメンバ変数が表す時刻を変更する(ただし、日付やうるう秒は考えない)
  //     diff_second の値が負の場合、時刻を戻す
  //     diff_second の値が正の場合、時刻を進める
  //     diff_second の値は -86400 ~ 86400 の範囲を取とりうる
  void shift(int diff_second) {
    int diff_hour = diff_second / 3600;
    diff_second %= 3600;
    int diff_minute = diff_second / 60;
    diff_second %= 60;

    second += diff_second;
    if (second >= 60) {
      // 分へ繰り上げ
      minute += 1;
      second -= 60;
    } else if (second < 0) {
      // 分から繰り下げ
      minute -= 1;
      second += 60;
    }

    minute += diff_minute;
    if (minute >= 60) {
      // 時へ繰り上げ
      hour += 1;
      minute -= 60;
    } else if (minute < 0) {
      // 時から繰り下げ
      hour -= 1;
      minute += 60;
    }

    hour += diff_hour;
    if (hour >= 24) {
      hour -= 24;
    } else if (hour < 0) {
      hour += 24;
    }
  }
};

int main() {
  // 入力を受け取る
  int hour, minute, second;
  cin >> hour >> minute >> second;
  int diff_second;
  cin >> diff_second;

  // Clock構造体のオブジェクトを宣言
  Clock clock;

  // set関数を呼び出して時刻を設定する
  clock.set(hour, minute, second);

  // 時刻を出力
  cout << clock.to_str() << endl;

  // 時計を進める(戻す)
  clock.shift(diff_second);

  // 変更後の時刻を出力
  cout << clock.to_str() << endl;
}
