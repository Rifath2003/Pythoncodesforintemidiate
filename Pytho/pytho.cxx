"""
print("hello world")
print('hello world')
wcl_speech=input("please taataa = ")
print(wcl_speech)
"""
"""
firstnum=int(input("type 1st num = "))
secondnum=int(input("type 2nd num = "))
addnum=firstnum+secondnum
print(f"The summation = {addnum}")
"""

"""
def sqr_root(n):
    if n<0 :
      return "unreal"
    else :
        return n*0.5

n=int(input("type num = "))
root_num=sqr_root(n)
print(f"the root of {root_num}")
"""

"""
def triangle(a,b,c):
    s=(a+b+c)/2
    if a**2==b**2+c**2:
        return 0.5*b*c
    else :
             return (s*(s-a)*(s-b)*(s-c))**0.5
    
a=int(input("large "))
b=int(input("second "))
c=int(input("third "))
result=triangle(a,b,c)
print(f"area:{result}")
"""
"""
def check(n):
    if n%2==0 :
      return "even"
    else :
        return "odd"

n=int(input("type num = "))
result=check(n)
print(f" {result}")
"""
"""
def check(a):
    if a<=1 :
      return "notprime"
      
    for i in range(2,int(a**0.5)+1) :
       if a%i==0:
            return "notprime"
    return "prime"
    
    

n=int(input("type num = "))
result=check(n)
print(f" {result}")
"""
#The ** operator in Python is used for exponentiation. It raises a number to the power of another number. For example, a**2 means (a) squared, and a**0.5 means the square root of (a).

#The def keyword in Python is used to define a function. It tells Python that you are creating a new function.
"""
a, b = 0, 1: Initializes the first two numbers of the Fibonacci sequence.
for _ in range(n):: Loops n times.
print(a, end=" "): Prints the current number a followed by a space.
a, b = b, a + b: Updates a to the next number in the sequence and b to the sum of the previous two numbers.
‘’’
def is_fibo(n):
    a=0
    b=1
    for _ in range(n):
        print(a,end=" ")
        nextTerm=a+b
        a=b
        b=nextTerm
ent_fibo=int(input("entr num"))



if ent_fibo<=0:
      print("enter positive integer")
else:
     is_fibo(ent_fibo) 

"""
"""
def c(n):
    r=1
    for i in range(1,n+1):
         r*=i
    return r
    
a=int(input(“ "))
if a<=0:
    print('not valid')
else:
    b=c(a)
    print(f’ Factorial  {b}')
"""
"""
def c(a,b):
    a,b=b,a
    return a,b

a=int(input('num1 '))
b=int(input('num2 '))
r=c(a,b)
print(f’ After Swap {r}')
"""
"""
s.replace(" ", ""): Removes all spaces from the string s.
.lower(): Converts the string to lowercase.

def c(s):
    s=s.replace(" ","").lower()
    return s== s[ : :-1]
a=input(' ')

b=c(a)
print(f'{b}')
"""
"""
Converts the input d to a string and checks if it is equal to its reverse (d[::-1]).
def c(d):
    d=str(d)
    return d==d[ : :-1]
a=input(' ')
b=c(d)
print(f'{b}')
"""
