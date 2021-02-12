####################File Handaling in python

def function():

    try:
      f = open('test.txt')
      content = f.write('i am a hafiz')
     

    except IOError as e:
      errno, strerror = e.args
      print("I/O error({0}): {1}".format(errno, strerror))

    a = f.read()  #i am a hafiz
    b = f.seek(0,0) # pointer is first position
    a = f.read(2)  #i a
    
    print(f.readline)  #print fist line
    print(f.readlines) # print all line by a array
      
    for line in f:
        print(line,end='')


if __name__ == 'main':
    function()