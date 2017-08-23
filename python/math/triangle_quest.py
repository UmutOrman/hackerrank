for i in range(1,input()): 
    print sum(10**(j-1) for j in xrange(i,0,-1)) * i
