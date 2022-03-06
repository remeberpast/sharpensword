import matplotlib.pyplot as plt

#
# # mpl_squares
# squares = [1, 4, 9, 16, 25]
# input_values = [1, 2, 3, 4, 5]
#
# plt.style.use('seaborn')
# fig, ax = plt.subplots()
# ax.plot(input_values, squares, linewidth=3)
#
# # 设置图表标题并给坐标轴加上标签
# ax.set_title("numbers", fontsize=24)
# ax.set_xlabel("values", fontsize=14)
# ax.set_ylabel("input", fontsize=14)
#
# # 设置刻度标记的大小
# ax.tick_params(axis='both', labelsize=14)
#
# plt.show()

plt.style.use('seaborn')
fig, ax = plt.subplots()
ax.scatter(2, 4)

plt.show()
