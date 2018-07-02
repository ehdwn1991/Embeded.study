import os

def makeSamplePage(directory):
 samplesFile=open(directory+"/samples.html","wt")
 samplesFile.write(doctype())
 samplesFile.write(title("Samples from "+directory))
 # Now, let's make up the string that will be the body.
 samples="<h1>Samples from "+directory+" </h1>"
 for file in os.listdir(directory):
  if file.endswith(".jpg"):
   samples=samples+"<p>Filename: "+file
   samples=samples+'<image src="'+file+'"height="100"></p>'
 samplesFile.write(body(samples))
 samplesFile.close()
