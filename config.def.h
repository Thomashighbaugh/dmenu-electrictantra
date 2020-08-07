

/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 0;                    /* -c option; centers dmenu on screen */
static int min_width = 600;                    /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Share Tech Bold:pixelsize=12:antialias=true:autohint=true",
	"Hack:pixelsize=11:antialias=true:autohint=true",
	"JoyPixels:pixelsize=18:antialias=true:autohint=true"
};
static const char *prompt      = NULL;      /* -p option; prompt to the left of input field */
static const char *colors[][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#edeeff", "#24232a" },
	[SchemeSel] = { "#00caff", "#24232a" },
	[SchemeSelHighlight] = { "#00caff", "#24232a" },
	[SchemeNormHighlight] = { "#f2f2f2", "#24232a" },
	[SchemeOut] = { "#000000", "#00caff" },
	[SchemeMid] = { "#d7d7d7", "#24232a" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
static unsigned int lineheight = 22;         /* -h option; minimum height of a menu line     */

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 0;  /* -bw option; to add border width */
