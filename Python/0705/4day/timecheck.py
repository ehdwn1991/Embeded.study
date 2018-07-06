
import timeit

normal_py_sec = timeit.timeit('sum(x*x for x in xrange(1000))', 
                              number=10000)
naive_np_sec = timeit.timeit('sum(na*na)',
                             setup="import numpy as np; na=np.arange(1000)",
                             number=10000)
good_np_sec = timeit.timeit('na.dot(na)',
                            setup="import numpy as np; na=np.arange(1000)",
                            number=10000) 
import numpy as np

#normal_py_sec = timeit.timeit('"sum(x*x for x in xrange(1000)".join(str(n) for n in range(100))', number=10000)
#naive_np_sec = timeit.timeit('"sum(na*na)".join(str(n) for n in range(100)); na=numpy.arrange(1000)', number=10000)
#good_np_sec = timeit.timeit('"-".join(str(n) for n in range(100))', number=10000)


print("Normal Python: %f sec" % normal_py_sec)
print("Naive NumPy: %f sec" % naive_np_sec)
print("Good NumPy: %f sec" % good_np_sec)