import pandas as pd

html_path = r'index.html'
data_path = r'data.json'
js_path = r'rickshaw.min.js'
css_path = r'rickshaw.min.css'


#All of the following import code comes from Wes McKinney's book, Python
#for Data Analysis

import pandas.io.data as web

pdata = pd.Panel(dict((stk, web.get_data_yahoo(stk, '1/1/2015', '1/2/2015'))
                        for stk in ['AAPL','GOOG','MSFT','DELL']))