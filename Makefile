all:
	clear
	bison -d Bison.y
	flex Flex.l
	gcc Bison.tab.c lex.yy.c -o Bison
	./Bison <input.txt> output.txt
clean:
	rm Bison.tab.c Bison.tab.h lex.yy.c Bison
