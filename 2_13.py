# class Restaurant:
#     """模拟餐馆的简单尝试"""
#
#     def __init__(self, restaurant_name, restaurant_type):
#         """初始化属性"""
#         self.restaurant_name = restaurant_name
#         self.restaurant_type = restaurant_type
#
#     def describe_restaurant(self):
#         """描述餐馆"""
#         print(f"The {self.restaurant_name} is a {self.restaurant_type}.")
#
#     def open_restaurant(self):
#         """正在营业"""
#         print(f"The {self.restaurant_name} is open.")
#
#
# cw = Restaurant('cw', '中餐')
# cw.describe_restaurant()
# cw.open_restaurant()
#
# op = Restaurant('一间小店', 'fast food')
# op.describe_restaurant()
# op.open_restaurant()
#
# a = Restaurant('耙二锅', 'hot pot')
# a.describe_restaurant()
# a.open_restaurant()

# class Car:
#     """一次简单的汽车模拟"""
#
#     def __init__(self, make, model, year):
#         """初始化描述汽车的属性"""
#         self.make = make
#         self.model = model
#         self.year = year
#         """将初始里程默认为0"""
#         self.odometer_reading = 0
#
#     def get_descriptive_name(self):
#         """返回整洁的描述性信息"""
#         long_name = f"{self.year} {self.make} {self.model}"
#         return long_name.title()
#
#     def read_odometer(self):
#         """打印一条消息显示汽车里程信息"""
#         print(f"This car has {self.odometer_reading} miles on it.")
#
#     def update_odometer(self, mileage):
#         """
#         将里程修改为其他值
#         并且禁止将里程数据回调
#         """
#         if mileage > self.odometer_reading:
#             self.odometer_reading = mileage
#         else:
#             print("You can't roll back an odometer!")
#
#     def increment_odometer(self, miles):
#         """将里程增加一定的值"""
#         self.odometer_reading += miles
#
#
# # my_new_car = Car('audi', 'a4', '2019')
# # print(my_new_car.get_descriptive_name())
# # my_new_car.read_odometer()
# # # 通过实列访问直接修改属性的值
# # my_new_car.odometer_reading = 23
# # my_new_car.read_odometer()
# # # 通过方法修改属性的值（创建一个update方法）
# # my_new_car.update_odometer(24)
# # my_new_car.read_odometer()
# # # 通过方法对属性的值递增（创建一个新的increase方法）
# # my_new_car.increment_odometer(100)
# # my_new_car.read_odometer()
#
# # 继承：父类、子类
# # 在car的基础上编写ElectricCar
# class ElectricCar(Car):
#     """一次模拟电动车的简单尝试"""
#     def __init__(self, make, model, year):
#         """初始化父类的属性"""
#         super().__init__(make, model, year)
#         """初始化电量"""
#         self.battery = 75
#
#     def describe_battery(self):
#         """打印一条描述电瓶容量的信息"""
#         print(f"The car has a {self.battery}--kWh battey.")
#
#
# my_tesla = ElectricCar('tesla', 'model s', '2019')
# print(my_tesla.get_descriptive_name())
# my_tesla.describe_battery()


# 将实列用作属性
# class Car:
#     """一次简单的汽车模拟"""
#
#     def __init__(self, make, model, year):
#         """初始化描述汽车的属性"""
#         self.make = make
#         self.model = model
#         self.year = year
#         """将初始里程默认为0"""
#         self.odometer_reading = 0
#
#     def get_descriptive_name(self):
#         """返回整洁的描述性信息"""
#         long_name = f"{self.year} {self.make} {self.model}"
#         return long_name.title()
#
#     def read_odometer(self):
#         """打印一条消息显示汽车里程信息"""
#         print(f"This car has {self.odometer_reading} miles on it.")
#
#     def update_odometer(self, mileage):
#         """
#         将里程修改为其他值
#         并且禁止将里程数据回调
#         """
#         if mileage > self.odometer_reading:
#             self.odometer_reading = mileage
#         else:
#             print("You can't roll back an odometer!")
#
#     def increment_odometer(self, miles):
#         """将里程增加一定的值"""
#         self.odometer_reading += miles
#
#
# class Battery:
#     """模拟汽车电瓶"""
#
#     def __init__(self, battery_size = 75):
#         """初始化电瓶属性"""
#         self.battery_size = battery_size
#
#     def describe_battery(self):
#         """打印电量"""
#         print(f"This car has a {self.battery_size}--kWh battery.")
#
#     def get_range(self):
#         """显示电瓶续航里程"""
#         if self.battery_size == 75:
#             range = 260
#         elif self.battery_size == 100:
#             range = 315
#
#         print(f"This car can go about {range} miles on a full charge.")
#
#
# class ElectricCar(Car):
#     """电动车"""
#
#     def __init__(self, make, model, year):
#         super().__init__(make, model, year)
#         """将实列用作属性"""
#         self.battery = Battery()
#
#
# my_tesla = ElectricCar('tesla', 'model s', 2019)
#
# print(my_tesla.get_descriptive_name())
# my_tesla.battery.describe_battery()
# my_tesla.battery.get_range()
