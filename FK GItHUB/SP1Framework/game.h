#ifndef _GAME_H
#define _GAME_H

#include "Framework\timer.h"
#include "Startscreen.h"
extern CStopWatch g_swTimer;
extern bool g_bQuitGame;

// Enumeration to store the control keys that your game will have
enum EKEYS
{
    K_UP,
    K_DOWN,
    K_LEFT,
    K_RIGHT,
    K_ESCAPE,
    K_SPACE,
	K_ENTER,
	K_LEFTM,
    K_COUNT
};

// Enumeration for the different screen states
enum EGAMESTATES
{
    S_TITLESCREEN,
	S_TITLESCREEN1,
	S_TITLESCREEN2,
	S_TITLESCREEN3,
	S_TITLESCREEN4,
    S_GAME,
    S_COUNT,
	S_CHARACTERSTAT,
	S_INVENTORY,
	S_OPTIONS,
	S_COMBAT,
	S_CONTROLS 
};

// struct for the game character
struct SGameChar
{
    COORD m_cLocation;
    bool  m_bActive;
};

void init        ( void );      // initialize your variables, allocate memory, etc
void getInput    ( void );      // get input from player
void update      ( double dt ); // update the game and the state of the game
void render      ( void );      // renders the current state of the game to the console
void shutdown    ( void );      // do clean up, free memory

void titleScreenWait1();    // waits for time to pass in title screen
void titleScreenWait2();    // waits for time to pass in title screen
void titleScreenWait3();
void titleScreenWait4();
void gameplay();            // gameplay logic
void moveCharacter();       // moves the character, collision detection, physics, etc
void processUserInput();    // checks if you should change states or do something else with the game, e.g. pause, exit
void clearScreen();         // clears the current screen and draw from scratch 
void rendertitleScreen1();  // renders the title screen
void rendertitleScreen2();
void rendertitleScreen3();
void rendertitleScreen4();
void rendertitleScreen5();
void rendertitleScreen6();
void rendertitleScreen7();
void rendertitleScreen8();
void renderGame();          // renders the game stuff
void renderMap();           // renders the map to the buffer first
void renderCharacter();     // renders the character into the buffer
void renderFramerate();     // renders debug information, frame rate, elapsed time, etc
void renderToScreen();      // dump the contents of the buffer to the screen, one frame worth of game
string titlestart();
#endif // _GAME_H