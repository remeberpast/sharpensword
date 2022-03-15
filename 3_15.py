# import matplotlib.pyplot as plt
#
# x_coords = [0, 1, 2, 3, 4]
# y_coords = [0, 3, 1, 5, 2]
# plt.plot(x_coords, y_coords)
# # plt.set_title("y",fontsize=24)
#
# plt.show()


# 创建二维列表
n = int(input("输入n："))
number = []
for i in range(n):
    number.append([])
    j = n - i
    while j > 0:
        number[i].append(0)
        j -= 1

num = 1
_max = n * (n - 1) / 2
# 输入数据
# times_1 = n - 1
i = 0
j = -1
for times_1 in range(n):
    times_2 = len(number[times_1]) - 1
    # print(times_1)
    # print(times_2)
    while times_2 >= 0:
        if times_1 % 3 == 0:
            j += 1
            number[i][j] = num
        elif times_1 % 3 == 1:
            i += 1
            j -= 1
            number[i][j] = num
        else:
            i -= 1
            number[i][j] = num
        times_2 -= 1
        # times_1 -= 1
        num += 1

for i in range(n):
    print(number[i])


# print(n)
