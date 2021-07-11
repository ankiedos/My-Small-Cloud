@echo off

@rem gcc -I. .\common.h -o .\common.o -std=c99
@rem gcc -I. .\chunk.h -o .\chunk.o -std=c99
@rem gcc -I. .\debug.h -o .\debug.o -std=c99
@rem gcc -I. .\memory.h -o .\memory.o -std=c99
@rem gcc -I. .\value.h -o .\value.o -std=c99
@rem gcc -I. .\main.c -o .\main.o -std=c99
@rem gcc .\common.o .\chunk.o .\debug.o .\memory.o .\value.o .\main.o -o main -std=c99

gcc -I. .\common.h .\chunk.h .\debug.h .\memory.h .\value.h .\main.c -o cpps -std=c99