import matplotlib.pyplot as plt

# x_values = [1, 2, 3, 4, 5, 6]
# y_values = [1, 4, 9, 16, 25, 36]
#
# plt.style.use('seaborn')
# fig, ax = plt.subplots()
# ax.scatter(x_values, y_values, s=10)
#
# # 设置标题和标签
# ax.set_title("numbers", fontsize=20)
# ax.set_xlabel("x", fontsize=12)
# ax.set_ylabel("y", fontsize=12)
#
# plt.show()

x_values = range(1, 1001)
y_values = [x ** 2 for x in x_values]
plt.style.use('seaborn')
fig, ax = plt.subplots()
ax.scatter(x_values, y_values, s=10, c=y_values, cmap=plt.cm.Blues)
# 设置标题和标签
ax.set_title("numbers", fontsize=20)
ax.set_xlabel("x", fontsize=12)
ax.set_ylabel("y", fontsize=12)

plt.show()
