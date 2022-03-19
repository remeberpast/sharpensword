import csv
from datetime import datetime

import matplotlib.pyplot as plt

plt.rcParams['font.sans-serif'] = ['SimHei']  # 用来正常显示中文标签
plt.rcParams['axes.unicode_minus'] = False  # 用来正常显示负号

filename = 'data/sitka_weather_2018_simple.csv'
with open(filename) as f:
    reader = csv.reader(f)
    header_row = next(reader)
    # print(header_row)

    # for index, column_header in enumerate(header_row):
    #    print(index, column_header)

    # 从文件中获取最高温度,最低温度,和日期
    dates, highs, lows = [], [], []
    for row in reader:
        current_date = datetime.strptime(row[2], '%Y-%m-%d')
        high = int(row[5])
        low = int(row[6])
        dates.append(current_date)
        highs.append(high)
        lows.append(low)

# print(highs)

# 根据最高温度, 最低温度绘制图形
plt.style.use('seaborn')
fig, ax = plt.subplots()
ax.plot(dates, highs, c='red', alpha=0.5)
ax.plot(dates, lows, c='blue', alpha=0.5)
ax.fill_between(dates, highs, lows, facecolor='blue', alpha=0.1)
# 设置图表样式
ax.set_title("temperature of 2018", fontsize=20, c='#0000FF')
ax.set_xlabel('', fontsize=16)
fig.autofmt_xdate()  # 绘制倾斜的日期标签，以免彼此重叠
ax.set_ylabel('temperature(F)', fontsize=16, c='green')
ax.tick_params(axis='both', which='major', labelsize=16)

plt.show()
