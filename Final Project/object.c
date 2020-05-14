/* This C file includes all the objects that are being used for the story */
#include <stdio.h>
#include "object.h"
#include <string.h>

static const char *tags0[] = {"hq", NULL};
static const char *tags1[] = {"airport", "domashev airport", "mission1", NULL};
static const char *tags2[] = {"camp", "kangdong prison", "prison camp", "mission2", NULL};
static const char *tags3[] = {"yacht", "dreadnoght", "boat", "mission3", NULL};
static const char *tags4[] = {"sea", "open seas", "titanic", "mission4", NULL};
static const char *tags5[] = {"OS", "os", "operating system", NULL};
static const char *tags6[] = {"yourself", NULL};
static const char *tags7[] = {"knife", "shiv", NULL};
static const char *tags8[] = {"enemy", "guard", "terrorist", NULL};
static const char *tags9[] = {"AK-47", "G36", "gun", NULL};
static const char *tags10[] = {NULL};
static const char *tags11[] = {"escape", "escape camp", NULL};
static const char *tags12[] = {"clue 1", "Clue 1", "os info 1", "info 1", NULL};
static const char *tags13[] = {"clue 2", "Clue 2", "os info 2", "info 2", NULL};
static const char *tags14[] = {"clue 3", "Clue 3", "os info 3", "info 3", NULL};
static const char *tags15[] = {"clue 4", "Clue 4", "os info 4", "info 4", NULL};
static const char *tags16[] = {"paper", "note", "Paper", "clue", NULL};
static const char *tags17[] = {"warden's office", "office", "warden", NULL};
static const char *tags18[] = {"engine", "engine room", "below", NULL};
static const char *tags19[] = {"bridge", "bridge room", "south", NULL};
static const char *tags20[] = {"lopatin cabin", "lopatin arthur's cabin", "arthur cabin", "east", "cabin", NULL};
static const char *tags21[] = {"deck", "out", "exit", NULL};
static const char *tags22[] = {"memory", "memory layout", "clue 5",NULL};
static const char *tags23[] = {"process", "process schedule", "schedule", "scheduling", "clue 6",NULL};
static const char *tags24[] = {"threads", "thread", "multiple threads", "clue 7",NULL};
static const char *tags25[] = {"main memory", "main", "RAM", "ram", "clue 8" ,NULL};
static const char *tags26[] = {"swapping", "swap", "swap space", "clue 9" ,NULL};
static const char *tags27[] = {"caching", "cache", "clue 10" ,NULL};
static const char *tags28[] = {"process syncronization", "syncronization", "process sync", "clue 11" , NULL};
static const char *tags29[] = {"issac vasily", "jetski", "near",NULL};
static const char *tags30[] = {"option 1", "alive", "jump", NULL};
static const char *tags31[] = {"option 2", "kill", "shoot", NULL};

