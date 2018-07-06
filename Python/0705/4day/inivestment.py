import pandas.io.data as web
all_data={}
for ticker in ['AAPL','XOM','GOOG']:    
    try:
        all_data[ticker] = web.get_data_yahoo(ticker, '03/11/2015', '03/14/2015')
        price = DataFrame({tic: data['Adj Close']
                    for tic, data in all_data.iteritems()})
        volume = DataFrame({tic: data['Volume']
                    for tic, data in all_data.iteritems()})
    except:
        print "Cant find ", ticker
