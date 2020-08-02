# アルゴリズム入門

## 参考リンクなど

- [アルゴリズムとは何か！？ ～ 文系理系問わず楽しめる精選 6 問 ～](https://qiita.com/drken/items/f909b79ee03e679c7142)

## アルゴリズムとは何か

問題を解くための決まった手順.

アルゴリズムの例

- 2分探索法
- マッチング法
- 深さ優先探索法
- 幅優先探索法
- 動的計画法
- 勾配降下法

アルゴリズムとして最も基礎的なものが全探索である. 

多くの問題において全探索は比較的簡単に実行できるが, 極めて膨大な時間・計算リソースを必要とする場合がある. 

そういった場合, アルゴリズムを工夫することで短時間かつ計算量の省力化ができる可能性がある.


## 2分探索法

例えば, ある人間の年齢を当てる問題があるとする. 

その人の年齢$x$が整数$a,b$に対して, $a \le x \le b$であることがわかっていたとする.

この時, $c = (a+b) / 2$以上か聞くことで, 取り得る年齢の範囲が2分される. 

同様に, 探索範囲を2分していくことで目的の年齢にたどり着ける. 

2分探索はプログラムに限らず, 日常生活に適用可能なアルゴリズムである. 

## マッチング法

マッチング法はOnline Datingとして盛んに研究されているアルゴリズムである.

男性と女性でペアを作る問題があったとする. 

現実的には異性のうち1人か少数の人間と集中してしまうが, (2部)マッチング問題では全体の利得が最大になるようにペアを作る. 

マッチング法とはこのような全体最適が実現する組み合わせを導くアルゴリズムである. 

実用例としてはマッチングアプリの他に

- インターネットの広告
- 割当問題
- 輸送問題
  
などがある.

## 深さ優先探索法

深さ優先探索法(Depth-First Search, DFS)は以下のようなアルゴリズムである.

- 仮定を置いて条件を満たすか調べる
- さらに仮定を置いて先を調べる
- 条件を満たさない場合, 満たさないところからやりなおす

このアルゴリズムの実用例は沢山あるが, `makefile`において活用されている. (正確にはトポロジカルソート)

## 幅優先探索法

幅優先探索法(Breath First Search, BFS)は最初のステップから始めて次々と調べていくアルゴリズムで, 最小ステップを調べるのに向いている. 

**説明が雑**

実用例はいくつか存在する.

- 最小経路探索問題
- ルービックキューブを解く最小手数(God's Numberと呼ばれる)

## 動的計画法

動的計画法はあらゆる実用例を持つアルゴリズムであり, パターンが複数存在する.

** 書けない **


## 勾配降下法

機械学習ではお馴染みの勾配降下法である. 

損失関数$L = f(w)$を最小にするようにパラメーター$w$を定めたい. 

この時, 初期値$w^{(0)}$から始めて

$$
w^{(k+1)} \leftarrow w^{(w)} - \eta \frac{\partial L}{\partial w}
$$

のようにパラメーターを更新する方法が勾配降下法である. 


