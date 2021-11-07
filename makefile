all:  loops mains maindloop maindrec

advancedClassificationLoop.o:advancedClassificationLoop.c NumClass.h
	gcc -c -Wall advancedClassificationLoop.c

advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h
	gcc -c -Wall advancedClassificationRecursion.c 

basicClassification.o: basicClassification.c NumClass.h
	gcc -c -Wall basicClassification.c

main.o: main.c NumClass.h
	gcc -c -Wall main.c

.PHONY: clean 
clean:	
	rm *.o libclassloop.a libclassrec.a libclassrec.so libclassloop.so mains maindloop maindrec

loops:libclassloop.a

libclassloop.a: basicClassification.o advancedClassificationLoop.o
	ar rcu libclassloop.a basicClassification.o advancedClassificationLoop.o

recurrsives: libclassrec.a

libclassrec.a: basicClassification.o advancedClassificationRecursion.o
	ar rcu libclassrec.a basicClassification.o advancedClassificationRecursion.o

recurrsived: libclassrec.so

libclassrec.so: basicClassification.o advancedClassificationRecursion.o
	gcc -Wall -shared basicClassification.o advancedClassificationRecursion.o -o libclassrec.so

loopd: libclassloop.so

libclassloop.so: basicClassification.o advancedClassificationLoop.o
	gcc -Wall -shared basicClassification.o advancedClassificationLoop.o -o libclassloop.so

mains: main.o libclassrec.a
	gcc -Wall main.o -L. -lclassrec -o mains -lm

maindloop: main.o libclassloop.so
	gcc -Wall main.o -L. -lclassloop -o maindloop -lm


maindrec: main.o libclassrec.so
	gcc -Wall main.o -L. -lclassrec -o maindrec -lm










