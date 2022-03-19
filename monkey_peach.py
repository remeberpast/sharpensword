# 输入N
n = int(input("输入天数N："))
_sum = 1
for i in range(n - 1):
    _sum += 1
    _sum *= 2
print(f"桃子总数：{_sum}")
