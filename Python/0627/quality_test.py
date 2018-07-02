#품질 관리 p.111
def average(values):
    """
    Computes the arithmetic mean of a list of numvers.
    >>> print(average([20,30,70]))
    40.0
    """
    return sum(values,0.0)/len(values)
import doctest
doctest.testmod()

import unittest
class TestStatisticalFunctinos(unittest.TestCase):
    def test_average(self):
        self.assertEqual(average([20, 30, 70]), 40.0)
        self.assertEqual(round(average([1, 5, 7]),1), 4.3)
        self.assertRaises(ZeroDivisionError, average,[])
        self.assertRaises(TypeError, average, 20, 30, 70)
unittest.main()

# 이렇게 하면 파이썬 코드를 테스트 하면서 해볼수음있음음