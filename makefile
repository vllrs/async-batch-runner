CFLAGS = -Wall -std=c99
COMPILER = C:\rtools40\mingw32\bin\i686-w64-mingw32-gcc-8.3.0.exe
LIBS = -fopenmp

all: async-batch-runner

async-batch-runner: async-batch-runner.c
	$(COMPILER) $< $(CFLAGS) $(LIBS) -o $@

clean:
	rm async-batch-runner.exe