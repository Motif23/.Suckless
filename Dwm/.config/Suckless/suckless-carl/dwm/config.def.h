/*
 ___  ___      _   _  __
 |  \/  |     | | (_)/ _|
 | .  . | ___ | |_ _| |     
 | |\/| |/ _ \| __| |  _|   Carl Emmanuel (MotifTechServices)
 | |  | | (_) | |_| | |     https://github.com/Motif23/
 \_|  |_/\___/ \__|_|_|

 My .bash_aliases file. Nothing really special; some light customizations and some eye candy. */

/* See LICENSE file for copyright and license details. */

/* appearance */
static const unsigned int borderpx  = 1;        /* border pixel of windows */
static const unsigned int snap      = 32;       /* snap pixel */
static const int swallowfloating    = 0;        /* 1 means swallow floating windows by default */
static const unsigned int gappih    = 10;       /* horiz inner gap between windows */
static const unsigned int gappiv    = 10;       /* vert inner gap between windows */
static const unsigned int gappoh    = 10;       /* horiz outer gap between windows and screen edge */
static const unsigned int gappov    = 10;       /* vert outer gap between windows and screen edge */
static       int smartgaps          = 0;        /* 1 means no outer gap when there is only one window */
static const unsigned int systraypinning = 0;   /* 0: sloppy systray follows selected monitor, >0: pin systray to monitor X */
static const unsigned int systrayspacing = 5;   /* systray spacing */
static const int systraypinningfailfirst = 1;   /* 1: if pinning fails, display systray on the first monitor, False: display systray on the last monitor*/
static const int showsystray        = 1;     /* 0 means no systray */
static const int showbar            = 1;        /* 0 means no bar */
static const int topbar             = 1;        /* 0 means bottom bar */
static const int focusonwheel       = 0;
static const int user_bh            = 22;        /* 0 means that dwm will calculate bar height, >= 1 means dwm will user_bh as bar height */
static const Bool viewontag         = True;     /* Switch view on tag switch */
static const char *fonts[]          = { "monospace:size=12", "NotoColorEmoji:pixelsize=13:antialias=true:autohint=true", "Hack Nerd Font:pixelsize=12:antialias=true:autohint=true" };
/* static const char dmenufont[]       = "monospace:size=10"; */
static const char dmenufont[]       = "Hack Nerd Font:size=10";
static const char col_gray1[]       = "#bbbbbb";
static const char col_gray0[]       = "#131313";
/*static const char col_gray2[]       = "#444444";*/
static const char col_gray2[]       = "#ffffff";
static const char col_gray3[]       = "#2f2f2f";
static const char col_gray4[]       = "#eeeeee";
static const char col_cyan[]        = "#68e1fb";
/*static const char col_grn[]         = "#71988a";*/
static const char col_blu[]         = "#477d8f";
static const char col_urgborder[]   = "#ff0000";
static const unsigned int baralpha = 0xd0;
static const unsigned int borderalpha = OPAQUE;
#include "/home/carl/.cache/wal/colors-wal-dwm.h"
//static const char *colors[][3]      = {
//	/*               fg         bg         border   */
//	[SchemeNorm] = { col_gray2, col_gray0, col_gray0 },
//	[SchemeSel]  = { col_cyan, col_gray3,  col_gray1  },
//	[SchemeUrg]  = { col_gray4, col_cyan,  col_urgborder  },
//};
static const unsigned int alphas[][3]      = {
	/*               fg      bg        border     */
	[SchemeNorm] = { OPAQUE, baralpha, borderalpha },

	[SchemeSel]  = { OPAQUE, baralpha, borderalpha },
};

