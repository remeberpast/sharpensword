def single(num):
    nums = []
    while num > 0:
        a = num % 10
        nums.append(a)
        num = num // 10
    return nums


# 输入m,n
m = int(input("输入m："))
n = int(input("输入n："))
i = m
while i <= n:
    numbers = single(i)
    if i == (numbers[0] ** 3 + numbers[1] ** 3 + numbers[2] ** 3):
        print(i)
    i += 1
