# IPython log file

get_ipython().magic(u'logstart')
ip_info = get_ipython().getoutput(u'ifconfig eth0 | grep "inet "')
ip_info = get_ipython().getoutput(u'ipconfig eth0 | grep "inet "')
ip_info[0].strip()
ip_info[1].strip()
foo = 'test*'
get_ipython().system(u'ls $foo')
get_ipython().system(u'dir $foo')
get_ipython().magic(u'run "C:/Users/choi/Downloads/test/test-ipy.py"')
get_ipython().magic(u'run "C:/Users/choi/Downloads/test/test-ipy.py"')
get_ipython().magic(u'run "C:/Users/choi/Downloads/test/test-ipy.py"')
get_ipython().magic(u'run -m cProfile "C:/Users/choi/Downloads/test/test-ipy.py"')
get_ipython().magic(u'prun -l 7 -s cumulative "C:/Users/choi/Downloads/test/test-ipy.py"')
get_ipython().magic(u'prun -l 7 -s cumulative run_experiment()')
get_ipython().magic(u'prun -l 7 -s cumulative run_experiment()')
get_ipython().magic(u'run "c:\\users\\choi\\appdata\\local\\temp\\tmpxpes8t.py"')
get_ipython().magic(u'run "c:\\users\\choi\\appdata\\local\\temp\\tmptwrqz0.py"')
x = randn(3000, 3000)
y = randn(3000, 3000)
get_ipython().magic(u'prun add_and_sum(x, y)')
get_ipython().magic(u'lprun -f func1 -f add_and_sum add_and_sum(x, y)')
get_ipython().magic(u'run notebook --pylab=inline')
get_ipython().system(u'ipython notebook --pylab=inline')
