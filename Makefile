CC = g++ 

all: Cipher.o Coder.o  Decoder.o  StreamReader.o  StreamWriter.o Alphabet.o Parser.o  Task.o main.o
	$(CC) -std=gnu++11 -Wall Cipher.o Coder.o  Decoder.o  StreamReader.o  StreamWriter.o Alphabet.o Parser.o Task.o main.o -o caesar

Alphabet.o: Alphabet.cpp Alphabet.h
	$(CC) -c -std=gnu++11 -Wall Alphabet.cpp
	
Cipher.o: Cipher.h Cipher.cpp Parser.h
	$(CC) -c -std=gnu++11 -Wall Cipher.cpp

Coder.o: Coder.h Coder.cpp Cipher.h Processor.h
	$(CC) -c -std=gnu++11 -Wall Coder.cpp

Decoder.o: Decoder.h Decoder.cpp Cipher.h Processor.h
	$(CC) -c -std=gnu++11 -Wall Decoder.cpp

StreamWriter.o: StreamWriter.h StreamWriter.cpp Cipher.h
	$(CC) -c -std=gnu++11 -Wall StreamWriter.cpp

StreamReader.o: StreamReader.h StreamReader.cpp Cipher.h
	$(CC) -c -std=gnu++11 -Wall StreamReader.cpp

Task.o: Task.h Task.cpp Cipher.h Decoder.h Coder.h StreamWriter.h StreamReader.h Parser.h
	$(CC) -c -std=gnu++11 -Wall Task.cpp
	
Parser.o: Parser.cpp Parser.h Alphabet.h
	$(CC) -c -std=gnu++11 -Wall Parser.cpp
	
main.o: main.cpp Task.h Parser.h
	$(CC) -c -std=gnu++11 -Wall main.cpp

clean:
	rm -f *.o caesar