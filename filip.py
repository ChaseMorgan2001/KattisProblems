A, B = input().split()
if (A[2] > B[2]):
    print(A[2]+A[1]+A[0])
elif (A[2] < B[2]):
    print(B[2]+B[1]+B[0])
else:
    if (A[1] > B[1]):
        print(A[2]+A[1]+A[0])
    elif (A[1] < B[1]):
        print(B[2]+B[1]+B[0])
    else:
        if (A[0] > B[0]):
            print(A[2]+A[1]+A[0])
        elif (A[0] < B[0]):
            print(B[2]+B[1]+B[0])
