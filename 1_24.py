# x = 20
# a = 1
# b = 2
# # 加法运算符优先级大于关系运算符
# print((b>a)+(x<a)+b)

# # 条件语句
# # 猜数游戏（import random：随机数）
# import random
# ran = random.randint(1, 10)
# # print(ran)
# # 注意输入的都为字符串，要转化为整型
# guess = int(input('请猜一个数：'))
# if ran == guess:
#     print('恭喜你，猜对了')
# else:
#     print('猜错了')

# import random
# username = 'cw'
# total = 1500
# money = 0
# coupon = 0
# # 判断级别
# if 0 < total < 1500:
#     # pass用于支撑结构，内容还没有填充
#     # 随机送三张1~10元的优惠卷
#     quan1 = random.randint(1, 10)
#     quan2 = random.randint(1, 10)
#     quan3 = random.randint(1, 10)
#     coupon = quan1+quan2+quan3
# elif 1500 <= total < 2000:
#     # 正送两张50元优惠券，充值还送10%
#     coupon = 2*50
#     recharge = input('是否要充值（充值送10%）（y/n）：')
#     if recharge == 'y':
#        money += 1.1*int(input('请输入充值金额：'))
# elif total >= 2000:
#     # 赠送2张100元优惠券，充值送15%
#     coupon = 2*100
#     recharge = input('是否要充值（充值送15%）（y/n）：')
#     if recharge == 'y':
#         money = 1.15*int(input('请输入充值金额：'))

# while循环
# n = 1
# while n <= 10:
#     print('n---->%d' % n)
#     n += 1

# # 找到100以能被3整除的数
# n = 1
# while n <= 100:
#     if n % 3 == 0:
#         print(n)
#     n += 1

# 累加和
# 超市买东西，计算总额
# count = 5
# while True:
#     count += 1
#     if count == 5:
#         break
import random
# total = 0
# while True:
#     answer = input('是否继续购买（按q退出购买）')
#     if answer == 'q':
#         print('最终金额：%d' % total)
#         break
#     price = int(input('输入价格：'))
#     number = int(input('输入数量：'))
#     # # 随机版
#     # price = random.randint(1, 100)
#     # number = random.randint(1, 20)
#     total += price*number
#     print('当前总额：%d' % total)

# 猜数字游戏
# import random
# ran_num = random.randint(1, 100)
# while True:
#     guess = int(input('请猜一个数：'))
#     if guess>ran_num:
#         print('猜大了')
#     elif guess<ran_num:
#         print('猜小了')
#     else:
#         print('恭喜你，猜对了')

# message = "hello world"
# print(message)
# message = "Hello Python Crash Course world"
# print(message)

# 在字符串中使用变量：1.用占位符 2.使用字符f如下
# first_name = 'c'
# last_name = 'w'
# name = f"{first_name}{last_name}"
# print(name)
# print(f"{first_name}{last_name}")
# print(f"Hello, {first_name}{last_name}")

# python直接以人名形式输出
# name = 'zhanG xUn'
# print(name.title())
# print(name.upper())
# print(name.lower())

# 去除字符串末尾多余的空白
# favorite_language = 'python  '
# print(favorite_language)
# print(favorite_language.rstrip())
# print(favorite_language)
# # .rstrip()并不能改变变量本身的值，只是变量输出后才改变的
# favorite_language = favorite_language.rstrip()
# print(favorite_language)

# 个性化消息
# name = input('请输入名字：')
# message = f"Hello {name}, would you like to learn some Python today"
# print(message)

# 调整名字大小写
# name = input('请输入名字：')
# print(name)
# print(name.title())
# print(name.upper())
# print(name.lower())

# 名言
# print('Albert Einstein once said,"A person who never made a mistake never tried anything new."')

# 名言变量版
# famous_person = input('请输入名字：')
# message = input('请输入名言：')
# print(f'{famous_person} once said,"{message}"')

# 删除空白
# name = '\n\tzhang xun\t\n\t'
# print(name)
# print(name.rstrip())
# print(name.lstrip())
# print(name.strip())
