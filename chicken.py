fa_chick = 5
mo_chick = 3
kid_chick = 1
# ijz分别表示三种鸡的个数,总金额个数都为money
i, j, z = 0, 0, 0

while i < 20:
    while j < 34:
        z = 100 - i - j
        money = i * fa_chick + j * mo_chick + z * kid_chick
        if money == 100:
            print(i, j, z)
            break
        j += 1
    i += 1

