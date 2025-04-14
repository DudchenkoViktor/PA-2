#
# Regular cron jobs for the program package.
#
0 4	* * *	root	[ -x /usr/bin/program_maintenance ] && /usr/bin/program_maintenance
