def fibonacci(number):
    a = 0 
    b = 1 
    c = 1 
    for i in range(number-1):
        print(c, end=' ')
        c = a + b
        a = b
        b = c

    return c
        
   

inputan = input("Masukkan number : ")
nilai = int(inputan)

print(fibonacci(nilai))