OBJECT objs[] = {
   {"Special Forces Headquater", tags0, NULL , NULL },						// Obj 0
   {"Mission 1: Domashev international airport", tags1, hQ, airport},				// Obj 1
   {"Mission 2: Kangdong prison camp", tags2, hQ, camp},					// Obj 2
   {"Mission 3: Dreadnoght yacht", tags3, hQ, yacht},						// Obj 3
   {"Mission 4: open seas", tags4, hQ, sea},							// Obj 4
   {"Your objective: Enter the OS and get clue about their evil plan", tags10, airport, NULL},	// Obj 5
   {"yourself"  , tags6, hQ, NULL  },								// Obj 6
   {"Entrance to OS {Operating System) here", tags5, airport, operatingSysP1},			// obj 7
   {"Your objective: Escape from the prison with your cell mate but before you escape you need to find the clues in the camp", tags11, camp, NULL},	// Obj 8
   {"prison guards", tags8, camp, NULL},								// Obj 9
   {"Your objective: Sneak inside the Dreadnought yacht and find out the last details of their plan", tags10, yacht, NULL },	// Obj 10
   {"AK47, G36"  , tags9, camp, NULL  },							// Obj 11
   {"a shiv" , tags7, camp , NULL},		// Obj 12
   {"Civilians walking around", tags10, airport, NULL},						// Obj 13
   {"Aircrafts taking off, Aircrafts Idle", tags10, airport, NULL },				// Obj 14
   {"[Clue 1] What is OS? The software that supports a computer's basic functions, such as scheduling tasks, executing applications, and controlling peripherals.", tags12, operatingSysP1, NULL },	// Obj 15
   {"[Clue 2] What are the type of OS: Batch OS, Time-Sharing OS, Distibuted OS, Network OS and Real-time OS.", tags13, operatingSysP1,NULL},		// Obj 16
   {"[Clue 3] What are program & processes: A computer program is a set of instructions that perform a specific task when executed. A process is a program in execution.", tags14, operatingSysP1, NULL},			// Obj 17
   {"[Clue 4] The functions of OS: Device Management, Memory Management, Processor Management, File Management, Security & monitors jobs & system performance.", tags15, operatingSysP1, NULL},			// Obj 18
   {"a paper laying on the floor. The paper says 'Collect the items to learn what the terrorist are after'.", tags16, operatingSysP1, NULL},		//Obj 19
   {"Uh-Oh the terrorist found out you were undercover. They have taken you to Kangdong Prison camp.", tags2, operatingSysP1, camp},		// Obj 20
   {"New intel on terrorist plan is in warden's office", tags10, camp, NULL},									// Obj 21
   {"Entrance to warden's office", tags17, camp, operatingSysP2},		// Obj 22
   {"[Clue 5] Memory layout of a process: A program loaded into the memory becomes a process, the memory layout consists of - stack, heap, text, and data.", tags22, operatingSysP2, NULL},	// Obj 23
   {"[Clue 6] Process scheduling is essential part of multiprogramming operating system. there are 6 type of OS: First Come First Serve (FCFS), Shortest Job First (SJF), Shortest Remaining Time First (SRTF), Round Robin (RR) & Multiple Level Queues", tags23, operatingSysP2, NULL},	// Obj 24
   {"[Clue 7] Threads: A thread is a path of execution within a process. A process can contain multiple threads.", tags24, operatingSysP2, NULL},	// Obj 25
   {"After collecting the clues, the special forces squad breaks in the prison to help you escape", tags10, operatingSysP2, NULL},	// Obj 26
   {"After your escape you find out that your next mission is on a yacht called Dreadnought", tags3, operatingSysP2, yacht},		// Obj 27
   {"Guards with AK-47 & G36", tags9, yacht, NULL},		// Obj 28
   {"Enter the engine room through here. [Below]", tags18, yacht, engine}, // Obj 39
   {"Enter the bridge through here. [South]", tags19, yacht, bridge},	 // Obj 30
   {"Enter Lopatin Arthur's Cabin through here. [East]", tags20, yacht, lopatinCabin},	// Obj 31
   {"There are clues on this yacht about OS that you must find before leaving.", tags10, yacht, NULL},	// Obj 32
   {"[Item 8] Main Memory: Memory management is a function of the OS to load the programs into the main memory (RAM).", tags25, engine, NULL},		// Obj 33
   {"Every program to be executed and every file to be accessed must be copied from a storage device into main memory (RAM). It is called loading.", tags10, engine, NULL},	// Obj 34
   {"[Clue 9] Swapping: Swapping is the bringing in each process in main memory (RAM), running it for a while and then putting it back to the secondary memory/disk.", tags26, bridge, NULL},		// Obj 35
   {"[Clue 10] Caching: Frequently accessed data from main memory is copied into faster storage system the cache.", tags27, lopatinCabin, NULL},		// Obj 36
   {"[Clue 11] Process Syncronization: There are two types of processes in process syncronization - Independent Process & Cooperative Process", tags28, lopatinCabin, NULL},	// Obj 37
   {"Independent Process: Execution of one process does not affect the execution of other processes.", tags10, lopatinCabin, NULL},	// Obj 38
   {"Cooperative Process: Execution of one process affects the execution of other processes. Since resources are shared here, process synchronization problems occur here.", tags10, lopatinCabin, NULL},	// Obj 39
   {"Go main deck", tags21, engine, yacht}, 	// Obj 40
   {"Go main deck", tags21, bridge, yacht},	// Obj 41
   {"Go main deck", tags21, lopatinCabin, yacht},	// Obj 42
   {"Go back to hq and finish your last mission", tags0, yacht, hQ},	// Obj 43
   {"In your mission briefing you found out that the terrorist plan was to destroy the world by releasing a virus inside every single OS in the world and sending the us back to stoneage", tags10, sea, NULL},
   {"All the clues that you have gathered has taught you alot about the OS and about Issac Vasily's plan.", tags10, sea, NULL},
   {"Issac Vasily the terrorist leader is getting away on jetski", tags29, sea, nearHim},		// Obj 46
   {"You're getting closer and closer to his jetski, you have two options.", tags10, nearHim, NULL },
   {"Option 1: Take him alive by jumping on his jetski", tags30, nearHim, end1},
   {"Option 2: Shoot him on sight", tags31, nearHim, end2 },
   {"You have managed to capture Issac Vasily alive and he's going to prison forever. Congrats on beating the game", tags10, end1, NULL},	// Obj 50
   {"You sprayed Issac with every single bullet in you weapons and he's pronounced dead and left in the sea to rot", tags10, end2, NULL}	// Obj 51
};
