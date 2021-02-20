obj-m := hello.o 
hello-objs := main.o

all: 
	make -C ~/kernel/WSL2-Linux-Kernel M=$(PWD) modules

clean:
	make -C ~/kernel/WSL2-Linux-Kernel M=$(PWD) clean
