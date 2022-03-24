"""换零钱"""


def main():
    money = int(input("输入零钱总数："))
    num = 0
    for i in range(1, int(money / 5) + 1):
        for j in range(1, int(money / 2) + 1):
            l = money - i * 5 - j * 2
            if l > 0:
                print(f"fen5:{i},fen2:{j},fen1:{l}")
                num += 1
    print(f"共有{num}总换法")


if __name__ == '__main__':
    main()
