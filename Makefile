LIBNAME = libmx.a

FLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic

all: _OBJ LIBMX building_library

_OBJ:
	mkdir obj

LIBMX:
	clang $(FLAGS) -c src/*.c
	mv *.o obj/

building_library:
	ar -rc $(LIBNAME) obj/*.o
	ranlib $(LIBNAME)

clean:
	rm -rf obj

uninstall:
	rm -rf obj
	rm -rf $(LIBNAME)

reinstall:
	make uninstall
	make
