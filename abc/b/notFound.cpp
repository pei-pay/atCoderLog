// https://atcoder.jp/contests/abc071/tasks/abc071_b

#include <cstdio>

char S[101010];
int main() {
  // 与えられる文字列をchar型の配列にする
  scanf("%s", S);

  // アルファベット26個分のboolを配列でもつ
  bool app[26];
  // falseで初期化
  for(int i = 0; i < 26; i++) {
    app[i] = false;
  }
  // Sに含まれる文字のindex番目でapp[i]をtrueにする -> app[i]番目のアルファベットは含まれているという意味になる
  for(int i = 0; S[i] != '\0'; i++) {
    app[S[i] - 'a'] = true;
  }
  // appでfalseな値がある最初のindexをアルファベットに変化して出力
  for(int i = 0; i < 26; i++) {
    if(!app[i]) {
      printf("%c\n", (char)(i + 'a'));
			return 0;
    }
  }
  // 全部trueな場合は"None"を送る
  puts("None");
	return 0;
}