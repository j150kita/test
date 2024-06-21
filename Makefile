#変数の定義
CC = gcc
CFLAGS = -Wall -O
LDFLAGS = -lm
TARGET = main

#デフォルトターゲット
all: $(TARGET)

#ターゲットと依存関係、コマンドの定義
$(TARGET): main.c
	$(CC) $(CFLAGS) -o $(TARGET) main.c $(LDFLAGS)

#cleanターゲットの定義
clean:
	rm -f $(TARGET) *~
