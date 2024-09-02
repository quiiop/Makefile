# /project/makefile 命令介紹
make all 
    1. $(TARGET)有依賴項main.o，所以main.o的目標生成為第一個執行，最終產生main object file。
    2. 執行Precompile命令，Precompile命令要去make partA、B的Makefile，產生static library。
    3. 把main.o和static library link成執行檔。
    
make clean
    會去執行每個part的Makefile clean command