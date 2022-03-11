from plotly.graph_objs import Bar, Layout
from plotly import offline

from die import Die

# 创建两个面数不同的骰子
die_1 = Die()
die_2 = Die(10)

# results = []
# for roll_num in range(50000):
#     result = die_1.roll() + die_2.roll()
#     results.append(result)

# 列表解析改写循环
results = [die_1.roll()+die_2.roll() for roll_num in range(50000)]

# frequencies = []
max_result = die_1.num_sides + die_2.num_sides
# for value in range(2, max_result + 1):
#     frequency = results.count(value)
#     frequencies.append(frequency)

# 使用列表解析改写循环
frequencies = [results.count(value) for value in range(2, max_result)]

x_values = list(range(2, max_result+1))
data = [Bar(x=x_values, y=frequencies)]

x_axis_config = {'title': '结果', 'dtick': 1}
y_axis_config = {'title': '结果的频率'}
my_layout = Layout(title='掷两个骰子5000次的结果', xaxis=x_axis_config, yaxis=y_axis_config)
offline.plot({'data': data, 'layout': my_layout}, filename='d6_d10.html')
