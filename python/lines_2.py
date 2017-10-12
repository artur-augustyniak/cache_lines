dim_size = 1000
x = [[0 for i in xrange(dim_size)] for j in xrange(dim_size)]
for j in xrange(0,dim_size):
    for i in xrange(0, dim_size):
        x[j][i] = i + j

