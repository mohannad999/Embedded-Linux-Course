import os
fd=open("main.cpp","w")

maincpp= '#include <iostream> \n \
int main(){\n\
std::cout <<"hello world" <<std::endl;\n \
return 0 ;\n \
}\n'

fd.write(maincpp)
fd.close()

os.system("g++ main.cpp")
os.system("./a.out")
os.system("rm a.out")