TARGET = a.out #工程名
OBJ = $(patsubst %.c,%.o, $(wildcard ./*.c)) #替换当前目录下所有.c文件的文件名
CC = gcc           #编译器
RM = rm -f           #删除命令 windows平台为del linux平台为 rm -rf 强制删除所有指定文件
DEL = $(TARGET) $(OBJ)       #要删除的文件
make: clean $(TARGET)  #清除历史编译生成的文件，生成新文件
$(TARGET):$(OBJ)
		$(CC) $^ -o $@
%.o:%.c
		$(CC) -c -g $<
.PHONY:clean
clean:
		$(RM) $(DEL)