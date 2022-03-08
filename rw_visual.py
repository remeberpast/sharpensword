import matplotlib.pyplot as plt

from random_walk import RandomWalk

# 多次随机漫步
while True:
    # 创建一个随机漫步实例
    rw = RandomWalk(50_000)
    rw.fill_walk()

    # 将所有的点绘制出来,并调整尺寸
    plt.style.use('classic')
    fig, ax = plt.subplots(dpi=500)

    # 设置图的样式
    point_numbers = range(rw.num_points)
    ax.scatter(rw.x_values, rw.y_values, c=point_numbers, cmap=plt.cm.Greens, edgecolors='none', s=1)

    # 突出起点和终点
    ax.scatter(0, 0, c='blue', edgecolors='none', s=10)
    ax.scatter(rw.x_values[-1], rw.y_values[-1], c='red', edgecolors='none', s=10)

    # 隐藏坐标轴
    ax.get_xaxis().set_visible(False)
    ax.get_yaxis().set_visible(False)

    plt.show()

    keep_running = input("Do you want to make another walk?(y/n)")
    if keep_running == 'n':
        break
