# def favorite_book(title):
#     print(f"One of my favorite books is {title}.")
#
# book = input("请输入最喜欢的书：")
# favorite_book(book)

row = int(input("请输入行数："))
i = 1
while i <= row:
    left = 0
    while left <= row-i:
        print(" ", end="")
        left += 1
    tmp = i

    while tmp > 1:
        print(tmp, end="")
        tmp -= 1

    print(1, end="")

    while tmp < i:
        print(tmp + 1, end="")
        tmp += 1

    right = 0
    while right <= row-i:
        print(' ', end='')
        right += 1
    i += 1
    print()
