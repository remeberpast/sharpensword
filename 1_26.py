# life = ['eat', 'sleep', 'drink', 'shit']
# print(life)
# print(life[0].title())
# print(life[1].title())
# print(life[2].title())
# print(life[3].title())
# print(life[-1].title())

# 姓名 + 问候
# names = ['liu chun', 'wang yi hao', 'li yi nuo','liu jia ixn', 'zhang zhao', 'luo hua', 'fu yang']
# import random
# print(names[0].title())
# print(names[1].title())
# print(names[2].title())
# print(names[3].title())
# print(names[4].title())
# print(names[5].title())
# print(names[6].title())
# a = random.randint(0, 6)
# message = f"Fuck {names[a].title()}"
# print(message)

# names.append('guo yun zhi')
# print(names)
# names.insert(0, 'zhang xun')
# print(names)
# del names[0]
# print(names)

# name_list = ['guo yunzhi', 'hu lingkang', 'tan long', 'guo yucheng', 'zheng xinyu', 'pu yunsui', 'liu chun', 'wang yihao']
# a = 0
# # 发出邀请
# message = f"Hi! {name_list[a]}please have dinner with me"
# while a <= 7:
#     print("Hi! %s please have dinner with me" % name_list[a])
#     # print(name_list[a])
#     a += 1
# # 有人无法赴约重新邀请
# print('%s无法赴约' % name_list[4])
# name_list[4] = 'fu yang'
# # 载发出邀请
# a = 0
# while a <= 7:
#     print("Hi! %s please have dinner with me" % name_list[a])
#     a += 1
# # 更大的桌子
# print('wow! 更大的桌子')
# name_list.insert(0, 'li jiali')
# name_list.insert(4, 'jia le')
# name_list.append('nai lin')
# # 再次发出邀请
# a = 0
# while a <= 10:
#     print("Hi! %s please have dinner with me" % name_list[a])
#     a += 1
# # 缩减名单
# print("Oh! Just two people can have dinner with me!")
# a = 10
# while a > 1:
#     sorry = name_list.pop(0)
#     print("sorry %s, I can't have dinner with you! Sorry!" % sorry)
#     a -= 1
# print(name_list)
# a = 0
# while a <= 1:
#     print("Hi! %s please have dinner with me" % name_list[a])
#     a += 1
# # 删除名单
# del name_list[0]
# del name_list[0]
# print(name_list)

# # 排序
# name_list = ['guo yunzhi', 'hu lingkang', 'tan long', 'guo yucheng', 'zheng xinyu', 'pu yunsui', 'liu chun', 'wang yihao']
# print(sorted(name_list))
# print(name_list)
# # 反转列表
# name_list.reverse()
# print(name_list)
# # 求列表长度
# print(len(name_list))

# travel = ['bing dao', 'luo wei', 'ba li', 'ai er lan', 'heaven']
# print(travel)
# print(sorted(travel))
# print(sorted(travel, reverse=True))
# travel.reverse()
# print(travel)
# travel.reverse()
# print(travel)
# travel.sort()
# print(travel)
# travel.sort(reverse=True)
# print(travel)

# pets = ['cat', 'dog', 'mouse']
# for pet in pets:
#     print(f"A {pet} would make a great pet.")
# print("Any of these animals would make a great pet!")

squares = []
for value in range(1, 11):
    squares.append(value**2)
print(squares)
print(min(squares))
print(max(squares))
print(sum(squares))

