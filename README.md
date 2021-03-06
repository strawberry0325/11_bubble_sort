# バブルソート

# 進め方
## はじめてのとき
* [GitHub](https://github.com/)のアカウントを作成してください
* [Travis CI](https://travis-ci.com/) のアカウントを作成してください
* GitHubのアカウントを[こちらのフォーム](https://goo.gl/forms/anAdoxqPKVt8sJGZ2)から教えてください。
## 毎回の進め方
* このリポジトリをforkしてください
* Travis CI を設定して、自動ビルドが通るようにしてください
   * Travis CI のGitHubアカウントでの登録とforkしたリポジトリをTravisCI側で許可する
   * 参考サイト：[Travis CIで自動テストして、結果をGitHubのトップページに表示する](https://qiita.com/hoshimado/items/4090d8e64beb8a7f95e1)
* forkしたリポジトリの README.md ファイルの「t-kougei-game-comp-2019」の部分を自分のGitHubアカウント名に差し替えてください(2箇所)
* 問題を解いて、テストを通るようにしてください。
* fork 元の master ブランチにプルリクエストを投げてください

# テスト結果

[![Build Status](https://travis-ci.com/strawberry0325/11_bubble_sort.svg?branch=master)](https://travis-ci.com/strawberry0325/11_bubble_sort)

# 今回の問題

バブルソートの勉強です。

入力される数字群をバブルソートで整列してください。

input?.txt ファイルを標準入力として読み込んで、標準出力の結果を output?.txt ファイルと一致するか比較するテストをします。

main.c ファイルだけを書き換えて下さい。

## 入力される値
入力は以下のフォーマットで与えられます。
~~~
n
n
n
~~~

nは数字です。

## 期待する出力

全ての入力を読み込んだ後、入力順に空白で区切って出力してください。
その後、バブルソートを先頭から確定させてください。

ソート時に並び変えが発生したら、並び替え後の数字の列を空白区切りで表示してください。

最後は改行し、余計な文字、空行を含んではいけません。

## 条件
すべてのテストケースで数字は以下の条件を満たします。
* 0 <= n <= 100

入力される行数は100行以内とします。

## 入力例1
~~~
3
2
1
~~~

## 出力例1
~~~
3 2 1
3 1 2
1 3 2
1 2 3
~~~

## 入力例2
~~~
9
8
7
6
5
4
3
2
1
~~~

## 出力例2
~~~
9 8 7 6 5 4 3 2 1
9 8 7 6 5 4 3 1 2
9 8 7 6 5 4 1 3 2
9 8 7 6 5 1 4 3 2
9 8 7 6 1 5 4 3 2
9 8 7 1 6 5 4 3 2
9 8 1 7 6 5 4 3 2
9 1 8 7 6 5 4 3 2
1 9 8 7 6 5 4 3 2
1 9 8 7 6 5 4 2 3
1 9 8 7 6 5 2 4 3
1 9 8 7 6 2 5 4 3
1 9 8 7 2 6 5 4 3
1 9 8 2 7 6 5 4 3
1 9 2 8 7 6 5 4 3
1 2 9 8 7 6 5 4 3
1 2 9 8 7 6 5 3 4
1 2 9 8 7 6 3 5 4
1 2 9 8 7 3 6 5 4
1 2 9 8 3 7 6 5 4
1 2 9 3 8 7 6 5 4
1 2 3 9 8 7 6 5 4
1 2 3 9 8 7 6 4 5
1 2 3 9 8 7 4 6 5
1 2 3 9 8 4 7 6 5
1 2 3 9 4 8 7 6 5
1 2 3 4 9 8 7 6 5
1 2 3 4 9 8 7 5 6
1 2 3 4 9 8 5 7 6
1 2 3 4 9 5 8 7 6
1 2 3 4 5 9 8 7 6
1 2 3 4 5 9 8 6 7
1 2 3 4 5 9 6 8 7
1 2 3 4 5 6 9 8 7
1 2 3 4 5 6 9 7 8
1 2 3 4 5 6 7 9 8
1 2 3 4 5 6 7 8 9
~~~
