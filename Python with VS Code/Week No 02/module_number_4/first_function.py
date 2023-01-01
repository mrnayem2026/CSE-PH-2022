from operator import rshift
from unittest import result


def sum(num1,num2):
    result = num1 + num2
    return result

# sum = sum(5,5)

def biog(num1,num2):
    result = num1 - num2
    return result

biog = biog(10,2)

def mul(sum,biog):
    result = sum*biog
    return result

mul = mul(sum,biog)

print(mul)