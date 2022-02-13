# unconfirmed_users = ['zhang xun', 'tan long', 'guo yun zhi', 'wang yi hao', 'liu chun']
# confirmed_users = []
# while unconfirmed_users:
#     current_user = unconfirmed_users.pop()
#     print(f"Verifying user: {current_user.title()}")
#     confirmed_users.append(current_user)
# print("\nThe following users have been confirmed:")
# for confirmed_user in confirmed_users:
#     print(confirmed_user.title())

# responses = {}
# polling_active = True
# while polling_active:
#     name = input("\nWhat is your name?")
#     response = input("Which mountain would you like to climb someday?")
#     responses[name] = response
#     repeat = input("Would like to let another person respond?(yes/no)")
#     if repeat == 'no':
#         polling_active = False

# 最简单函数
# def greet_user():
#     """显示简单的问候语"""
#     print("Hello!")
# greet_user()

# def describe_pet(animal_type='dog', pet_name='cw'):
#     print(f"\nI have a {animal_type}.")
#     print(f"My {animal_type}'s name is {pet_name.title()}.")
# # 位置实参
# describe_pet('hamster', 'harry')
# # 关键字实参
# describe_pet(pet_name='harry', animal_type='hamster')
# # 省略实参使用默认值
# describe_pet(pet_name='willie')

# album = {}
# def make_album(singer_name, album_name=None):
#     album = {singer_name: album_name}
#     return album
# album = make_album('周杰伦', '青花瓷')
# album = make_album('华晨宇', 'wnagyi')
# album = make_album('刘淳', 'ten years')
# print(album)

# def bubble_sort(number):
#     for i in range(0, 9):
#         for j in range(0, 9 - i):
#             if number[j] > number[j + 1]:
#                 tmp = number[j]
#                 number[j] = number[j + 1]
#                 number[j + 1] = tmp
# num = [9, 8, 7, 6, 5, 4, 3, 2, 1, 0]
# bubble_sort(num)
# print(num)

# def sandwich(*food):
#     for name in food:
#         print(name)
# sandwich('chicken', 'duck', 'wang zhong wang', 'vegetable')

# def user_profile(first_name, last_name, **user_info):
#     user_info['first_name'] = first_name
#     user_info['last_name'] = last_name
#     return user_info
# information = user_profile('Xun', 'Zhang', qq_number = '1878506329', telephone_number = '15082180176')
# print(information)


# 类的学习
# 创建dog类
# class Dog:
#     """一次模拟小狗的简单尝试"""
#     def __init__(self, name, age):
#         """初始化属性name和age"""
#         self.name = name
#         self.age = age
#
#     def sit(self):
#         """模拟小狗收到命令后蹲下"""
#         print(f"{self.name} is now sitting.")
#
#     def roll_over(self):
#         """模拟小狗收到命令打滚"""
#         print(f"{self.name} rolled over!")
#
#
# # 创建特定的实列
# my_dog = Dog('gyz', 6)
# print(f"My dog's name is {my_dog.name}.")
# print(f"My dog is {my_dog.age} years old.")
# my_dog.sit()
# my_dog.roll_over()
#
# your_dog = Dog('zh', 250)
# print(f"My dog's name is {your_dog.name}.")
# print(f"My dog is {my_dog.age} years old.")
# your_dog.sit()
# your_dog.roll_over()

