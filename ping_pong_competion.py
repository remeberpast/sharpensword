# 乙队
first = ['x', 'y', 'z']
# 甲队用abc表示
for a in first:
    for b in first:
        for c in first:
            if a != b and a != c and b != c and a != 'x' and c != 'x' and c != 'z':
                print(f"a与{a}比赛\nb与{b}比赛\nc与{c}比赛")
