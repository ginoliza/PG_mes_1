def gen_subsets():
    fullSet = [x for x in range(1, 21)]
    res = list(fullSet)
    n = len(res)
    return [[res[k] for k in range(n) if i & 1 << k] for i in range(2**n)]


print(gen_subsets())