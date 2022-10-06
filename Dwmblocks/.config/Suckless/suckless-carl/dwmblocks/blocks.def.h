//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/ /*Command*/	 	                            /*Update Interval*/	/*Update Signal*/
    {"", "~/.local/bin/volume.sh",     3,		              10},

    {"", "~/.local/bin/network.sh",  1,		          0},

    {"", "~/.local/bin/netspeed.sh",  1,		          16},

    {"", "~/.local/bin/battery.sh",  5,		          3},

    {"", "~/.local/bin/pacupdate.sh",  360,		          9},

    {"", "~/.local/bin/upt.sh",		 60,		          2},
	
	{"", "~/.local/bin/memory.sh",	 6,		              1},

	{"", "~/.local/bin/weather.sh",	 360,		          2},

	{"", "~/.local/bin/clock.sh",	     1,	              0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = ' ';