typedef struct {
	const char *name;
	const void *cmd;
} Sp;
const char *spcmd1[] = {"st", "-n", "spterm", "-g", "120x34", NULL };
const char *spcmd2[] = {"st", "-n", "spfm", "-g", "140x34", "-e", "ranger", NULL };
const char *spcmd3[] = {"st", "-n", "spvim", "-g", "120x34", "-e", "nvim", NULL };
const char *spcmd4[] = {"st", "-n", "spmus", "-g", "115x25", "-e", "ncmpcpp", "-S", "visualizer", NULL };
const char *spcmd5[] = {"st", "-n", "spcalc", "-g", "40x20", "-e", "bc", "-q", NULL };
static Sp scratchpads[] = {
	/* name          cmd  */
	{"spterm",      spcmd1},
	{"spfm",        spcmd2},
	{"spvim",       spcmd3},
	{"spmus",       spcmd4},
	{"spcalc",      spcmd5},
};

/* tagging */
/* static const char *tags[] = { "1", "2", "3", "4", "5", "6", "7", "8", "9" }; */
/* static const char *tags[] = { "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX" }; */
/* static const char *tags[] = { "", "", "", "", "", "", "", "", "" }; */
/* static const char *tags[] = { "", "", "", "", "", "", "", "", "" }; */
/*static const char *tags[] = { "TERM", "WWW", "VIM", "FILE", "DEV", "MUS", "VID", "CONF" };*/
static const char *tags[] = { "1:", "2:", "3:", "4:", "5:", "6:" };

static const int lockfullscreen = 0; /* 1 will force focus on the fullscreen window */static const Rule rules[] = {
	/* xprop(1):
	 *	WM_CLASS(STRING) = instance, class
	 *	WM_NAME(STRING) = title
	 *  use tags mask to point an application to a specific workspace
	 */
	/* class     instance  title           tags mask    iscentered isfloating  isterminal  noswallow  monitor */
	{ "discord",    NULL,     NULL,        1 << 2,           0,         0,          0,           0,        -1 },
	{ "Meld",    	NULL,     NULL,        1 << 2,           0,         0,          0,           0,        -1 },
	{ "Subl",    	NULL,     NULL,        1 << 2,           0,         0,          0,           0,        -1 },
	{ "Emacs",    	NULL,     NULL,        1 << 2,           0,         0,          0,           0,        -1 },
	{ "kate",    	NULL,     NULL,        1 << 2,           0,         0,          0,           0,        -1 },
	{ "Pcmanfm",    NULL,     NULL,        1 << 3,           0,         0,          0,           0,        -1 },
	{ "Lxappearance", NULL,   NULL,   	   1 << 4,           0,         1,          0,           0,        -1 },
	{ "qt5ct",    	NULL,     NULL,        1 << 4,           0,         1,          0,           0,        -1 },
	{ "Rhythmbox",  NULL,     NULL,        1 << 5,           0,         1,          0,           0,        -1 },
	{ "vlc",    	NULL,     NULL,        1 << 5,           0,         0,          0,           0,        -1 },
	{ "firefox", 	NULL,     NULL,        1 << 1,      	 0,         0,          0,          -1,        -1 },
	{ "qutebrowser", NULL,    NULL,        1 << 1,      	 0,         0,          0,          -1,        -1 },
	{ "St", 		NULL,     NULL,        1 << 0,           0,         0,          1,           0,        -1 },
	{ "Alacritty", NULL,     NULL,         1 << 0,           0,         0,          1,           0,        -1 },
	{ "Terminator", NULL,     NULL,             0,           0,         1,          1,           0,        -1 },
	{ NULL,      	NULL,  "Event Tester", 0,           0,         0,          0,           1,        -1 }, /* xev */
	{ NULL,		 "spterm", NULL,		   SPTAG(0),	1,         1,		   0,           0,        -1 },
	{ NULL,		 "spfm",   NULL,		   SPTAG(1),	1,         1,		   0,           0,        -1 },
	{ NULL,		 "spvim",  NULL,		   SPTAG(2),	1,         1,		   0,	        0,        -1 },
    { NULL,		 "spmus",  NULL,		   SPTAG(3),	1,         1,		   0,           0,        -1 },
    { NULL,		 "spcalc", NULL,		   SPTAG(4),	1,         1,		   0,	        0,        -1 },
};

