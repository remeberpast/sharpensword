# rivers = {
#     '长江': 'china',
#     '黄河': 'china',
#     '渠江': 'china'
#     }
# i = 0
# for i, j in rivers.items():
#     print(f'the {i.title()} runs through {j.title()}')

# people = ['zhang xun', 'li yinuo', 'guo yunzhi', 'tan long', 'hu linkang', 'liu chun', 'luo hua', 'guo yu cheng', 'fu yang', 'liu jiaxin', 'xie hangyi', 'wang yihao']
# favorite_languages = {
#     'zhang xun': 'PHP',
#     'li yinuo': 'java',
#     'guo yunzhi': 'python',
#     'hu linkang': 'c',
#     'liu chun': 'c',
#     'wang yihao': 'python',
#     'fu yang': 'java',
#     'liu jiaxin': 'CSS',
#     'xie hangyi': 'HTML'
# }
# # for person, language in favorite_languages.items():
# #     if person in people:
# #         print(f"{person.title()}'s favorite language is {language.title()}")
# #         print(f'Thanks for your help of my questionnaire')
# #     if person not in people:
# #         print(f'Can {person} help me write a questionnaire')
# for person in people:
#     if person in favorite_languages.keys():
#         print(f'Thank {person} for your help to write the questionnaire')
#     else:
#         print(f'{person.title()}, can you help me?')

# alien0 = {
#     'color': 'green',
#     'point': '5'
# }
# alien1 = {
#     'color': 'yellow',
#     'point': '10'
# }
# alien2 = {
#     'color': 'blue',
#     'point': '15'
# }
# aliens = [alien0, alien1, alien2]
# for alien in aliens:
#     print(alien)

# people = {
#     'cw': {
#         'first': 'xun',
#         'last': 'zhang',
#         'location': 'sichaun',
#     },
#     'mcurie': {
#         'first': 'marie',
#         'last': 'curie',
#         'location': 'pairs',
#     },
# }
# for username, user_info in people.items():
#     print(f'username: {username}')
#     full_name = f"{user_info['first']} {user_info['last']}"
#     Location = user_info['location']
#     print(f"\tFull name: {full_name.title()}")
#     print(f"\tLocation: {Location.title()}")
