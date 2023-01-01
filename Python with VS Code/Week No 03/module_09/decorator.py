def private(time):
    def inner(**args):
        print("Praivate Start")
        time(**args)
        print("Praivate End")

    return inner

@private
def tiem(p):
    print("04:00 pm",p)

tiem(p = 500)

@private
def hello(s):
    print("Hello world",s)

hello(s =600)

# private(tiem)()