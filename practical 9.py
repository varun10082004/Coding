def add():
    n=int(input("Enter the total no.of Elements"))
    a=[]
    s=0
    for i in range(n):
     a.append(int(input("Enter the elements")))
     for i in a:
      s=s+i
    print("Sum of all elements=",s)
add()
