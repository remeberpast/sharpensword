# from random import randint
# from random import choice
# print(randint(1, 100))
# players = ['charles', 'martina', 'michael', 'florence', 'eli']
# first_up = choice(players)
# print(first_up)

# with open('pi.txt') as file_object:
#     contents = file_object.read()
# print(contents.rstrip())

# filename = 'pi.txt'
#
# with open(filename) as file_object:
#     for line in file_object:
#         print(line.rstrip())

# 创建一个包含文件各行内容的列表
# filename = 'pi.txt'
#
# with open(filename) as file_object:
#     lines = file_object.readlines()
#
# for line in lines:
#     print(line)
# print(lines)

# # 使用文件内容
# filename = 'pi.txt'
#
# with open(filename) as file_object:
#     lines = file_object.readlines()
#
# pi_str = ''
# for line in lines:
#     pi_str += line.strip()
#
# print(pi_str)
# print(len(pi_str))
# print(float(pi_str))


# 圆周率包含你的生日吗
# filename = 'pi_million_digits.txt'
#
# with open(filename) as file_object:
#     lines = file_object.readlines()
#
# pi_string = ''
# for line in lines:
#     pi_string += line.strip()
#
# birthday = input("Enter your birthday, in the form of mmddyy: ")
# if birthday in pi_string:
#     print("Your birthday appears in the first million digits of pi!")
# else:
#     print("Your birthday does not appear in the first million digits of pi.")


# 写入文件
# filename = 'programming.txt'
#
# with open(filename, 'w') as file_object:
#     file_object.write("I love programming.\n")
#     file_object.write("I love creating new games.\n")

# 附加文件
# filename = 'programming.txt'
#
# with open(filename, 'a') as file_object:
#     file_object.write("I also love finding meaning in large datasets.\n")
#     file_object.write("I love creating apps that can run in a browser.\n")


# try-except-else 代码块
# try:
#     print(5/0)
# except ZeroDivisionError:
#     print("You can't divide by zero!")

# 使用异常避免程序崩溃
# print("Give me two numbers, and I'll divide them.")
# print("Enter 'q' to quit.")
#
# while True:
#     first_num = input("\nFirst number: ")
#     if first_num == 'q':
#         break
#     second_num = input("Second numb: ")
#     if second_num == 'q':
#         break
#     try:
#         answer = int(first_num) / int(second_num)
#     except ZeroDivisionError:
#         print("You can't divide by 0.")
#     else:
#         print(answer)

# filename = 'programming.txt'
#
# try:
#     with open(filename, encoding='utf-8') as f:
#         contents = f.read()
# except FileNotFoundError:
#     print(f"Sorry, the {filename} does not exist.")
# else:
#     words = contents.split()
#     num_words = len(words)
#     print(f"The {filename} has about {num_words} words.")


# def count_words(filename):
#     try:
#         with open(filename, encoding='utf-8') as f:
#             contents = f.read()
#     except FileNotFoundError:
#         print(f"Sorry, the {filename} does not exist.")
#     else:
#         words = contents.split()
#         num_words = len(words)
#         print(f"The {filename} has about {num_words} words.")
#
#
# filenames = ['programming.txt', 'siddhartha.txt', 'alice.txt']
# for filename in filenames:
#     count_words(filename)


# import json
#
# # numbers = [2, 3, 5, 7, 11, 13]
# #
# # filename = 'number.json'
# # with open(filename, 'w') as f:
# #     json.dump(numbers, f)
#
# # filename = 'number.json'
# # with open(filename) as f:
# #     numbers = json.load(f)
# #
# # print(numbers)


# import json
#
# filename = 'username.json'
# try:
#     with open(filename) as f:
#         username = json.load(f)
# except FileNotFoundError:
#     username = input("What is your name? ")
#     with open(filename, 'w') as f:
#         json.dump(username, f)
#         print(f"We'll remember you when you come back, {username}!")
# else:
#     print(f"Welcome back! {username}")


