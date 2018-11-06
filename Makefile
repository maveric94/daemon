all: rebuild copy_plist
	
rebuild:
	g++ main.cpp -o /usr/local/libexec/dummy

copy_plist:
	cp dummy.plist /Library/LaunchDaemons/dummy.plist
	chmod 600 /Library/LaunchDaemons/dummy.plist
	chown root /Library/LaunchDaemons/dummy.plist