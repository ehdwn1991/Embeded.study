def foo(x):
    return 1/x

def bar(x):
    try:
        print(foo(x))
    except ZeroDivisionError as message:
        print("Can’t divide by zero:", message)

print(bar(0))
