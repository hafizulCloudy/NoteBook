####################File Handaling in python
# with open('test.txt', 'r') as my_file:


def function():

    try:
      f = open('test.txt','w+')
      content = f.write('i am a hafiz')
     

    except IOError as e:
      errno, strerror = e.args
      print("I/O error({0}): {1}".format(errno, strerror))

    a = f.read()  #i am a hafiz
    print(a)
    f.seek(0, 0)  # pointer is first position
    b = f.tell()
    print(b)
    a = f.read(2)  #i a
    print(a)
    
    print(f.readline)  #print fist line
    #lines = f.readlines # print all line by a array
      
    #for line in lines:
        #print(line)
    f.close()



if __name__ == '__main__':
    function()
