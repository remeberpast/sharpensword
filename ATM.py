class BankAccount:
    """银行"""

    def __init__(self, money=100):
        self.money = money

    def check_balance(self):
        """检查余额"""
        print("The balance is %.1f" % self.money)

    def withdraw(self, account):
        """取出"""
        if account >= self.money:
            self.money -= account
        else:
            print("余额不足")

    def deposit(self, account):
        """存钱"""
        self.money += account


class ATM:
    """ATM"""

    def __init__(self, id):
        self.id = id
        self.atm = []

    def add_atm(self):
        for i in range(10):
            self.atm.append(BankAccount)

    def menu(self):
        print("1:check balance")
        print("2:withdraw")
        print("3:deposit")
        print("exit")
        self.id = int(input("Enter your choice:"))


def main():
    while True:
        id = int(input(("请输入id：")))
        atm= ATM(id)



if __name__ == "__main__":
    main()
