# class Test:
#     ten = 10
#     twenty = 20

#     def printVal(self):
#         print(Test.ten)
#         print(Test.twenty)

# t = Test()
# t2 = Test()

# t.ten = 100
# print(t.ten)
# t2.printVal()
# t.printVal()

# print(f'Test.ten : {Test.ten}')
# print(f'Test.twenty : {Test.twenty}')


class Test:
    ten = 10
    twenty = 20
    def __init__(self):
        if not hasattr(Test,'ten'):
            Test.ten = 10


    def createTwenty(self):
        if not hasattr(Test,'twenty'):
            Test.twenty = 20


t = Test()

t.createTwenty()