/* layout(s) */
static const float mfact     = 0.50; /* factor of master area size [0.05..0.95] */
static const int nmaster     = 1;    /* number of clients in master area */
static const int resizehints = 0;    /* 1 means respect size hints in tiled resizals */

#define FORCE_VSPLIT 1  /* nrowgrid layout: force two clients to always split vertically */
#include "vanitygaps.c"

static const Layout layouts[] = {
	/* symbol     arrange function */
	{ "[]=",      tile },    /* Default: Master on left, stack on right */
	{ "><>",      NULL },    /* no layout function means floating behavior */
	{ "HHH",      grid },	/* Equally sized windows, empty cell with odd number windows */
	{ "[M]",      monocle },	/* All windows on top of eachother */
	{ "TTT",      bstack },		/* Master on top, stack on bottom */
	{ "===",      bstackhoriz },	/* Master on top, stack horizontally stacked on bottom */
	{ "|M|",      centeredmaster },	/* Master in middle, stack on sides */
	{ ">M>",      centeredfloatingmaster },	/* Same but master floats */
	{ "[D]",      deck },	/* Master on left, stack in monocle-like mode on right */
	{ "[@]",      spiral },	/* Fibonacci spiral */
	{ "[\\]",     dwindle },	/* Decreasing in size right and leftward */
	{ "###",      horizgrid },	/* Grid, horizontally layed out */
	{ "###",      nrowgrid },	/* Adds padding aroung terminal output */
	{ ":::",      gaplessgrid },	/* No empty cells even with odd number windows */
	{ NULL,       NULL },
};

