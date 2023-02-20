s, r = map( int, input().split())
A_square = s*s
A_circ = 3.14*r*r
if (A_square > A_circ):
    print("SQUARE")
else:
    print("CIRCLE")