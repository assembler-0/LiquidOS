/*CONFIG*/
#include <__KCONF.h>

/*CORE INCLUDES*/
#include <VirtualFileSystem.h>
#include <Errors.h>

/*LOCAL INCLUDES*/
#include <Dependency/Formatter.h>
#include <Dependency/Emmiter.h>

/*THIS IS A MODULARUS CORE STANDARD FILE WITH A STANDARD NAME OF "STANDARD_Init"
  The job of this file is to handle ITS own modules and init sequence.*/

SYSTEM_ERROR Err;
SYSTEM_ERROR* Error = &Err;

int _start(void) /*STANDARD NAME "_start"*/
{
	Emitter_KickStart(Error);

	KrnPrintf("Hello from STANDARD_Init module!\n");
    return GeneralOK;
}

int _exit(void) /*STANDARD NAME "_exit"*/
{
	KrnPrintf("Bye-Bye from STANDARD_Init module!\n");
    return GeneralOK;
}