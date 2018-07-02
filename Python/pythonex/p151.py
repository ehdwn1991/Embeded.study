def makeHomePage(name, interest):
  file=open(("homepage.html"),"wt")
  file.write(doctype())
  file.write(title(name+"'s Home Page"))
  file.write(body("""
<h1>Welcome to """+name+"""'s Home Page</h1> <p>Hi!  I am
"""+name+""".  This is my home page! I am interested in
"""+interest+"""</p>"""))
  file.close()

def doctype():
  return '<!DOCTYPE html>'

def title(titlestring):
  return "<html><head><title>"+titlestring+"</title></head>"

def body(bodystring):
  return "<body>"+bodystring+"</body></html>"