/* key definitions */
#define MODKEY Mod4Mask
#define TAGKEYS(KEY,TAG) \
	{ MODKEY,                       KEY,      view,           {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask,           KEY,      toggleview,     {.ui = 1 << TAG} }, \
	{ MODKEY|ShiftMask,             KEY,      tag,            {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask|ShiftMask, KEY,      toggletag,      {.ui = 1 << TAG} },

/* helper for spawning shell commands in the pre dwm-5.0 fashion */
#define SHCMD(cmd) { .v = (const char*[]){ "/bin/sh", "-c", cmd, NULL } }

/* commands */
static char dmenumon[2] = "0"; /* component of dmenucmd, manipulated in spawn() */
/* static const char *dmenucmd[] = { "dmenu_run", "-m", dmenumon, "-fn", dmenufont, "-nb", col_gray1, "-nf", col_gray3, "-sb", col_cyan, "-sf", col_gray4, NULL };  */
static const char *dmenucmd[] = { "dmenu_run", "-m", dmenumon, "-fn", dmenufont, "-nb", col_gray0, "-nf", col_gray2, "-sb", col_gray3, "-sf", col_cyan, NULL };
static const char *filecmd[]  = { "pcmanfm", NULL };
static const char *calendar[]  = { "gsimplecal", NULL };
static const char *taskmanager[]  = { "xfce4-taskmanager", NULL };
static const char *termcmd[]  = { "alacritty", NULL };

#include "shiftview.c"

#include "selfrestart.c"

static Key keys[] = {
	/* modifier                     key        function        argument */
	{ MODKEY,                       XK_p,      spawn,          {.v = dmenucmd } },
	{ MODKEY|ShiftMask,             XK_Return, spawn,          {.v = filecmd } },
	{ MODKEY,                       XK_Return, spawn,          {.v = termcmd } },
	{ MODKEY,                       XK_b,      togglebar,      {0} },
	{ MODKEY|ShiftMask,             XK_j,      rotatestack,    {.i = -1 } },
	{ MODKEY|ShiftMask,             XK_k,      rotatestack,    {.i = +1 } },
	{ MODKEY,                       XK_j,      focusstack,     {.i = -1 } },
	{ MODKEY,                       XK_k,      focusstack,     {.i = +1 } },
	{ MODKEY,                       XK_Right,  focusstack,     {.i = -1 } },
	{ MODKEY,                       XK_Left,   focusstack,     {.i = +1 } },
	{ MODKEY,                       XK_i,      incnmaster,     {.i = +1 } },
	{ MODKEY,                       XK_d,      incnmaster,     {.i = -1 } },
	{ MODKEY,                       XK_h,      setmfact,       {.f = -0.05} },
	{ MODKEY,                       XK_l,      setmfact,       {.f = +0.05} },
	{ MODKEY|Mod1Mask,              XK_Return, zoom,           {0} },
	{ MODKEY|Mod1Mask,              XK_u,      incrgaps,       {.i = +1 } }, // overall gaps
	{ MODKEY|Mod1Mask|ShiftMask,    XK_u,      incrgaps,       {.i = -1 } }, // overall gaps
	{ MODKEY|Mod1Mask,              XK_i,      incrigaps,      {.i = +1 } }, // inner gaps
	{ MODKEY|Mod1Mask|ShiftMask,    XK_i,      incrigaps,      {.i = -1 } }, // inner gaps
	{ MODKEY|Mod1Mask,              XK_o,      incrogaps,      {.i = +1 } }, // outer gaps
	{ MODKEY|Mod1Mask|ShiftMask,    XK_o,      incrogaps,      {.i = -1 } }, // outer gaps
	{ MODKEY|Mod1Mask,              XK_g,      togglegaps,     {0} },
	{ MODKEY|Mod1Mask|ShiftMask,    XK_0,      defaultgaps,    {0} },
	/*{ MODKEY,                       XK_Tab,    view,           {0} },*/
	{ MODKEY|ShiftMask,             XK_q,      killclient,     {0} },
	{ MODKEY,                       XK_q,      killclient,     {0} },
	{ MODKEY,                       XK_t,      setlayout,      {.v = &layouts[0]} },
	{ MODKEY,                       XK_f,      setlayout,      {.v = &layouts[1]} },
	{ MODKEY,                       XK_g,      setlayout,      {.v = &layouts[2]} },
	{ MODKEY,                       XK_m,      setlayout,      {.v = &layouts[3]} },
	{ MODKEY,                       XK_s,      setlayout,      {.v = &layouts[4]} },
	{ MODKEY,                       XK_o,      setlayout,      {.v = &layouts[5]} },
	{ MODKEY,                       XK_c,      setlayout,      {.v = &layouts[6]} },
	{ MODKEY,                       XK_v,      setlayout,      {.v = &layouts[7]} },
	{ MODKEY,                       XK_e,      setlayout,      {.v = &layouts[8]} },
	{ Mod1Mask,                     XK_r,      setlayout,      {.v = &layouts[9]} },
	{ Mod1Mask|ShiftMask,           XK_r,      setlayout,      {.v = &layouts[10]} },
	{ MODKEY|ControlMask,			XK_Left,   cyclelayout,    {.i = -1 } },
	{ MODKEY|ControlMask,           XK_Right,  cyclelayout,    {.i = +1 } },
	{ MODKEY,                       XK_space,  cyclelayout,    {.i = +1 } },
	{ MODKEY|ShiftMask,             XK_f,  togglefloating,     {0} },
	{ MODKEY,                       XK_0,      view,           {.ui = ~0 } },
	{ MODKEY|ShiftMask,             XK_0,      tag,            {.ui = ~0 } },
	{ MODKEY,                       XK_comma,  focusmon,       {.i = -1 } },
	{ MODKEY,                       XK_period, focusmon,       {.i = +1 } },
	{ MODKEY|ShiftMask,             XK_comma,  tagmon,         {.i = -1 } },
	{ MODKEY|ShiftMask,             XK_period, tagmon,         {.i = +1 } },
	{ MODKEY|ControlMask,           XK_t,	   togglescratch,  {.ui = 0 } },
	{ MODKEY|ControlMask,           XK_f,	   togglescratch,  {.ui = 1 } },
	{ MODKEY|ControlMask,           XK_v,	   togglescratch,  {.ui = 2 } },
	{ MODKEY|ControlMask,           XK_m,	   togglescratch,  {.ui = 3 } },
	{ MODKEY|ControlMask,           XK_c,	   togglescratch,  {.ui = 4 } },
	{ Mod1Mask|ControlMask,         XK_Right,  shiftview,      {.i = +1 } },
	{ Mod1Mask|ControlMask,         XK_Left,   shiftview,      {.i = -1 } },
	{ Mod1Mask|ControlMask,         XK_Up,     shiftview,      {.i = +1 } },
	{ Mod1Mask|ControlMask,         XK_Down,   shiftview,      {.i = -1 } },

	TAGKEYS(                        XK_1,                      0)
	TAGKEYS(                        XK_2,                      1)
	TAGKEYS(                        XK_3,                      2)
	TAGKEYS(                        XK_4,                      3)
	TAGKEYS(                        XK_5,                      4)
	TAGKEYS(                        XK_6,                      5)
	TAGKEYS(                        XK_7,                      6)
	TAGKEYS(                        XK_8,                      7)
	TAGKEYS(                        XK_9,                      8)
    { MODKEY|ShiftMask,             XK_r,      self_restart,   {0} },
};

/* IF YOU HAVE A AZERTY KEYBOARD USE THESE CODES
	TAGKEYS(                        XK_ampersand,              0)
	TAGKEYS(                        XK_eacute,                 1)
	TAGKEYS(                        XK_quotedbl,               2)
	TAGKEYS(                        XK_apostrophe,             3)
	TAGKEYS(                        XK_parenleft,              4)
	TAGKEYS(                        XK_section,                5)
	TAGKEYS(                        XK_egrave,                 6)
	TAGKEYS(                        XK_exclam,                 7)
	TAGKEYS(                        XK_ccedilla,               8)
*/

/* THESE ARE THE ORIGINAL QWERTY KEYBOARD CODES
	TAGKEYS(                        XK_1,                      0)
	TAGKEYS(                        XK_2,                      1)
	TAGKEYS(                        XK_3,                      2)
	TAGKEYS(                        XK_4,                      3)
	TAGKEYS(                        XK_5,                      4)
	TAGKEYS(                        XK_6,                      5)
	TAGKEYS(                        XK_7,                      6)
	TAGKEYS(                        XK_8,                      7)
	TAGKEYS(                        XK_9,                      8)
*/

/* button definitions */
/* click can be ClkTagBar, ClkLtSymbol, ClkStatusText, ClkWinTitle, ClkClientWin, or ClkRootWin */
static Button buttons[] = {
	/* click                event mask      button          function        argument */
	{ ClkLtSymbol,          0,              Button1,        setlayout,      {0} },
	{ ClkLtSymbol,          0,              Button3,        setlayout,      {.v = &layouts[2]} },
	{ ClkWinTitle,          0,              Button2,        zoom,           {0} },
	{ ClkStatusText,        0,              Button1,        spawn,          {.v = taskmanager } },
	{ ClkStatusText,        0,              Button2,        spawn,          {.v = filecmd } },
	{ ClkStatusText,        0,              Button3,        spawn,          {.v = calendar } },
	{ ClkClientWin,         MODKEY,         Button1,        movemouse,      {0} },
	{ ClkClientWin,         MODKEY,         Button2,        togglefloating, {0} },
	{ ClkClientWin,         Mod1Mask,       Button1,        resizemouse,    {0} },
	{ ClkTagBar,            0,              Button1,        view,           {0} },
	{ ClkTagBar,            0,              Button3,        toggleview,     {0} },
	{ ClkTagBar,            MODKEY,         Button1,        tag,            {0} },
	{ ClkTagBar,            MODKEY,         Button3,        toggletag,      {0} },
};
