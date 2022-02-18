/* user and group to drop privileges to */
static const char *user  = "gnaig";
static const char *group = "gnaig";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#292d3e",     /* after initialization */
	[INPUT] =  "#82aaff",   /* during input */
	[FAILED] = "#ff5370",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
