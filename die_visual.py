from plotly.graph_objs import Bar, Layout
from plotly import offline

from die import Die

# # 创建一个D6
# die = Die()
#
# # 扔骰子并将结果存于列表中
# results = []
# for roll_num in range(1000):
#     result = die.roll()
#     results.append(result)
#
# # print(results)
# # 分析结果
# frequencies = []
# for value in range(1, die.num_sides + 1):
#     frequency = results.count(value)
#     frequencies.append(frequency)
#
# # print(frequencies)
# # 使用plotly分析,对数据进行可视化
# x_values = list(range(1, die.num_sides + 1))
# data = [Bar(x=x_values, y=frequencies)]
#
# x_axis_config = {'title': '结果'}
# y_axis_config = {'title': '结果的频率'}
# my_layout = Layout(title='扔一个D6骰子1000次的结果', xaxis=x_axis_config, yaxis=y_axis_config)
# offline.plot({'data': data, 'layout': my_layout}, filename='d6.html')

# 扔两个骰子
die_1 = Die()
die_2 = Die()