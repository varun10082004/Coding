def swap(a):
    temp=a[0]
    a[0]=a[4]
    a[4]=temp
    return(a)
a=[10,20,30,40,50]
print(swap(a))
