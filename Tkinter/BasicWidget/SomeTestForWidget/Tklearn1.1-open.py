#!/usr/bin/env python
# encoding: gbk
'''
write your title
'''

'''
try: 
    while True:
        line = sys.stdin.readline().strip()
        if line == '':
            break 
        lines = line.split()
        print int(lines[0]) + int(lines[1])
except: 
    pass
'''
import sys
import Tkinter  # import the Tkinter module

class Application(Tkinter.Frame):
    def say_hi(self):
        print "hi there, everyone!"

    def createWidgets(self):
        self.QUIT = Tkinter.Button(self,
                    cnf={
                        "text":"quit"
                        },fg="red",command=self.quit)
        print help(Tkinter.Button)
        # self.QUIT["text"] = "QUIT"
        # self.QUIT["fg"]   = "red"
        # self.QUIT["command"] =  self.quit
        print self.QUIT.keys()
        self.QUIT.grid(row = 0,column = 1)
        self.QUIT.configure(fg="blue")
        self.hi_there = Tkinter.Button(self)
        self.hi_there["text"] = "Hello",
        self.hi_there["command"] = self.say_hi
        self.hi_there.grid(row = 1, column = 1)

    def __init__(self, master=None):
        Tkinter.Frame.__init__(self, master)
        self.grid(row = 0,column = 3)
        self.createWidgets()

if __name__ == "__main__":
    root = Tkinter.Tk()  # create a root window
    # root.geometry('1080x720+0+0')
    app = Application(master=root)
    app.mainloop()  # create an event loop
    # root.mainloop()
    # root.destroy()
    # root.mainloop()
