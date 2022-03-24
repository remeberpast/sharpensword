"""斐波那契数列分数前N项和"""


def main():
    N = int(input("输入N："))
    number = fibonacci(N)
    # 求和
    _sum = 0
    for i in range(N):
        _sum += number[i + 1] / number[i]
    print("前N项和为：%.2f" % _sum)


def fibonacci(N):
    """得到fibonacci数列"""
    number = [1]
    a = 1
    b = 2
    for i in range(N):
        number.append(b)
        (a, b) = (b, a + b)
    return number


if __name__ == '__main__':
    main()
