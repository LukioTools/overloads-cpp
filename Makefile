
DIR=/usr/include/cppostream

install:
	mkdir -p $(DIR)
	cp *.hpp $(DIR)

uninstall:
	rm -r $(DIR)