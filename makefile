
05:
	./a.out -s text/05for.c

04:
	./a.out -s text/04do_while.c
r:
	./a.out -s text/03switch_case.c
f:
	gcc *.c -lpthread -std=c99
o:
	gcc *.o	-omain		
c:
	gcc *.c -c

all:
	gcc eval.c		-c	-o./bb/evcal.o
	gcc next.c		-c	-o./bb/next.o
	gcc match.c		-c	-omatch.o
	gcc expression.c	-c	-oexpression.o
	gcc statement.c		-c	-ostatement.o
	gcc function_body.c	-c	-ofunction_body.o	
	gcc function_declaration.c -c  -ofunction_declatation.o	
	gcc function_parameter.c     -c	-ofunction_parametr.o
	gcc enum_declaration.c	     -c	-oenum_declaration.o
	gcc global_declaration.c     -c	-oglobal_declaration.o
	gcc program.c		     -c	-ogrogram.o
	gcc main.c 		     -c	-omain.o
one:
	gcc 01.c -c -o01.o
