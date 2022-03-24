def main():
    i = 2
    while i < 2000:
        if is_prime_number(i):
            print(i, end=' ')
        i += 1


def is_prime_number(num):
    """判断质数"""

    i = 2
    while i < num:
        if num % i == 0:
            return False
        i += 1
    return True


if __name__ == '__main__':
    main()
