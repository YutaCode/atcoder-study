def count_trees(a, m, l, r):
    # first_treeの計算
    first_tree = (l - a + m - 1) // m

    # last_treeの計算
    last_tree = (r - a) // m

    # 総ツリー数を計算し、負の結果を0に修正
    total_trees = max(0, last_tree - first_tree + 1)

    return total_trees

# 与えられた値を受け取る
a, m, l, r = map(int, input().split())

# クリスマスツリーの本数を計算
total_trees = count_trees(a, m, l, r)
print(total_trees)
